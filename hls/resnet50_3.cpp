#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <string.h>

#define TOO 64
#define TII 32
#define MAXBUFSIZE (7*7*2048)
#define TO_MAX (2048/TOO)
#define INPUTSIZE (7*7*2048)


#define L41_Ad_SCALE1  0.07223725318908691   / 0.08634493499994278
#define L41_Ad_SCALE2  0.10453417897224426   / 0.08634493499994278
#define L42_Ad_SCALE1  0.08634493499994278   / 0.15148378908634186
#define L42_Ad_SCALE2  0.11785325407981873   / 0.15148378908634186


#define L41_C1_OFFSET 0
#define L41_C2_OFFSET (L41_C1_OFFSET + 2048* 512*1*1 +  512*4*2)
#define L41_C3_OFFSET (L41_C2_OFFSET +  512* 512*3*3 +  512*4*2)

#define L42_C1_OFFSET (L41_C3_OFFSET +  512*2048*1*1 + 2048*4*2)
#define L42_C2_OFFSET (L42_C1_OFFSET + 2048* 512*1*1 +  512*4*2)
#define L42_C3_OFFSET (L42_C2_OFFSET +  512* 512*3*3 +  512*4*2)

#define FC_OFFSET     (L42_C3_OFFSET +  512*2048*1*1 + 2048*4*2)
#define DDRSIZE       (FC_OFFSET     + 2048*1000     + 1000*4*2)


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

void average_pool(fm_t input[MAXBUFSIZE/TII][TII], in_t output[2048]){

	out_t buf[2048/TII][TII];
#pragma HLS resource variable=buf core=RAM_1P_BRAM
#pragma HLS array_reshape variable=buf complete dim=2

	for(int co=0; co<2048/TII; co++){
#pragma HLS PIPELINE
		for(int coo=0; coo<TII; coo++){
#pragma HLS UNROLL
			buf[co][coo] = 0;
		}
	}

	for(int row=0; row<7; row++){
		for(int col=0; col<7; col++){
			for(int to=0; to<2048/TII; to++){
#pragma HLS PIPELINE
				for(int too=0; too<TII; too++){
#pragma HLS UNROLL
					buf[to][too] += (in_t)input[row*7*2048/TII + col*2048/TII + to][too];
				}
			}
		}
	}

	for(int so=0; so<2048/TII; so++){
		for(int soo=0; soo<TII; soo++){
#pragma HLS PIPELINE
			output[so*TII + soo] = roundf(buf[so][soo] / 49.0);
		}
	}

	return;
}

void fc_load_weight(ap_int<8> weight[2048], ddr_t ddr[], int offset){
#pragma HLS INLINE off

	for(int i=0; i<2048/16; i++){
#pragma HLS UNROLL
		ap_uint<128> tmp;
		tmp = ddr[offset/16 + i];
		for(int j=0; j<16; j++){
#pragma HLS UNROLL
			weight[i*16 + j].range(7, 0) = tmp.range(8*j+7, 8*j);
		}
	}

	return;
}

void fc_compute(ap_int<8> weight[2048], in_t input[2048], bias_t bias[1000], scale_t scale[1000], float output[1000], int och){
#pragma HLS INLINE off

	out_t tmpout;
	tmpout = 0;

	for(int ich=0; ich<2048/128; ich++){
#pragma HLS PIPELINE
		for(int tii=0; tii<128; tii++){
#pragma HLS UNROLL
			tmpout += input[ich*128 + tii] * weight[ich*128 + tii];
		}
	}

	output[och] = tmpout * scale[och] + bias[och];

	return;
}

void fc(in_t input[2048], float output[1000], ddr_t ddr[]){

	bias_t bias[1000];
	scale_t scale[1000];
#pragma HLS resource variable=bias core=RAM_2P_URAM
#pragma HLS resource variable=scale core=RAM_2P_URAM


	for(int i=0; i<1000/4; i++){
#pragma HLS UNROLL
		ap_uint<128> tmp;
		tmp = ddr[(FC_OFFSET + 2048*1000)/16 + i];
		for(int j=0; j<4; j++){
#pragma HLS UNROLL
			union {int i; float f;} c;
			c.i = tmp.range(32*j + 31, 32*j);
			bias[i*4 + j] = c.f;
		}
	}

	for(int i=0; i<1000/4; i++){
#pragma HLS UNROLL
		ap_uint<128> tmp;
		tmp = ddr[(FC_OFFSET + 2048*1000)/16 + 1000/4 + i];
		for(int j=0; j<4; j++){
#pragma HLS UNROLL
			union {int i; float f;} c;
			c.i = tmp.range(32*j + 31, 32*j);
			scale[i*4 + j] = c.f;
		}
	}

	for(int och=0; och<1000; och++){
#pragma HLS DATAFLOW
#pragma HLS stable variable=input
#pragma HLS stable variable=bias
#pragma HLS stable variable=scale
#pragma HLS stable variable=output

		ap_int<8> weight[2048];
#pragma HLS array_reshape variable=weight cyclic factor=128

		fc_load_weight(weight, ddr, FC_OFFSET + 2048*och);
		fc_compute(weight, input, bias, scale, output, och);
	}

	return;
}


