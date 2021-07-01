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

void resnet50_3(
		volatile ap_uint<169> sw0in[],
		float output[1000],
		ddr_t ddr[],
		ap_uint<4> startt[1],
		ap_uint<4> stopt[1]
);

int main(){
	int *input;
	int *result;
	ap_uint<169> *sw0in;
	float output[1000];
	ap_uint<128> *ddr;
	int *ddr_tmp;
	ap_uint<4> startt[1], stopt[1];
	input = (int *)malloc(sizeof(int)*INPUTSIZE);
	sw0in = (ap_uint<169> *)malloc(sizeof(ap_uint<169>)*(INPUTSIZE/16));
	ddr = (ap_uint<128> *)malloc(sizeof(ap_uint<128>)*DDRSIZE/16);
	ddr_tmp = (int *)malloc(sizeof(int)*DDRSIZE/4);


	FILE *fp;

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_2out.txt", "r");
	for(int i=0; i<INPUTSIZE; i++) fscanf(fp, "%d\n", &input[i]);
	fclose(fp);

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50/params/ddr3.txt", "r");
	for(int i=0; i<DDRSIZE/4; i++) fscanf(fp, "%d\n", &ddr_tmp[i]);
	fclose(fp);
	std::cout << ddr_tmp[0] << std::endl;

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

	resnet50_3(sw0in, output, ddr, startt, stopt);

	std::cout << stopt[0] << std::endl;

	fp = fopen("/home/asap_jupiter/yasu/workspace1/resnet50_test/50_3out.txt", "w");
	for(int i=0; i<1000; i++) fprintf(fp, "%f\n", output[i]);
	fclose(fp);

	return 0;
}
