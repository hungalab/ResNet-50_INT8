#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <string.h>
#include "../params/c1_weight.h"

#define C1_K 7
#define P1_K 3

#define C1_ICH 3
#define C1_OCH 64
#define P1_OCH 64

#define C1_ISIZE 224
#define C1_OSIZE 112
#define P1_OSIZE 56

#define C1_S 2
#define P1_S 2

#define C1_P 3
#define P1_P 1

#define TOO 64
#define TII 32
#define MAXBUFSIZE (56*56*256)
#define TO_MAX (256/TOO)
#define INPUTSIZE (56*56*64)
#define OUTPUTSIZE (56*56*256)

#define INPUT_SCALE 0.037455279380083084

#define L10_Ad_SCALE1  0.032741695642471313 / 0.035102978348731995
#define L10_Ad_SCALE2  0.020515695214271545 / 0.035102978348731995
#define L11_Ad_SCALE1  0.035102978348731995 / 0.022906972095370293
#define L11_Ad_SCALE2  0.016127794981002808 / 0.022906972095370293

#define L10_Cd_OFFSET 0
#define L10_C1_OFFSET (L10_Cd_OFFSET +  64*256*1*1 + 256*4*2)
#define L10_C2_OFFSET (L10_C1_OFFSET +  64* 64*1*1 +  64*4*2)
#define L10_C3_OFFSET (L10_C2_OFFSET +  64* 64*3*3 +  64*4*2)

#define L11_C1_OFFSET (L10_C3_OFFSET +  64*256*1*1 + 256*4*2)
#define L11_C2_OFFSET (L11_C1_OFFSET + 256* 64*1*1 +  64*4*2)
#define L11_C3_OFFSET (L11_C2_OFFSET +  64* 64*3*3 +  64*4*2)

#define DDRSIZE       (L11_C3_OFFSET +  64*256*1*1 + 256*4*2)


typedef volatile ap_uint<128> ddr_t;
typedef ap_int<27> weight_t;
typedef float bias_t;
typedef float scale_t;
typedef ap_int<9> fm_t;
typedef ap_uint<8> in_t;
typedef ap_int<24> out_t;
typedef ap_uint<48> obuf_t;


void load_bias_scale(bias_t bias[TO_MAX][TOO], scale_t scale[TO_MAX][TOO], ddr_t ddr[], int TO, int offset){
#pragma HLS INLINE off

	for(int i=0; i<TO; i++){
#pragma HLS PIPELINE
		for(int j=0; j<TOO/4; j++){
#pragma HLS UNROLL
			ap_uint<128> tmp;
			tmp = ddr[offset + i*TOO/4 + j];
			for(int k=0; k<4; k++){
	#pragma HLS UNROLL
				union {int i; float f;} c;
				c.i = tmp.range(32*k + 31, 32*k);
				bias[i][j*4 + k] = c.f;
			}
		}
	}

	for(int i=0; i<TO; i++){
#pragma HLS PIPELINE
		for(int j=0; j<TOO/4; j++){
#pragma HLS UNROLL
			ap_uint<128> tmp;
			tmp = ddr[offset + TO*TOO/4 + i*TOO/4 + j];
			for(int k=0; k<4; k++){
	#pragma HLS UNROLL
				union {int i; float f;} c;
				c.i = tmp.range(32*k + 31, 32*k);
				scale[i][j*4 + k] = c.f;
			}
		}
	}

	return;
}


void load_weight(weight_t weight[TOO*TII/2], ddr_t ddr[], int offset){
#pragma HLS INLINE off

	for(int i=0; i<TOO*TII/16; i++){
#pragma HLS UNROLL
		ap_uint<128> tmp;
		tmp = ddr[offset/16 + i];
		for(int j=0; j<8; j++){
#pragma HLS UNROLL
			weight[i*8 + j] = ((ap_int<8>)tmp.range((2*j)*8 + 7, (2*j)*8)) * 262144 +
					           ((ap_int<8>)tmp.range((2*j+1)*8 + 7, (2*j+1)*8));
		}
	}

	return;
}