void resnet50_3(
		volatile ap_uint<169> sw0in[],
		float output[1000],
		ddr_t ddr[],
		ap_uint<4> startt[1],
		ap_uint<4> stopt[1]
){
#pragma HLS INTERFACE s_axilite port=output
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE axis port=sw0in
#pragma HLS INTERFACE axis port=startt
#pragma HLS INTERFACE axis port=stopt
#pragma HLS INTERFACE m_axi port=ddr depth=1024

	static fm_t buf0[MAXBUFSIZE/TII][TII];
	static fm_t buf1[MAXBUFSIZE/TII][TII];
	static fm_t buf2[MAXBUFSIZE/TII][TII];
	static obuf_t outbuf[MAXBUFSIZE/TOO][TOO/2];
	static in_t fc_in[2048];

#pragma HLS array_reshape variable=buf0    complete dim=2
#pragma HLS array_reshape variable=buf1    complete dim=2
#pragma HLS array_reshape variable=buf2    complete dim=2
#pragma HLS array_reshape variable=outbuf  complete dim=2
#pragma HLS array_reshape variable=fc_in cyclic factor=128

#pragma HLS RESOURCE variable=buf0    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf1    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=buf2    core=RAM_2P_URAM
#pragma HLS RESOURCE variable=outbuf  core=RAM_2P_BRAM
#pragma HLS RESOURCE variable=fc_in   core=RAM_2P_BRAM

	for(int l=0; l<INPUTSIZE/TII; l++){
#pragma HLS PIPELINE
		for(int i=0; i<TII/16; i++){
		   ap_uint<169> tmp;
		   tmp = sw0in[l*TII/16 + i];
		   for(int j=0; j<16; j++){
			   in_t intmp;
			   intmp.range(7, 0) = tmp.range(8*j+7, 8*j);
			   buf0[l][i*16 + j] = (fm_t)intmp;
		   }
		}
	}

	startt[0] = (char)buf0[INPUTSIZE/TII - 1][TII-1];

	for(int i=0; i<MAXBUFSIZE/TOO; i++){
#pragma HLS PIPELINE
		for(int j=0; j<TOO/2; j++){
			outbuf[i][j] = 0;
		}
	}

    conv_layer(buf0, buf1, outbuf, ddr,  7,  512/TOO, 2048/TII, 1, 1, 0, L41_C1_OFFSET); //L41_CONV_1
    conv_layer(buf1, buf2, outbuf, ddr,  7,  512/TOO,  512/TII, 3, 1, 1, L41_C2_OFFSET); //L41_CONV_2
    conv_layer(buf2, buf1, outbuf, ddr,  7, 2048/TOO,  512/TII, 1, 1, 0, L41_C3_OFFSET); //L41_CONV_3
    add(buf0, buf1, buf2,  7, 2048/TII, L41_Ad_SCALE1, L41_Ad_SCALE2);

    conv_layer(buf2, buf1, outbuf, ddr,  7,  512/TOO, 2048/TII, 1, 1, 0, L42_C1_OFFSET); //L42_CONV_1
    conv_layer(buf1, buf0, outbuf, ddr,  7,  512/TOO,  512/TII, 3, 1, 1, L42_C2_OFFSET); //L42_CONV_2
    conv_layer(buf0, buf1, outbuf, ddr,  7, 2048/TOO,  512/TII, 1, 1, 0, L42_C3_OFFSET); //L42_CONV_3
    add(buf2, buf1, buf0,  7, 2048/TII, L42_Ad_SCALE1, L42_Ad_SCALE2);

    average_pool(buf0, fc_in);

    fc(fc_in, output, ddr);

	stopt[0] = (char)fc_in[2047];

	return;
}
