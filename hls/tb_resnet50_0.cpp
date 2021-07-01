#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_math.h>
#include <string.h>

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

void resnet50_0(
		volatile ap_uint<256> input[],
		volatile ap_uint<169> sw0out[],
		ap_uint<4> startt[1],
	    ap_uint<4> stopt[1],
		ddr_t ddr[]
);

int main(){
	float *image;
	int *result;
	ap_uint<256> *input;
	ap_uint<169> *sw0out;
	ap_uint<128> *ddr;
	int *ddr_tmp;
	ap_uint<4> startt[1], stopt[1];
	image = (float *)malloc(sizeof(float)*(C1_ISIZE*C1_ISIZE*C1_ICH));
	result = (int *)malloc(sizeof(int)*(OUTPUTSIZE));
	input = (ap_uint<256> *)malloc(sizeof(ap_uint<256>)*(C1_ISIZE*C1_ISIZE*C1_ICH/8));
	sw0out = (ap_uint<169> *)malloc(sizeof(ap_uint<169>)*(OUTPUTSIZE/16));
	ddr = (ap_uint<128> *)malloc(sizeof(ap_uint<128>)*DDRSIZE/16);
	ddr_tmp = (int *)malloc(sizeof(int)*DDRSIZE/4);

	float *imagex;
	imagex = (float *)malloc(sizeof(float)*(C1_ISIZE*C1_ISIZE*C1_ICH));


	FILE *fp;

	fp = fopen("/home/asap_jupiter/yasu/workspace1/Imagenet_txt/1000/0.txt", "r");
	for(int i=0; i<C1_ISIZE*C1_ISIZE*C1_ICH; i++) fscanf(fp, "%f\n", &image[i]);
	fclose(fp);

	for(int row=0; row<C1_ISIZE; row++){
		for(int col=0; col<C1_ISIZE; col++){
			for(int ch=0; ch<C1_ICH; ch++){
				imagex[ch*C1_ISIZE*C1_ISIZE + row*C1_ISIZE + col] = image[row*C1_ISIZE*C1_ICH + col*C1_ICH + ch];
			}
		}
	}

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50/params/ddr0.txt", "r");
	for(int i=0; i<DDRSIZE/4; i++) fscanf(fp, "%d\n", &ddr_tmp[i]);
	fclose(fp);

	for(int i=0; i<C1_ISIZE*C1_ISIZE*C1_ICH/8; i++){
		ap_uint<256> tmp;
		for(int j=0; j<8; j++){
			union {int i; float f;} c;
			ap_uint<32> intmp;
			c.f = imagex[i*8 + j];
			intmp = c.i;
			tmp.range(32*j+31, 32*j) = intmp.range(31, 0);
		}
		input[i] = tmp;
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

	resnet50_0(input, sw0out, startt, stopt, ddr);

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

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_0xout.txt", "w");
	for(int i=0; i<OUTPUTSIZE; i++) fprintf(fp, "%d\n", result[i]);
	fclose(fp);

	return 0;
}