void compute(weight_t weight[TOO*TII/2], fm_t input[MAXBUFSIZE/TII][TII], obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2],
		int OSIZE, int TO, int TI, int K,  int S, int P, int to, int ti, int i, int j){
#pragma HLS INLINE off

	Compute:for(int row=0; row<OSIZE; row++){
#pragma HLS loop_tripcount min=7 max=56
		for(int col=0; col<OSIZE; col++){
#pragma HLS loop_tripcount min=7 max=56
#pragma HLS PIPELINE
			if(S*row+i-P>=0 && S*row+i-P<S*OSIZE && S*col+j-P>=0 && S*col+j-P<S*OSIZE){
				in_t inbuf[TII];
				for(int li=0; li<TII; li++){
#pragma HLS UNROLL
					inbuf[li] = input[(S*row+i-P)*S*OSIZE*TI + (S*col+j-P)*TI + ti][li].sign() ? (in_t)0 : (in_t)input[(S*row+i-P)*S*OSIZE*TI + (S*col+j-P)*TI + ti][li];
				}
				for(int too=0; too<TOO/2; too++){
#pragma HLS UNROLL
#pragma HLS dependence variable=outbuf inter false
					for(int tii=0; tii<TII/8; tii++){
#pragma HLS UNROLL
						ap_uint<36> tmpout = 0;
						for(int d=0; d<8; d++){
#pragma HLS UNROLL
							tmpout += weight[too*TII + tii*8 + d] * inbuf[tii*8 + d];
						}
						outbuf[row*OSIZE*TO + col*TO + to][too] += ((ap_int<18>)tmpout.range(35, 18)) * 16777216 + ((ap_int<18>)tmpout.range(17, 0));
					}
				}
			}
		}
	}

	return;
}

void store_output(obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2], fm_t output[MAXBUFSIZE/TII][TII],
		bias_t bias[TO_MAX][TOO], scale_t scale[TO_MAX][TOO], int OSIZE, int TO){

	for(int row=0; row<OSIZE; row++){
		for(int col=0; col<OSIZE; col++){
			for(int to=0; to<TO; to++){
#pragma HLS PIPELINE
				for(int too=0; too<TOO/2; too++){
#pragma HLS UNROLL
					obuf_t tmp_out;
					out_t tmp0, tmp1;
					float out0, out1;
					tmp_out = outbuf[row*OSIZE*TO + col*TO + to][too];
					outbuf[row*OSIZE*TO + col*TO + to][too] = 0;
					tmp0.range(23, 0) = tmp_out(47, 24) + tmp_out[23];
					tmp1.range(23, 0) = tmp_out(23, 0);
					out0 = roundf(tmp0 * scale[to][2*too  ] + bias[to][2*too  ]);
					out1 = roundf(tmp1 * scale[to][2*too+1] + bias[to][2*too+1]);
					output[row*OSIZE*TO*TOO/TII + col*TO*TOO/TII + to*TOO/TII + (2*too  )/TII][(2*too  )%TII] = (out0>255.0) ? (fm_t)255 : (fm_t)out0;
					output[row*OSIZE*TO*TOO/TII + col*TO*TOO/TII + to*TOO/TII + (2*too+1)/TII][(2*too+1)%TII] = (out1>255.0) ? (fm_t)255 : (fm_t)out1;
				}
			}
		}
	}

	return;
}

void conv_layer(fm_t input[MAXBUFSIZE/TII][TII], fm_t output[MAXBUFSIZE/TII][TII], obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2],
		ddr_t ddr[], int OSIZE, int TO, int TI, int K, int S, int P, int OFFSET
){
	bias_t bias[TO_MAX][TOO];
	scale_t scale[TO_MAX][TOO];
#pragma HLS array_reshape variable=bias   complete dim=2
#pragma HLS RESOURCE variable=bias   core=RAM_1P_URAM
#pragma HLS array_reshape variable=scale   complete dim=2
#pragma HLS RESOURCE variable=scale   core=RAM_1P_BRAM

    load_bias_scale(bias, scale, ddr, TO, (OFFSET + TO*TI*TOO*TII*K*K)/16);

    Convolution:for(int l=0; l<TO*TI*K*K; l++){
#pragma HLS DATAFLOW
#pragma HLS stable variable=input
#pragma HLS stable variable=outbuf
#pragma HLS loop_tripcount min=2 max=2304

    	int to = l / (TI*K*K);
    	int ti = (l/(K*K)) % TI;
    	int i = (l/K) % K;
    	int j = l % K;
    	weight_t weight[TOO*TII/2];
#pragma HLS array_partition variable=weight complete dim=0

    	load_weight(weight, ddr, OFFSET + l*TOO*TII);
    	compute(weight, input, outbuf, OSIZE, TO, TI, K, S, P, to, ti, i, j);
    }

	store_output(outbuf, output, bias, scale, OSIZE, TO);

	return;
}



void add(
	    fm_t input1[MAXBUFSIZE/TII][TII], fm_t input2[MAXBUFSIZE/TII][TII], fm_t output[MAXBUFSIZE/TII][TII],
		int OSIZE, int TI, scale_t SCALE1, scale_t SCALE2
){

    Add:for(int row=0; row<OSIZE; row++){
    	for(int col=0; col<OSIZE; col++){
    		for(int ti=0; ti<TI; ti++){
#pragma HLS PIPELINE
    			for(int tii=0; tii<TII; tii++){
#pragma HLS UNROLL
    				float add_result;
    				fm_t relu_result;
					add_result = roundf(input1[row*OSIZE*TI + col*TI + ti][tii] * SCALE1 +
								 	    input2[row*OSIZE*TI + col*TI + ti][tii] * SCALE2);
					if(add_result < 0.0){
						relu_result = 0;
					}else if(add_result > 255.0){
						relu_result = 255;
					}else{
						relu_result = (fm_t)add_result;
					}
					output[row*OSIZE*TI + col*TI + ti][tii] = relu_result;
    			}
    		}
    	}
    }

	return;
}

