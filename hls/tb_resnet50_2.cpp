#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <string.h>

#define TOO 64
#define TII 32
#define MAXBUFSIZE (14*14*1024)
#define TO_MAX (2048/TOO)
#define INPUTSIZE (14*14*1024)
#define OUTPUTSIZE (7*7*2048)


#define L32_Ad_SCALE1  0.02869166061282158  / 0.023126672953367233
#define L32_Ad_SCALE2  0.013658547773957253 / 0.023126672953367233
#define L33_Ad_SCALE1  0.023126672953367233 / 0.025851933285593987
#define L33_Ad_SCALE2  0.018794028088450432 / 0.025851933285593987
#define L34_Ad_SCALE1  0.025851933285593987 / 0.026974745094776154
#define L34_Ad_SCALE2  0.01842919923365116  / 0.026974745094776154
#define L35_Ad_SCALE1  0.026974745094776154 / 0.032445620745420456
#define L35_Ad_SCALE2  0.026358334347605705 / 0.032445620745420456
#define L40_Ad_SCALE1  0.05205056816339493   / 0.07223725318908691
#define L40_Ad_SCALE2  0.056098680943250656  / 0.07223725318908691


#define L32_C1_OFFSET 0
#define L32_C2_OFFSET (L32_C1_OFFSET + 1024* 256*1*1 +  256*4*2)
#define L32_C3_OFFSET (L32_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define L33_C1_OFFSET (L32_C3_OFFSET +  256*1024*1*1 + 1024*4*2)
#define L33_C2_OFFSET (L33_C1_OFFSET + 1024* 256*1*1 +  256*4*2)
#define L33_C3_OFFSET (L33_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define L34_C1_OFFSET (L33_C3_OFFSET +  256*1024*1*1 + 1024*4*2)
#define L34_C2_OFFSET (L34_C1_OFFSET + 1024* 256*1*1 +  256*4*2)
#define L34_C3_OFFSET (L34_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define L35_C1_OFFSET (L34_C3_OFFSET +  256*1024*1*1 + 1024*4*2)
#define L35_C2_OFFSET (L35_C1_OFFSET + 1024* 256*1*1 +  256*4*2)
#define L35_C3_OFFSET (L35_C2_OFFSET +  256* 256*3*3 +  256*4*2)

#define L40_Cd_OFFSET (L35_C3_OFFSET +  256*1024*1*1 + 1024*4*2)
#define L40_C1_OFFSET (L40_Cd_OFFSET + 1024*2048*1*1 + 2048*4*2)
#define L40_C2_OFFSET (L40_C1_OFFSET + 1024* 512*1*1 +  512*4*2)
#define L40_C3_OFFSET (L40_C2_OFFSET +  512* 512*3*3 +  512*4*2)

#define DDRSIZE       (L40_C3_OFFSET +  512*2048*1*1 + 2048*4*2)


typedef volatile ap_uint<128> ddr_t;
typedef ap_int<27> weight_t;
typedef float bias_t;
typedef float scale_t;
typedef ap_int<9> fm_t;
typedef ap_uint<8> in_t;
typedef ap_int<24> out_t;
typedef ap_uint<48> obuf_t;

void resnet50_2(
		volatile ap_uint<169> sw0in[],
		volatile ap_uint<169> sw0out[],
		ddr_t ddr[],
		ap_uint<4> startt[1],
		ap_uint<4> stopt[1]
);

int main(){
	int *input;
	int *result;
	ap_uint<169> *sw0in;
	ap_uint<169> *sw0out;
	ap_uint<128> *ddr;
	int *ddr_tmp;
	ap_uint<4> startt[1], stopt[1];
	input = (int *)malloc(sizeof(int)*INPUTSIZE);
	result = (int *)malloc(sizeof(int)*OUTPUTSIZE);
	sw0in = (ap_uint<169> *)malloc(sizeof(ap_uint<169>)*(INPUTSIZE/16));
	sw0out = (ap_uint<169> *)malloc(sizeof(ap_uint<169>)*(OUTPUTSIZE/16));
	ddr = (ap_uint<128> *)malloc(sizeof(ap_uint<128>)*DDRSIZE/16);
	ddr_tmp = (int *)malloc(sizeof(int)*DDRSIZE/4);


	FILE *fp;

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_1out.txt", "r");
	for(int i=0; i<INPUTSIZE; i++) fscanf(fp, "%d\n", &input[i]);
	fclose(fp);

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50/params/ddr2.txt", "r");
	for(int i=0; i<DDRSIZE/4; i++) fscanf(fp, "%d\n", &ddr_tmp[i]);
	fclose(fp);

	for(int i=0; i<INPUTSIZE/16; i++){
		ap_uint<169> tmp;
		for(int j=0; j<16; j++){
			ap_uint<8> intmp;
			intmp = input[i*16 + j];
			tmp.range(8*j+7, 8*j) = intmp.range(7, 0);
		}
		sw0in[i] = tmp;
	}

	for(int i=0; i<DDRSIZE/16; i++){
		ap_uint<128> tmp;
		for(int j=0; j<4; j++){
			ap_uint<32> val32;
			val32 = ddr_tmp[4*i + j];
			tmp.range(32*j+31, 32*j) = val32.range(31, 0);
		}
		ddr[i] = tmp;
	}

	resnet50_2(sw0in, sw0out, ddr, startt, stopt);

	std::cout << stopt[0] << std::endl;

	for(int i=0; i<OUTPUTSIZE/16; i++){
		ap_uint<169> tmp;
		tmp = sw0out[i];
		for(int j=0; j<16; j++){
			ap_uint<8> outtmp;
			outtmp.range(7, 0) = tmp.range(8*j+7, 8*j);
			result[i*16+j] = outtmp;
		}
	}

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_2out.txt", "w");
	for(int i=0; i<OUTPUTSIZE; i++) fprintf(fp, "%d\n", result[i]);
	fclose(fp);

	return 0;
}
