#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <string.h>

#define TOO 64
#define TII 32
#define MAXBUFSIZE (56*56*256)
#define TO_MAX (1024/TOO)
#define INPUTSIZE (56*56*256)
#define OUTPUTSIZE (14*14*1024)


#define L12_Ad_SCALE1  0.022906972095370293 / 0.02851303294301033
#define L12_Ad_SCALE2  0.02355561964213848  / 0.02851303294301033

#define L20_Ad_SCALE1  0.021553104743361473 / 0.028694937005639076
#define L20_Ad_SCALE2  0.02354905940592289  / 0.028694937005639076
#define L21_Ad_SCALE1  0.028694937005639076 / 0.030345192179083824
#define L21_Ad_SCALE2  0.030405322089791298 / 0.030345192179083824
#define L22_Ad_SCALE1  0.030345192179083824 / 0.027333330363035202
#define L22_Ad_SCALE2  0.018680300563573837 / 0.027333330363035202
#define L23_Ad_SCALE1  0.027333330363035202 / 0.02557417005300522
#define L23_Ad_SCALE2  0.016849905252456665 / 0.02557417005300522

#define L30_Ad_SCALE1  0.016776524484157562 / 0.024471191689372063
#define L30_Ad_SCALE2  0.021548030897974968 / 0.024471191689372063
#define L31_Ad_SCALE1  0.024471191689372063 / 0.02869166061282158
#define L31_Ad_SCALE2  0.027499347925186157 / 0.02869166061282158


#define L12_C1_OFFSET 0
#define L12_C2_OFFSET (L12_C1_OFFSET + 256* 64*1*1 +  64*4*2)
#define L12_C3_OFFSET (L12_C2_OFFSET +  64* 64*3*3 +  64*4*2)

#define L20_Cd_OFFSET (L12_C3_OFFSET +  64*256*1*1 + 256*4*2)
#define L20_C1_OFFSET (L20_Cd_OFFSET + 256*512*1*1 + 512*4*2)
#define L20_C2_OFFSET (L20_C1_OFFSET + 256*128*1*1 + 128*4*2)
#define L20_C3_OFFSET (L20_C2_OFFSET + 128*128*3*3 + 128*4*2)

#define L21_C1_OFFSET (L20_C3_OFFSET + 128*512*1*1 + 512*4*2)
#define L21_C2_OFFSET (L21_C1_OFFSET + 512*128*1*1 + 128*4*2)
#define L21_C3_OFFSET (L21_C2_OFFSET + 128*128*3*3 + 128*4*2)

#define L22_C1_OFFSET (L21_C3_OFFSET + 128*512*1*1 + 512*4*2)
#define L22_C2_OFFSET (L22_C1_OFFSET + 512*128*1*1 + 128*4*2)
#define L22_C3_OFFSET (L22_C2_OFFSET + 128*128*3*3 + 128*4*2)

#define L23_C1_OFFSET (L22_C3_OFFSET + 128*512*1*1 + 512*4*2)
#define L23_C2_OFFSET (L23_C1_OFFSET + 512*128*1*1 + 128*4*2)
#define L23_C3_OFFSET (L23_C2_OFFSET + 128*128*3*3 + 128*4*2)

#define L30_Cd_OFFSET (L23_C3_OFFSET +  128* 512*1*1 +  512*4*2)
#define L30_C1_OFFSET (L30_Cd_OFFSET +  512*1024*1*1 + 1024*4*2)
#define L30_C2_OFFSET (L30_C1_OFFSET +  512* 256*1*1 +  256*4*2)
#define L30_C3_OFFSET (L30_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define L31_C1_OFFSET (L30_C3_OFFSET +  256*1024*1*1 + 1024*4*2)
#define L31_C2_OFFSET (L31_C1_OFFSET + 1024* 256*1*1 +  256*4*2)
#define L31_C3_OFFSET (L31_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define DDRSIZE       (L31_C3_OFFSET +  256*1024*1*1 + 1024*4*2)


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


void resnet50_1(
		volatile ap_uint<169> sw0in[],
		volatile ap_uint<169> sw0out[],
		ddr_t ddr[],
		ap_uint<4> startt[1],
		ap_uint<4> stopt[1]
){
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE axis port=sw0in
#pragma HLS INTERFACE axis port=sw0out
#pragma HLS INTERFACE axis port=startt
#pragma HLS INTERFACE axis port=stopt
#pragma HLS INTERFACE m_axi port=ddr depth=1024

	static fm_t buf0[MAXBUFSIZE/TII][TII];
	static fm_t buf1[MAXBUFSIZE/TII][TII];
	static fm_t buf2[MAXBUFSIZE/TII][TII];
	static obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2];

#pragma HLS array_reshape variable=buf0    complete dim=2
#pragma HLS array_reshape variable=buf1    complete dim=2
#pragma HLS array_reshape variable=buf2    complete dim=2
#pragma HLS array_reshape variable=outbuf  complete dim=2

