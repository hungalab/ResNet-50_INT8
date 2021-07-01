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

void resnet50_1(
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

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_0out.txt", "r");
	for(int i=0; i<INPUTSIZE; i++) fscanf(fp, "%d\n", &input[i]);
	fclose(fp);

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50/params/ddr1.txt", "r");
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

	resnet50_1(sw0in, sw0out, ddr, startt, stopt);

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

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_1out.txt", "w");
	for(int i=0; i<OUTPUTSIZE; i++) fprintf(fp, "%d\n", result[i]);
	fclose(fp);

	return 0;
}