void conv1_compute(fm_t input[C1_ISIZE][C1_ISIZE][C1_ICH], ap_int<8> c1_weight[C1_K*C1_K][C1_OCH*C1_ICH],
		out_t tmpout[C1_OCH], int row, int col){
#pragma HLS INLINE

	for(int too=0; too<C1_OCH; too++){
#pragma HLS UNROLL
		tmpout[too] = 0;
	}

	for(int i=0; i<C1_K; i++){
		for(int j=0; j<C1_K; j++){
#pragma HLS PIPELINE
			if(C1_S*row+i-C1_P>=0 && C1_S*row+i-C1_P<C1_ISIZE && C1_S*col+j-C1_P>=0 && C1_S*col+j-C1_P<C1_ISIZE){
				for(int too=0; too<C1_OCH; too++){
					for(int tii=0; tii<C1_ICH; tii++){
						tmpout[too] += input[C1_S*row+i-C1_P][C1_S*col+j-C1_P][tii] * c1_weight[i*C1_K + j][too*C1_ICH + tii];
					}
				}
			}
		}
	}

	return;
}

void conv1_store(out_t tmpout[C1_OCH], fm_t output[MAXBUFSIZE/TII][TII], bias_t c1_bias[C1_OCH], scale_t c1_scale[C1_OCH], int row, int col){
#pragma HLS INLINE

	for(int ti=0; ti<C1_OCH/TII; ti++){
#pragma HLS PIPELINE
		for(int tii=0; tii<TII; tii++){
			float out;
			fm_t result;
			out = roundf(tmpout[ti*TII + tii] * c1_scale[ti*TII + tii] + c1_bias[ti*TII + tii]);
			if(out < 0.0) result = 0;
			else if(out > 255.0) result = 255;
			else result = (fm_t)out;
			output[row*C1_OSIZE*C1_OCH/TII + col*C1_OCH/TII + ti][tii] = result;
		}
	}

	return;
}

void conv1(
    fm_t input[C1_ISIZE][C1_ISIZE][C1_ICH], fm_t output[MAXBUFSIZE/TII][TII],
    ap_int<8> c1_weight[C1_K*C1_K][C1_OCH*C1_ICH], bias_t c1_bias[C1_OCH], scale_t c1_scale[C1_OCH]
){

#pragma HLS array_partition variable=c1_weight complete dim=2
#pragma HLS array_partition variable=c1_bias   complete
#pragma HLS array_partition variable=c1_scale  complete


	for(int row=0; row<C1_OSIZE; row++){
		for(int col=0; col<C1_OSIZE; col++){
#pragma HLS DATAFLOW
#pragma HLS stable variable=input
#pragma HLS stable variable=output
#pragma HLS stable variable=c1_weight
#pragma HLS stable variable=c1_bias
#pragma HLS stable variable=c1_scale

			out_t tmpout[C1_OCH];
#pragma HLS array_partition variable=tmpout

			conv1_compute(input, c1_weight, tmpout, row, col);
			conv1_store(tmpout, output, c1_bias, c1_scale, row, col);

        }
    }

    return;
}

void maxpool(fm_t input[MAXBUFSIZE/TII][TII], fm_t output[MAXBUFSIZE/TII][TII]){

    maxpool:for(int row=0; row<P1_OSIZE; row++){
        for(int col=0; col<P1_OSIZE; col++){

            fm_t tmp_max[C1_OCH];
#pragma HLS array_partition variable=tmp_max complete

            for(int co=0; co<C1_OCH; co++){
#pragma HLS UNROLL
                tmp_max[co] = 0;
            }

            mp_compute:for(int i=0; i<P1_K; i++){
                for(int j=0; j<P1_K; j++){
#pragma HLS PIPELINE
                    if(P1_S*row+i-P1_P>=0 && P1_S*row+i-P1_P<C1_OSIZE && P1_S*col+j-P1_P>=0 && P1_S*col+j-P1_P<C1_OSIZE){
                        for(int ch=0; ch<C1_OCH; ch++){
#pragma HLS UNROLL
                            if(tmp_max[ch] < input[(P1_S*row+i-P1_P)*C1_OSIZE*C1_OCH/TII + (P1_S*col+j-P1_P)*C1_OCH/TII + ch/TII][ch%TII]){
                                tmp_max[ch] = input[(P1_S*row+i-P1_P)*C1_OSIZE*C1_OCH/TII + (P1_S*col+j-P1_P)*C1_OCH/TII + ch/TII][ch%TII];
                            }
                        }
                    }
                }
            }

            for(int so=0; so<C1_OCH; so++){
#pragma HLS UNROLL
                output[row*P1_OSIZE*P1_OCH/TII + col*P1_OCH/TII + so/TII][so%TII] = tmp_max[so];
            }

        }
    }

    return;
}