#pragma HLS RESOURCE variable=buf0    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf1    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf2    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=outbuf  core=RAM_2P_BRAM

	for(int l=0; l<INPUTSIZE/TII; l++){
#pragma HLS PIPELINE
		for(int i=0; i<TII/16; i++){
		   ap_uint<169> tmp;
		   tmp = sw0in[l*TII/16 + i];
		   for(int j=0; j<16; j++){
			   in_t intmp;
			   intmp.range(7, 0) = tmp.range(8*j+7, 8*j);
			   buf2[l][i*16 + j] = (fm_t)intmp;
		   }
		}
	}

	startt[0] = (char)buf2[INPUTSIZE/TII - 1][TII-1];

	for(int i=0; i<MAXBUFSIZE/TOO; i++){
#pragma HLS PIPELINE
		for(int j=0; j<TOO/2; j++){
			outbuf[i][j] = 0;
		}
	}


    conv_layer(buf2, buf1, outbuf, ddr, 56,   64/TOO,  256/TII, 1, 1, 0, L12_C1_OFFSET); //L12_CONV_1
    conv_layer(buf1, buf0, outbuf, ddr, 56,   64/TOO,   64/TII, 3, 1, 1, L12_C2_OFFSET); //L12_CONV_2
    conv_layer(buf0, buf1, outbuf, ddr, 56,  256/TOO,   64/TII, 1, 1, 0, L12_C3_OFFSET); //L12_CONV_3
    add(buf2, buf1, buf0, 56,  256/TII, L12_Ad_SCALE1, L12_Ad_SCALE2);

	conv_layer(buf0, buf1, outbuf, ddr, 28,  512/TOO,  256/TII, 1, 2, 0, L20_Cd_OFFSET); //L20_CONV_d
    conv_layer(buf0, buf2, outbuf, ddr, 56,  128/TOO,  256/TII, 1, 1, 0, L20_C1_OFFSET); //L20_CONV_1
    conv_layer(buf2, buf0, outbuf, ddr, 28,  128/TOO,  128/TII, 3, 2, 1, L20_C2_OFFSET); //L20_CONV_2
    conv_layer(buf0, buf2, outbuf, ddr, 28,  512/TOO,  128/TII, 1, 1, 0, L20_C3_OFFSET); //L20_CONV_3
    add(buf1, buf2, buf0, 28,  512/TII, L20_Ad_SCALE1, L20_Ad_SCALE2);

    conv_layer(buf0, buf1, outbuf, ddr, 28,  128/TOO,  512/TII, 1, 1, 0, L21_C1_OFFSET); //L21_CONV_1
    conv_layer(buf1, buf2, outbuf, ddr, 28,  128/TOO,  128/TII, 3, 1, 1, L21_C2_OFFSET); //L21_CONV_2
    conv_layer(buf2, buf1, outbuf, ddr, 28,  512/TOO,  128/TII, 1, 1, 0, L21_C3_OFFSET); //L21_CONV_3
    add(buf0, buf1, buf2, 28,  512/TII, L21_Ad_SCALE1, L21_Ad_SCALE2);

    conv_layer(buf2, buf1, outbuf, ddr, 28,  128/TOO,  512/TII, 1, 1, 0, L22_C1_OFFSET); //L22_CONV_1
    conv_layer(buf1, buf0, outbuf, ddr, 28,  128/TOO,  128/TII, 3, 1, 1, L22_C2_OFFSET); //L22_CONV_2
    conv_layer(buf0, buf1, outbuf, ddr, 28,  512/TOO,  128/TII, 1, 1, 0, L22_C3_OFFSET); //L22_CONV_3
    add(buf2, buf1, buf0, 28,  512/TII, L22_Ad_SCALE1, L22_Ad_SCALE2);

    conv_layer(buf0, buf1, outbuf, ddr, 28,  128/TOO,  512/TII, 1, 1, 0, L23_C1_OFFSET); //L23_CONV_1
    conv_layer(buf1, buf2, outbuf, ddr, 28,  128/TOO,  128/TII, 3, 1, 1, L23_C2_OFFSET); //L23_CONV_2
    conv_layer(buf2, buf1, outbuf, ddr, 28,  512/TOO,  128/TII, 1, 1, 0, L23_C3_OFFSET); //L23_CONV_3
    add(buf0, buf1, buf2, 28,  512/TII, L23_Ad_SCALE1, L23_Ad_SCALE2);

	conv_layer(buf2, buf1, outbuf, ddr, 14, 1024/TOO,  512/TII, 1, 2, 0, L30_Cd_OFFSET); //L30_CONV_d
    conv_layer(buf2, buf0, outbuf, ddr, 28,  256/TOO,  512/TII, 1, 1, 0, L30_C1_OFFSET); //L30_CONV_1
    conv_layer(buf0, buf2, outbuf, ddr, 14,  256/TOO,  256/TII, 3, 2, 1, L30_C2_OFFSET); //L30_CONV_2
    conv_layer(buf2, buf0, outbuf, ddr, 14, 1024/TOO,  256/TII, 1, 1, 0, L30_C3_OFFSET); //L30_CONV_3
    add(buf1, buf0, buf2, 14, 1024/TII, L30_Ad_SCALE1, L30_Ad_SCALE2);

    conv_layer(buf2, buf1, outbuf, ddr, 14,  256/TOO, 1024/TII, 1, 1, 0, L31_C1_OFFSET); //L31_CONV_1
    conv_layer(buf1, buf0, outbuf, ddr, 14,  256/TOO,  256/TII, 3, 1, 1, L31_C2_OFFSET); //L31_CONV_2
    conv_layer(buf0, buf1, outbuf, ddr, 14, 1024/TOO,  256/TII, 1, 1, 0, L31_C3_OFFSET); //L31_CONV_3
    add(buf2, buf1, buf0, 14, 1024/TII, L31_Ad_SCALE1, L31_Ad_SCALE2);

	for(int s=0; s<OUTPUTSIZE/TII; s++){
		for(int i=0; i<TII/16; i++){
#pragma HLS PIPELINE
				ap_uint<169> tmp;
				for(int j=0; j<16; j++){
					in_t tmp_out;
					tmp_out = (in_t)buf0[s][i*16 + j];
					tmp.range(j*8+7, j*8) = tmp_out.range(7, 0);
				}
				sw0out[s*TII/16 + i] = tmp;
		}
	}

	stopt[0] = (char)buf0[OUTPUTSIZE/TII - 1][TII - 1];

	return;
}