void resnet50_0(
        volatile ap_uint<256> input[],
        volatile ap_uint<169> sw0out[],
        ap_uint<4> startt[1],
        ap_uint<4> stopt[1],
        ddr_t ddr[]
){
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE axis port=startt
#pragma HLS INTERFACE axis port=stopt
#pragma HLS INTERFACE axis port=input
#pragma HLS INTERFACE axis port=sw0out
#pragma HLS INTERFACE m_axi depth=1024 port=ddr

	static fm_t buf0[MAXBUFSIZE/TII][TII];
	static fm_t buf1[MAXBUFSIZE/TII][TII];
	static fm_t buf2[MAXBUFSIZE/TII][TII];
	static obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2];
	static fm_t inbuf[C1_ISIZE][C1_ISIZE][C1_ICH];

#pragma HLS array_reshape variable=buf0    complete dim=2
#pragma HLS array_reshape variable=buf1    complete dim=2
#pragma HLS array_reshape variable=buf2    complete dim=2
#pragma HLS array_reshape variable=outbuf  complete dim=2
#pragma HLS array_reshape variable=inbuf   cyclic factor=8 dim=2
#pragma HLS array_reshape variable=inbuf   complete dim=3

#pragma HLS RESOURCE variable=buf0    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf1    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf2    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=outbuf  core=RAM_2P_BRAM
#pragma HLS RESOURCE variable=inbuf   core=RAM_2P_URAM

    startt[0] = 1;

    for(int ch=0; ch<C1_ICH; ch++){
    	for(int row=0; row<C1_ISIZE; row++){
    		for(int col=0; col<C1_ISIZE/8; col++){
#pragma HLS PIPELINE
    	        ap_uint<256> tmp = input[ch*C1_ISIZE*C1_ISIZE/8 + row*C1_ISIZE/8 + col];
    	        for(int j=0; j<8; j++){
    	#pragma HLS UNROLL
    	            union {int i; float f;} c;
    	            c.i = tmp.range(32*j + 31, 32*j);
    	            inbuf[row][col*8 + j][ch] = roundf(c.f / INPUT_SCALE);
    	        }
    		}
    	}
    }

    conv1(inbuf, buf1, c1_weight, c1_bias, c1_scale);
    maxpool(buf1, buf0);

	conv_layer(buf0, buf1, outbuf, ddr, 56,  256/TOO,   64/TII, 1, 1, 0, L10_Cd_OFFSET); //L10_CONV_d
    conv_layer(buf0, buf2, outbuf, ddr, 56,   64/TOO,   64/TII, 1, 1, 0, L10_C1_OFFSET); //L10_CONV_1
    conv_layer(buf2, buf0, outbuf, ddr, 56,   64/TOO,   64/TII, 3, 1, 1, L10_C2_OFFSET); //L10_CONV_2
    conv_layer(buf0, buf2, outbuf, ddr, 56,  256/TOO,   64/TII, 1, 1, 0, L10_C3_OFFSET); //L10_CONV_3
    add(buf1, buf2, buf0, 56,  256/TII, L10_Ad_SCALE1, L10_Ad_SCALE2);

    conv_layer(buf0, buf1, outbuf, ddr, 56,   64/TOO,  256/TII, 1, 1, 0, L11_C1_OFFSET); //L11_CONV_1
    conv_layer(buf1, buf2, outbuf, ddr, 56,   64/TOO,   64/TII, 3, 1, 1, L11_C2_OFFSET); //L11_CONV_2
    conv_layer(buf2, buf1, outbuf, ddr, 56,  256/TOO,   64/TII, 1, 1, 0, L11_C3_OFFSET); //L11_CONV_3
    add(buf0, buf1, buf2, 56,  256/TII, L11_Ad_SCALE1, L11_Ad_SCALE2);


	for(int s=0; s<OUTPUTSIZE/TII; s++){
		for(int i=0; i<TII/16; i++){
#pragma HLS PIPELINE
				ap_uint<169> tmp;
				for(int j=0; j<16; j++){
					in_t tmp_out;
					tmp_out = (in_t)buf2[s][i*16 + j];
					tmp.range(j*8+7, j*8) = tmp_out.range(7, 0);
				}
				sw0out[s*TII/16 + i] = tmp;
		}
	}

    stopt[0] = 1;

    return;
}





