#include "resnet50_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void resnet50_0::thread_add_ln180_fu_1638_p2() {
    add_ln180_fu_1638_p2 = (!zext_ln180_2_fu_1634_p1.read().is_01() || !sub_ln180_fu_1628_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln180_2_fu_1634_p1.read()) + sc_biguint<14>(sub_ln180_fu_1628_p2.read()));
}

void resnet50_0::thread_add_ln395_fu_1430_p2() {
    add_ln395_fu_1430_p2 = (!indvar_flatten47_reg_759.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten47_reg_759.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void resnet50_0::thread_add_ln396_1_fu_1655_p2() {
    add_ln396_1_fu_1655_p2 = (!ap_const_lv13_1.is_01() || !ap_phi_mux_indvar_flatten_phi_fu_786_p4.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_biguint<13>(ap_phi_mux_indvar_flatten_phi_fu_786_p4.read()));
}

void resnet50_0::thread_add_ln425_fu_3994_p2() {
    add_ln425_fu_3994_p2 = (!indvar_flatten55_reg_818.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten55_reg_818.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void resnet50_0::thread_and_ln180_1_fu_2265_p2() {
    and_ln180_1_fu_2265_p2 = (or_ln180_fu_1994_p2.read() & xor_ln180_1_fu_2259_p2.read());
}

void resnet50_0::thread_and_ln180_2_fu_2547_p2() {
    and_ln180_2_fu_2547_p2 = (or_ln180_1_reg_5690.read() & xor_ln180_2_fu_2541_p2.read());
}

void resnet50_0::thread_and_ln180_3_fu_2831_p2() {
    and_ln180_3_fu_2831_p2 = (or_ln180_2_fu_2562_p2.read() & xor_ln180_3_fu_2825_p2.read());
}

void resnet50_0::thread_and_ln180_4_fu_3116_p2() {
    and_ln180_4_fu_3116_p2 = (or_ln180_3_fu_2847_p2.read() & xor_ln180_4_fu_3110_p2.read());
}

void resnet50_0::thread_and_ln180_5_fu_3600_p2() {
    and_ln180_5_fu_3600_p2 = (or_ln180_4_reg_5717.read() & xor_ln180_5_fu_3594_p2.read());
}

void resnet50_0::thread_and_ln180_6_fu_3680_p2() {
    and_ln180_6_fu_3680_p2 = (or_ln180_5_fu_3615_p2.read() & xor_ln180_6_fu_3674_p2.read());
}

void resnet50_0::thread_and_ln180_7_fu_3965_p2() {
    and_ln180_7_fu_3965_p2 = (or_ln180_6_fu_3696_p2.read() & xor_ln180_7_fu_3959_p2.read());
}

void resnet50_0::thread_and_ln180_fu_1978_p2() {
    and_ln180_fu_1978_p2 = (inbuf_V_q0.read() & xor_ln180_fu_1972_p2.read());
}

void resnet50_0::thread_and_ln214_1_fu_4307_p2() {
    and_ln214_1_fu_4307_p2 = (lshr_ln214_2_fu_4295_p2.read() & lshr_ln214_3_fu_4301_p2.read());
}

void resnet50_0::thread_and_ln214_2_fu_4435_p2() {
    and_ln214_2_fu_4435_p2 = (lshr_ln214_4_fu_4423_p2.read() & lshr_ln214_5_fu_4429_p2.read());
}

void resnet50_0::thread_and_ln214_3_fu_4609_p2() {
    and_ln214_3_fu_4609_p2 = (lshr_ln214_7_fu_4597_p2.read() & lshr_ln214_8_fu_4603_p2.read());
}

void resnet50_0::thread_and_ln214_4_fu_4755_p2() {
    and_ln214_4_fu_4755_p2 = (lshr_ln214_9_fu_4743_p2.read() & lshr_ln214_10_fu_4749_p2.read());
}

void resnet50_0::thread_and_ln214_5_fu_4883_p2() {
    and_ln214_5_fu_4883_p2 = (lshr_ln214_11_fu_4871_p2.read() & lshr_ln214_12_fu_4877_p2.read());
}

void resnet50_0::thread_and_ln214_6_fu_5065_p2() {
    and_ln214_6_fu_5065_p2 = (lshr_ln214_14_fu_5053_p2.read() & lshr_ln214_15_fu_5059_p2.read());
}

void resnet50_0::thread_and_ln214_7_fu_5325_p2() {
    and_ln214_7_fu_5325_p2 = (lshr_ln214_19_fu_5313_p2.read() & lshr_ln214_20_fu_5319_p2.read());
}

void resnet50_0::thread_and_ln214_fu_4161_p2() {
    and_ln214_fu_4161_p2 = (lshr_ln214_fu_4149_p2.read() & lshr_ln214_1_fu_4155_p2.read());
}

void resnet50_0::thread_and_ln282_64_fu_2181_p2() {
    and_ln282_64_fu_2181_p2 = (icmp_ln282_1_fu_2061_p2.read() & xor_ln278_64_fu_2175_p2.read());
}

void resnet50_0::thread_and_ln282_65_fu_2461_p2() {
    and_ln282_65_fu_2461_p2 = (icmp_ln282_2_fu_2341_p2.read() & xor_ln278_65_fu_2455_p2.read());
}

void resnet50_0::thread_and_ln282_66_fu_2749_p2() {
    and_ln282_66_fu_2749_p2 = (icmp_ln282_3_fu_2629_p2.read() & xor_ln278_66_fu_2743_p2.read());
}

void resnet50_0::thread_and_ln282_67_fu_3034_p2() {
    and_ln282_67_fu_3034_p2 = (icmp_ln282_4_fu_2914_p2.read() & xor_ln278_67_fu_3028_p2.read());
}

void resnet50_0::thread_and_ln282_68_fu_3312_p2() {
    and_ln282_68_fu_3312_p2 = (icmp_ln282_5_fu_3192_p2.read() & xor_ln278_68_fu_3306_p2.read());
}

void resnet50_0::thread_and_ln282_69_fu_3514_p2() {
    and_ln282_69_fu_3514_p2 = (icmp_ln282_6_fu_3394_p2.read() & xor_ln278_69_fu_3508_p2.read());
}

void resnet50_0::thread_and_ln282_70_fu_3883_p2() {
    and_ln282_70_fu_3883_p2 = (icmp_ln282_7_fu_3763_p2.read() & xor_ln278_70_fu_3877_p2.read());
}

void resnet50_0::thread_and_ln282_fu_1894_p2() {
    and_ln282_fu_1894_p2 = (icmp_ln282_fu_1774_p2.read() & xor_ln278_fu_1888_p2.read());
}

void resnet50_0::thread_and_ln285_128_fu_1866_p2() {
    and_ln285_128_fu_1866_p2 = (and_ln285_fu_1860_p2.read() & icmp_ln284_fu_1780_p2.read());
}

void resnet50_0::thread_and_ln285_129_fu_2147_p2() {
    and_ln285_129_fu_2147_p2 = (icmp_ln285_1_fu_2073_p2.read() & xor_ln282_64_fu_2141_p2.read());
}

void resnet50_0::thread_and_ln285_130_fu_2153_p2() {
    and_ln285_130_fu_2153_p2 = (and_ln285_129_fu_2147_p2.read() & icmp_ln284_1_fu_2067_p2.read());
}

void resnet50_0::thread_and_ln285_131_fu_2427_p2() {
    and_ln285_131_fu_2427_p2 = (icmp_ln285_2_fu_2353_p2.read() & xor_ln282_65_fu_2421_p2.read());
}

void resnet50_0::thread_and_ln285_132_fu_2433_p2() {
    and_ln285_132_fu_2433_p2 = (and_ln285_131_fu_2427_p2.read() & icmp_ln284_2_fu_2347_p2.read());
}

void resnet50_0::thread_and_ln285_133_fu_2715_p2() {
    and_ln285_133_fu_2715_p2 = (icmp_ln285_3_fu_2641_p2.read() & xor_ln282_66_fu_2709_p2.read());
}

void resnet50_0::thread_and_ln285_134_fu_2721_p2() {
    and_ln285_134_fu_2721_p2 = (and_ln285_133_fu_2715_p2.read() & icmp_ln284_3_fu_2635_p2.read());
}

void resnet50_0::thread_and_ln285_135_fu_3000_p2() {
    and_ln285_135_fu_3000_p2 = (icmp_ln285_4_fu_2926_p2.read() & xor_ln282_67_fu_2994_p2.read());
}

void resnet50_0::thread_and_ln285_136_fu_3006_p2() {
    and_ln285_136_fu_3006_p2 = (and_ln285_135_fu_3000_p2.read() & icmp_ln284_4_fu_2920_p2.read());
}

void resnet50_0::thread_and_ln285_137_fu_3278_p2() {
    and_ln285_137_fu_3278_p2 = (icmp_ln285_5_fu_3204_p2.read() & xor_ln282_68_fu_3272_p2.read());
}

void resnet50_0::thread_and_ln285_138_fu_3284_p2() {
    and_ln285_138_fu_3284_p2 = (and_ln285_137_fu_3278_p2.read() & icmp_ln284_5_fu_3198_p2.read());
}

void resnet50_0::thread_and_ln285_139_fu_3480_p2() {
    and_ln285_139_fu_3480_p2 = (icmp_ln285_6_fu_3406_p2.read() & xor_ln282_69_fu_3474_p2.read());
}

void resnet50_0::thread_and_ln285_140_fu_3486_p2() {
    and_ln285_140_fu_3486_p2 = (and_ln285_139_fu_3480_p2.read() & icmp_ln284_6_fu_3400_p2.read());
}

void resnet50_0::thread_and_ln285_141_fu_3849_p2() {
    and_ln285_141_fu_3849_p2 = (icmp_ln285_7_fu_3775_p2.read() & xor_ln282_70_fu_3843_p2.read());
}

void resnet50_0::thread_and_ln285_142_fu_3855_p2() {
    and_ln285_142_fu_3855_p2 = (and_ln285_141_fu_3849_p2.read() & icmp_ln284_7_fu_3769_p2.read());
}

void resnet50_0::thread_and_ln285_fu_1860_p2() {
    and_ln285_fu_1860_p2 = (icmp_ln285_fu_1786_p2.read() & xor_ln282_fu_1854_p2.read());
}

void resnet50_0::thread_and_ln399_fu_1570_p2() {
    and_ln399_fu_1570_p2 = (icmp_ln397_fu_1564_p2.read() & xor_ln399_fu_1558_p2.read());
}

void resnet50_0::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void resnet50_0::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[25];
}

void resnet50_0::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void resnet50_0::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[3];
}

void resnet50_0::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[4];
}

void resnet50_0::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[5];
}

void resnet50_0::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[6];
}

void resnet50_0::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void resnet50_0::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[7];
}

void resnet50_0::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[8];
}

void resnet50_0::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[9];
}

void resnet50_0::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[10];
}

void resnet50_0::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[11];
}

void resnet50_0::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[12];
}

void resnet50_0::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[13];
}

void resnet50_0::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[14];
}

void resnet50_0::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[15];
}

void resnet50_0::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[16];
}

void resnet50_0::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[17];
}

void resnet50_0::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[18];
}

void resnet50_0::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[19];
}

void resnet50_0::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[20];
}

void resnet50_0::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[21];
}

void resnet50_0::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[22];
}

void resnet50_0::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[23];
}

void resnet50_0::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[24];
}

void resnet50_0::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[26];
}

void resnet50_0::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[27];
}

void resnet50_0::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp143() {
    ap_block_pp0_stage0_11001_ignoreCallOp143 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp144() {
    ap_block_pp0_stage0_11001_ignoreCallOp144 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp172() {
    ap_block_pp0_stage0_11001_ignoreCallOp172 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp173() {
    ap_block_pp0_stage0_11001_ignoreCallOp173 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp174() {
    ap_block_pp0_stage0_11001_ignoreCallOp174 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp317() {
    ap_block_pp0_stage0_11001_ignoreCallOp317 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp318() {
    ap_block_pp0_stage0_11001_ignoreCallOp318 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_11001_ignoreCallOp319() {
    ap_block_pp0_stage0_11001_ignoreCallOp319 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_pp1_stage0_01001() {
    ap_block_pp1_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state39_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state40_io.read())));
}

void resnet50_0::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state39_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state40_io.read())));
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7() {
    ap_block_state10_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call133() {
    ap_block_state10_pp0_stage0_iter7_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call184() {
    ap_block_state10_pp0_stage0_iter7_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call235() {
    ap_block_state10_pp0_stage0_iter7_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call26() {
    ap_block_state10_pp0_stage0_iter7_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call286() {
    ap_block_state10_pp0_stage0_iter7_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call337() {
    ap_block_state10_pp0_stage0_iter7_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call388() {
    ap_block_state10_pp0_stage0_iter7_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state10_pp0_stage0_iter7_ignore_call82() {
    ap_block_state10_pp0_stage0_iter7_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8() {
    ap_block_state11_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call133() {
    ap_block_state11_pp0_stage0_iter8_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call184() {
    ap_block_state11_pp0_stage0_iter8_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call235() {
    ap_block_state11_pp0_stage0_iter8_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call26() {
    ap_block_state11_pp0_stage0_iter8_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call286() {
    ap_block_state11_pp0_stage0_iter8_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call337() {
    ap_block_state11_pp0_stage0_iter8_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call388() {
    ap_block_state11_pp0_stage0_iter8_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state11_pp0_stage0_iter8_ignore_call82() {
    ap_block_state11_pp0_stage0_iter8_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9() {
    ap_block_state12_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call133() {
    ap_block_state12_pp0_stage0_iter9_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call184() {
    ap_block_state12_pp0_stage0_iter9_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call235() {
    ap_block_state12_pp0_stage0_iter9_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call26() {
    ap_block_state12_pp0_stage0_iter9_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call286() {
    ap_block_state12_pp0_stage0_iter9_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call337() {
    ap_block_state12_pp0_stage0_iter9_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call388() {
    ap_block_state12_pp0_stage0_iter9_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state12_pp0_stage0_iter9_ignore_call82() {
    ap_block_state12_pp0_stage0_iter9_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10() {
    ap_block_state13_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call133() {
    ap_block_state13_pp0_stage0_iter10_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call184() {
    ap_block_state13_pp0_stage0_iter10_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call235() {
    ap_block_state13_pp0_stage0_iter10_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call26() {
    ap_block_state13_pp0_stage0_iter10_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call286() {
    ap_block_state13_pp0_stage0_iter10_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call337() {
    ap_block_state13_pp0_stage0_iter10_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call388() {
    ap_block_state13_pp0_stage0_iter10_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state13_pp0_stage0_iter10_ignore_call82() {
    ap_block_state13_pp0_stage0_iter10_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11() {
    ap_block_state14_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call133() {
    ap_block_state14_pp0_stage0_iter11_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call184() {
    ap_block_state14_pp0_stage0_iter11_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call235() {
    ap_block_state14_pp0_stage0_iter11_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call26() {
    ap_block_state14_pp0_stage0_iter11_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call286() {
    ap_block_state14_pp0_stage0_iter11_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call337() {
    ap_block_state14_pp0_stage0_iter11_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call388() {
    ap_block_state14_pp0_stage0_iter11_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state14_pp0_stage0_iter11_ignore_call82() {
    ap_block_state14_pp0_stage0_iter11_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12() {
    ap_block_state15_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call133() {
    ap_block_state15_pp0_stage0_iter12_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call184() {
    ap_block_state15_pp0_stage0_iter12_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call235() {
    ap_block_state15_pp0_stage0_iter12_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call26() {
    ap_block_state15_pp0_stage0_iter12_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call286() {
    ap_block_state15_pp0_stage0_iter12_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call337() {
    ap_block_state15_pp0_stage0_iter12_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call388() {
    ap_block_state15_pp0_stage0_iter12_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state15_pp0_stage0_iter12_ignore_call82() {
    ap_block_state15_pp0_stage0_iter12_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state17_on_subcall_done() {
    ap_block_state17_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_conv1_fu_914_ap_ready.read() & ap_sync_grp_conv1_fu_914_ap_done.read()));
}

void resnet50_0::thread_ap_block_state38_pp1_stage0_iter0() {
    ap_block_state38_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state39_io() {
    ap_block_state39_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_1_ack_in.read()));
}

void resnet50_0::thread_ap_block_state39_pp1_stage0_iter1() {
    ap_block_state39_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call133() {
    ap_block_state3_pp0_stage0_iter0_ignore_call133 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call184() {
    ap_block_state3_pp0_stage0_iter0_ignore_call184 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call235() {
    ap_block_state3_pp0_stage0_iter0_ignore_call235 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call26() {
    ap_block_state3_pp0_stage0_iter0_ignore_call26 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call286() {
    ap_block_state3_pp0_stage0_iter0_ignore_call286 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call337() {
    ap_block_state3_pp0_stage0_iter0_ignore_call337 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call388() {
    ap_block_state3_pp0_stage0_iter0_ignore_call388 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state3_pp0_stage0_iter0_ignore_call82() {
    ap_block_state3_pp0_stage0_iter0_ignore_call82 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_out.read()));
}

void resnet50_0::thread_ap_block_state40_io() {
    ap_block_state40_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_1_ack_in.read()));
}

void resnet50_0::thread_ap_block_state40_pp1_stage0_iter2() {
    ap_block_state40_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state42() {
    ap_block_state42 = (esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read())));
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call133() {
    ap_block_state4_pp0_stage0_iter1_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call184() {
    ap_block_state4_pp0_stage0_iter1_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call235() {
    ap_block_state4_pp0_stage0_iter1_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call26() {
    ap_block_state4_pp0_stage0_iter1_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call286() {
    ap_block_state4_pp0_stage0_iter1_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call337() {
    ap_block_state4_pp0_stage0_iter1_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call388() {
    ap_block_state4_pp0_stage0_iter1_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state4_pp0_stage0_iter1_ignore_call82() {
    ap_block_state4_pp0_stage0_iter1_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call133() {
    ap_block_state5_pp0_stage0_iter2_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call184() {
    ap_block_state5_pp0_stage0_iter2_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call235() {
    ap_block_state5_pp0_stage0_iter2_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call26() {
    ap_block_state5_pp0_stage0_iter2_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call286() {
    ap_block_state5_pp0_stage0_iter2_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call337() {
    ap_block_state5_pp0_stage0_iter2_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call388() {
    ap_block_state5_pp0_stage0_iter2_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state5_pp0_stage0_iter2_ignore_call82() {
    ap_block_state5_pp0_stage0_iter2_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3() {
    ap_block_state6_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call133() {
    ap_block_state6_pp0_stage0_iter3_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call184() {
    ap_block_state6_pp0_stage0_iter3_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call235() {
    ap_block_state6_pp0_stage0_iter3_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call26() {
    ap_block_state6_pp0_stage0_iter3_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call286() {
    ap_block_state6_pp0_stage0_iter3_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call337() {
    ap_block_state6_pp0_stage0_iter3_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call388() {
    ap_block_state6_pp0_stage0_iter3_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state6_pp0_stage0_iter3_ignore_call82() {
    ap_block_state6_pp0_stage0_iter3_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4() {
    ap_block_state7_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call133() {
    ap_block_state7_pp0_stage0_iter4_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call184() {
    ap_block_state7_pp0_stage0_iter4_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call235() {
    ap_block_state7_pp0_stage0_iter4_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call26() {
    ap_block_state7_pp0_stage0_iter4_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call286() {
    ap_block_state7_pp0_stage0_iter4_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call337() {
    ap_block_state7_pp0_stage0_iter4_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call388() {
    ap_block_state7_pp0_stage0_iter4_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state7_pp0_stage0_iter4_ignore_call82() {
    ap_block_state7_pp0_stage0_iter4_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5() {
    ap_block_state8_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call133() {
    ap_block_state8_pp0_stage0_iter5_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call184() {
    ap_block_state8_pp0_stage0_iter5_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call235() {
    ap_block_state8_pp0_stage0_iter5_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call26() {
    ap_block_state8_pp0_stage0_iter5_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call286() {
    ap_block_state8_pp0_stage0_iter5_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call337() {
    ap_block_state8_pp0_stage0_iter5_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call388() {
    ap_block_state8_pp0_stage0_iter5_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state8_pp0_stage0_iter5_ignore_call82() {
    ap_block_state8_pp0_stage0_iter5_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6() {
    ap_block_state9_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call133() {
    ap_block_state9_pp0_stage0_iter6_ignore_call133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call184() {
    ap_block_state9_pp0_stage0_iter6_ignore_call184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call235() {
    ap_block_state9_pp0_stage0_iter6_ignore_call235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call26() {
    ap_block_state9_pp0_stage0_iter6_ignore_call26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call286() {
    ap_block_state9_pp0_stage0_iter6_ignore_call286 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call337() {
    ap_block_state9_pp0_stage0_iter6_ignore_call337 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call388() {
    ap_block_state9_pp0_stage0_iter6_ignore_call388 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_block_state9_pp0_stage0_iter6_ignore_call82() {
    ap_block_state9_pp0_stage0_iter6_ignore_call82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void resnet50_0::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln395_fu_1424_p2.read())) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_condition_pp1_exit_iter0_state38() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln425_fu_3988_p2.read())) {
        ap_condition_pp1_exit_iter0_state38 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state38 = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
         !(esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read()) || esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_ack_in.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read()))))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void resnet50_0::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void resnet50_0::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_phi_mux_ch_0_phi_fu_774_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ap_phi_mux_ch_0_phi_fu_774_p4 = select_ln399_1_reg_5669.read();
    } else {
        ap_phi_mux_ch_0_phi_fu_774_p4 = ch_0_reg_770.read();
    }
}

void resnet50_0::thread_ap_phi_mux_col_0_phi_fu_810_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        ap_phi_mux_col_0_phi_fu_810_p4 = col_reg_5659.read();
    } else {
        ap_phi_mux_col_0_phi_fu_810_p4 = col_0_reg_806.read();
    }
}

void resnet50_0::thread_ap_phi_mux_indvar_flatten_phi_fu_786_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        ap_phi_mux_indvar_flatten_phi_fu_786_p4 = select_ln396_2_reg_5664.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_786_p4 = indvar_flatten_reg_782.read();
    }
}

void resnet50_0::thread_ap_phi_mux_row_0_phi_fu_798_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        ap_phi_mux_row_0_phi_fu_798_p4 = select_ln396_1_reg_5623.read();
    } else {
        ap_phi_mux_row_0_phi_fu_798_p4 = row_0_reg_794.read();
    }
}

void resnet50_0::thread_ap_phi_mux_s_0_phi_fu_833_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read()))) {
        ap_phi_mux_s_0_phi_fu_833_p4 = select_ln431_1_reg_5765.read();
    } else {
        ap_phi_mux_s_0_phi_fu_833_p4 = s_0_reg_829.read();
    }
}

void resnet50_0::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
         !(esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read()) || esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_ack_in.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read()))))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void resnet50_0::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void resnet50_0::thread_ap_sync_grp_conv1_fu_914_ap_done() {
    ap_sync_grp_conv1_fu_914_ap_done = (grp_conv1_fu_914_ap_done.read() | ap_sync_reg_grp_conv1_fu_914_ap_done.read());
}

void resnet50_0::thread_ap_sync_grp_conv1_fu_914_ap_ready() {
    ap_sync_grp_conv1_fu_914_ap_ready = (grp_conv1_fu_914_ap_ready.read() | ap_sync_reg_grp_conv1_fu_914_ap_ready.read());
}

void resnet50_0::thread_bitcast_ln705_1_fu_2000_p1() {
    bitcast_ln705_1_fu_2000_p1 = val_assign_1_reg_5639.read();
}

void resnet50_0::thread_bitcast_ln705_2_fu_2287_p1() {
    bitcast_ln705_2_fu_2287_p1 = grp_roundf_fu_1330_ap_return.read();
}

void resnet50_0::thread_bitcast_ln705_3_fu_2568_p1() {
    bitcast_ln705_3_fu_2568_p1 = val_assign_3_reg_5707.read();
}

void resnet50_0::thread_bitcast_ln705_4_fu_2853_p1() {
    bitcast_ln705_4_fu_2853_p1 = val_assign_4_reg_5712.read();
}

void resnet50_0::thread_bitcast_ln705_5_fu_3138_p1() {
    bitcast_ln705_5_fu_3138_p1 = grp_roundf_fu_1357_ap_return.read();
}

void resnet50_0::thread_bitcast_ln705_6_fu_3340_p1() {
    bitcast_ln705_6_fu_3340_p1 = grp_roundf_fu_1366_ap_return.read();
}

void resnet50_0::thread_bitcast_ln705_7_fu_3702_p1() {
    bitcast_ln705_7_fu_3702_p1 = val_assign_7_reg_5745.read();
}

void resnet50_0::thread_bitcast_ln705_fu_1713_p1() {
    bitcast_ln705_fu_1713_p1 = val_assign_reg_5628.read();
}

void resnet50_0::thread_buf0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf0_V_address0 = grp_add_fu_891_input1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        buf0_V_address0 = grp_conv_layer_fu_851_input_V_address0.read();
    } else {
        buf0_V_address0 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf0_V_address1 = grp_maxpool_fu_1304_buf0_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf0_V_address1 = grp_add_fu_891_output_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        buf0_V_address1 = grp_conv_layer_fu_851_output_V_address1.read();
    } else {
        buf0_V_address1 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf0_V_ce0 = grp_add_fu_891_input1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        buf0_V_ce0 = grp_conv_layer_fu_851_input_V_ce0.read();
    } else {
        buf0_V_ce0 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf0_V_ce1 = grp_maxpool_fu_1304_buf0_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf0_V_ce1 = grp_add_fu_891_output_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        buf0_V_ce1 = grp_conv_layer_fu_851_output_V_ce1.read();
    } else {
        buf0_V_ce1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf0_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf0_V_d1 = grp_maxpool_fu_1304_buf0_V_d1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf0_V_d1 = grp_add_fu_891_output_V_d1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        buf0_V_d1 = grp_conv_layer_fu_851_output_V_d1.read();
    } else {
        buf0_V_d1 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_buf0_V_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf0_V_we1 = grp_maxpool_fu_1304_buf0_V_we1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf0_V_we1 = grp_add_fu_891_output_V_we1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        buf0_V_we1 = grp_conv_layer_fu_851_output_V_we1.read();
    } else {
        buf0_V_we1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf1_V_address0 = grp_maxpool_fu_1304_buf1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf1_V_address0 = grp_add_fu_891_input2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf1_V_address0 = grp_add_fu_891_input1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buf1_V_address0 = grp_conv_layer_fu_851_input_V_address0.read();
    } else {
        buf1_V_address0 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf1_V_address1 = grp_maxpool_fu_1304_buf1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        buf1_V_address1 = grp_conv1_fu_914_output_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf1_V_address1 = grp_conv_layer_fu_851_output_V_address1.read();
    } else {
        buf1_V_address1 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf1_V_ce0 = grp_maxpool_fu_1304_buf1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf1_V_ce0 = grp_add_fu_891_input2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf1_V_ce0 = grp_add_fu_891_input1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buf1_V_ce0 = grp_conv_layer_fu_851_input_V_ce0.read();
    } else {
        buf1_V_ce0 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        buf1_V_ce1 = grp_maxpool_fu_1304_buf1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        buf1_V_ce1 = grp_conv1_fu_914_output_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf1_V_ce1 = grp_conv_layer_fu_851_output_V_ce1.read();
    } else {
        buf1_V_ce1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf1_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        buf1_V_d1 = grp_conv1_fu_914_output_V_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf1_V_d1 = grp_conv_layer_fu_851_output_V_d1.read();
    } else {
        buf1_V_d1 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_buf1_V_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        buf1_V_we1 = grp_conv1_fu_914_output_V_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf1_V_we1 = grp_conv_layer_fu_851_output_V_we1.read();
    } else {
        buf1_V_we1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buf2_V_address0 =  (sc_lv<15>) (zext_ln431_fu_4028_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf2_V_address0 = grp_add_fu_891_input2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf2_V_address0 = grp_conv_layer_fu_851_input_V_address0.read();
    } else {
        buf2_V_address0 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf2_V_address1 = grp_add_fu_891_output_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buf2_V_address1 = grp_conv_layer_fu_851_output_V_address1.read();
    } else {
        buf2_V_address1 = "XXXXXXXXXXXXXXX";
    }
}

void resnet50_0::thread_buf2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buf2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buf2_V_ce0 = grp_add_fu_891_input2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        buf2_V_ce0 = grp_conv_layer_fu_851_input_V_ce0.read();
    } else {
        buf2_V_ce0 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf2_V_ce1 = grp_add_fu_891_output_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buf2_V_ce1 = grp_conv_layer_fu_851_output_V_ce1.read();
    } else {
        buf2_V_ce1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_buf2_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf2_V_d1 = grp_add_fu_891_output_V_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buf2_V_d1 = grp_conv_layer_fu_851_output_V_d1.read();
    } else {
        buf2_V_d1 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_buf2_V_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        buf2_V_we1 = grp_add_fu_891_output_V_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buf2_V_we1 = grp_conv_layer_fu_851_output_V_we1.read();
    } else {
        buf2_V_we1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_ch_fu_1669_p2() {
    ch_fu_1669_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_ch_0_phi_fu_774_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_ch_0_phi_fu_774_p4.read()));
}

void resnet50_0::thread_col_fu_1649_p2() {
    col_fu_1649_p2 = (!ap_const_lv5_1.is_01() || !select_ln396_fu_1588_p3.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(select_ln396_fu_1588_p3.read()));
}

void resnet50_0::thread_ddr_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ddr_V_ARVALID = grp_conv_layer_fu_851_m_axi_ddr_V_ARVALID.read();
    } else {
        ddr_V_ARVALID = ap_const_logic_0;
    }
}

void resnet50_0::thread_ddr_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ddr_V_RREADY = grp_conv_layer_fu_851_m_axi_ddr_V_RREADY.read();
    } else {
        ddr_V_RREADY = ap_const_logic_0;
    }
}

void resnet50_0::thread_empty_45_fu_4063_p2() {
    empty_45_fu_4063_p2 = (tmp_376_fu_4053_p5.read() | ap_const_lv8_8);
}

void resnet50_0::thread_empty_46_fu_4177_p2() {
    empty_46_fu_4177_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_9);
}

void resnet50_0::thread_empty_47_fu_4209_p2() {
    empty_47_fu_4209_p2 = (!p_cast163_fu_4205_p1.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(p_cast163_fu_4205_p1.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void resnet50_0::thread_empty_48_fu_4339_p2() {
    empty_48_fu_4339_p2 = (!zext_ln214_2_cast161_fu_4323_p1.read().is_01() || !p_shl118_cast_fu_4335_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_2_cast161_fu_4323_p1.read()) + sc_biguint<9>(p_shl118_cast_fu_4335_p1.read()));
}

void resnet50_0::thread_empty_49_fu_4345_p2() {
    empty_49_fu_4345_p2 = (empty_48_fu_4339_p2.read() | ap_const_lv9_8);
}

void resnet50_0::thread_empty_50_fu_4467_p2() {
    empty_50_fu_4467_p2 = (!zext_ln214_3_cast158_fu_4451_p1.read().is_01() || !p_shl117_cast_fu_4463_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_3_cast158_fu_4451_p1.read()) + sc_biguint<9>(p_shl117_cast_fu_4463_p1.read()));
}

void resnet50_0::thread_empty_51_fu_4511_p2() {
    empty_51_fu_4511_p2 = (tmp_380_fu_4503_p3.read() | ap_const_lv8_8);
}

void resnet50_0::thread_empty_52_fu_4625_p2() {
    empty_52_fu_4625_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_D);
}

void resnet50_0::thread_empty_53_fu_4649_p1() {
    empty_53_fu_4649_p1 = esl_zext<9,8>(tmp_382_fu_4641_p3.read());
}

void resnet50_0::thread_empty_54_fu_4657_p2() {
    empty_54_fu_4657_p2 = (!empty_53_fu_4649_p1.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(empty_53_fu_4649_p1.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void resnet50_0::thread_empty_55_fu_4787_p2() {
    empty_55_fu_4787_p2 = (!zext_ln214_6_cast149_fu_4771_p1.read().is_01() || !p_shl114_cast_fu_4783_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_6_cast149_fu_4771_p1.read()) + sc_biguint<9>(p_shl114_cast_fu_4783_p1.read()));
}

void resnet50_0::thread_empty_56_fu_4793_p2() {
    empty_56_fu_4793_p2 = (empty_55_fu_4787_p2.read() | ap_const_lv9_8);
}

void resnet50_0::thread_empty_57_fu_4915_p2() {
    empty_57_fu_4915_p2 = (!zext_ln214_7_cast146_fu_4899_p1.read().is_01() || !p_shl113_cast_fu_4911_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_7_cast146_fu_4899_p1.read()) + sc_biguint<9>(p_shl113_cast_fu_4911_p1.read()));
}

void resnet50_0::thread_empty_58_fu_4959_p1() {
    empty_58_fu_4959_p1 = esl_zext<9,8>(tmp_384_fu_4951_p3.read());
}

void resnet50_0::thread_empty_59_fu_4967_p2() {
    empty_59_fu_4967_p2 = (!empty_58_fu_4959_p1.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(empty_58_fu_4959_p1.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void resnet50_0::thread_empty_60_fu_5091_p2() {
    empty_60_fu_5091_p2 = (!zext_ln214_9_cast140_fu_5075_p1.read().is_01() || !p_shl111_cast_fu_5087_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_9_cast140_fu_5075_p1.read()) + sc_biguint<9>(p_shl111_cast_fu_5087_p1.read()));
}

void resnet50_0::thread_empty_61_fu_5133_p2() {
    empty_61_fu_5133_p2 = (!zext_ln214_10_cast13_fu_5117_p1.read().is_01() || !p_shl110_cast_fu_5129_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_10_cast13_fu_5117_p1.read()) + sc_biguint<9>(p_shl110_cast_fu_5129_p1.read()));
}

void resnet50_0::thread_empty_62_fu_5175_p2() {
    empty_62_fu_5175_p2 = (!zext_ln214_11_cast13_fu_5159_p1.read().is_01() || !p_shl109_cast_fu_5171_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_11_cast13_fu_5159_p1.read()) + sc_biguint<9>(p_shl109_cast_fu_5171_p1.read()));
}

void resnet50_0::thread_empty_63_fu_5219_p1() {
    empty_63_fu_5219_p1 = esl_zext<9,8>(tmp_386_fu_5211_p3.read());
}

void resnet50_0::thread_empty_64_fu_5227_p2() {
    empty_64_fu_5227_p2 = (!empty_63_fu_5219_p1.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(empty_63_fu_5219_p1.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void resnet50_0::thread_empty_65_fu_5351_p2() {
    empty_65_fu_5351_p2 = (!zext_ln214_13_cast12_fu_5335_p1.read().is_01() || !p_shl107_cast_fu_5347_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_13_cast12_fu_5335_p1.read()) + sc_biguint<9>(p_shl107_cast_fu_5347_p1.read()));
}

void resnet50_0::thread_empty_66_fu_5393_p2() {
    empty_66_fu_5393_p2 = (!zext_ln214_14_cast12_fu_5377_p1.read().is_01() || !p_shl106_cast_fu_5389_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_14_cast12_fu_5377_p1.read()) + sc_biguint<9>(p_shl106_cast_fu_5389_p1.read()));
}

void resnet50_0::thread_empty_67_fu_5435_p2() {
    empty_67_fu_5435_p2 = (!zext_ln214_15_cast12_fu_5419_p1.read().is_01() || !p_shl105_cast_fu_5431_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_15_cast12_fu_5419_p1.read()) + sc_biguint<9>(p_shl105_cast_fu_5431_p1.read()));
}

void resnet50_0::thread_grp_add_fu_891_SCALE1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_add_fu_891_SCALE1 = ap_const_lv32_3FC42629;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_add_fu_891_SCALE1 = ap_const_lv32_3F6EC792;
    } else {
        grp_add_fu_891_SCALE1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_add_fu_891_SCALE2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_add_fu_891_SCALE2 = ap_const_lv32_3F343D06;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_add_fu_891_SCALE2 = ap_const_lv32_3F159E11;
    } else {
        grp_add_fu_891_SCALE2 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_add_fu_891_ap_start() {
    grp_add_fu_891_ap_start = grp_add_fu_891_ap_start_reg.read();
}

void resnet50_0::thread_grp_add_fu_891_input1_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_add_fu_891_input1_V_q0 = buf0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_add_fu_891_input1_V_q0 = buf1_V_q0.read();
    } else {
        grp_add_fu_891_input1_V_q0 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_add_fu_891_input2_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_add_fu_891_input2_V_q0 = buf1_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_add_fu_891_input2_V_q0 = buf2_V_q0.read();
    } else {
        grp_add_fu_891_input2_V_q0 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_conv1_fu_914_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         esl_seteq<1,1,1>(ap_block_state17_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_conv1_fu_914_ap_continue = ap_const_logic_1;
    } else {
        grp_conv1_fu_914_ap_continue = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_conv1_fu_914_ap_start() {
    grp_conv1_fu_914_ap_start = grp_conv1_fu_914_ap_start_reg.read();
}

void resnet50_0::thread_grp_conv_layer_fu_851_K() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_conv_layer_fu_851_K = ap_const_lv4_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        grp_conv_layer_fu_851_K = ap_const_lv4_1;
    } else {
        grp_conv_layer_fu_851_K =  (sc_lv<4>) ("XXXX");
    }
}

void resnet50_0::thread_grp_conv_layer_fu_851_OFFSET() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_20800;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_17600;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_13400;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_EC00;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_5A00;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_4800;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        grp_conv_layer_fu_851_OFFSET = ap_const_lv19_0;
    } else {
        grp_conv_layer_fu_851_OFFSET =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_conv_layer_fu_851_P() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_conv_layer_fu_851_P = ap_const_lv1_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        grp_conv_layer_fu_851_P = ap_const_lv1_0;
    } else {
        grp_conv_layer_fu_851_P =  (sc_lv<1>) ("X");
    }
}

void resnet50_0::thread_grp_conv_layer_fu_851_TI() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_conv_layer_fu_851_TI = ap_const_lv5_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        grp_conv_layer_fu_851_TI = ap_const_lv5_2;
    } else {
        grp_conv_layer_fu_851_TI =  (sc_lv<5>) ("XXXXX");
    }
}

void resnet50_0::thread_grp_conv_layer_fu_851_TO_r() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_conv_layer_fu_851_TO_r = ap_const_lv4_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        grp_conv_layer_fu_851_TO_r = ap_const_lv4_4;
    } else {
        grp_conv_layer_fu_851_TO_r =  (sc_lv<4>) ("XXXX");
    }
}

void resnet50_0::thread_grp_conv_layer_fu_851_ap_start() {
    grp_conv_layer_fu_851_ap_start = grp_conv_layer_fu_851_ap_start_reg.read();
}

void resnet50_0::thread_grp_conv_layer_fu_851_input_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_conv_layer_fu_851_input_V_q0 = buf1_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        grp_conv_layer_fu_851_input_V_q0 = buf2_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        grp_conv_layer_fu_851_input_V_q0 = buf0_V_q0.read();
    } else {
        grp_conv_layer_fu_851_input_V_q0 =  (sc_lv<288>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_grp_fu_1384_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1384_ce = ap_const_logic_1;
    } else {
        grp_fu_1384_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1384_p0() {
    grp_fu_1384_p0 = trunc_ln681_fu_1436_p1.read();
}

void resnet50_0::thread_grp_fu_1389_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1389_ce = ap_const_logic_1;
    } else {
        grp_fu_1389_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1389_p0() {
    grp_fu_1389_p0 = p_Result_1_fu_1445_p4.read();
}

void resnet50_0::thread_grp_fu_1394_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1394_ce = ap_const_logic_1;
    } else {
        grp_fu_1394_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1394_p0() {
    grp_fu_1394_p0 = p_Result_2_reg_5532.read();
}

void resnet50_0::thread_grp_fu_1399_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1399_ce = ap_const_logic_1;
    } else {
        grp_fu_1399_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1399_p0() {
    grp_fu_1399_p0 = p_Result_3_reg_5537.read();
}

void resnet50_0::thread_grp_fu_1404_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1404_ce = ap_const_logic_1;
    } else {
        grp_fu_1404_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1404_p0() {
    grp_fu_1404_p0 = p_Result_4_reg_5542.read();
}

void resnet50_0::thread_grp_fu_1409_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1409_ce = ap_const_logic_1;
    } else {
        grp_fu_1409_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1409_p0() {
    grp_fu_1409_p0 = p_Result_5_reg_5547_pp0_iter1_reg.read();
}

void resnet50_0::thread_grp_fu_1414_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1414_ce = ap_const_logic_1;
    } else {
        grp_fu_1414_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1414_p0() {
    grp_fu_1414_p0 = p_Result_6_reg_5552_pp0_iter1_reg.read();
}

void resnet50_0::thread_grp_fu_1419_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1419_ce = ap_const_logic_1;
    } else {
        grp_fu_1419_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_fu_1419_p0() {
    grp_fu_1419_p0 = p_Result_7_reg_5557_pp0_iter1_reg.read();
}

void resnet50_0::thread_grp_maxpool_fu_1304_ap_start() {
    grp_maxpool_fu_1304_ap_start = grp_maxpool_fu_1304_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1312_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp143.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1312_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1312_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1312_ap_start() {
    grp_roundf_fu_1312_ap_start = grp_roundf_fu_1312_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1321_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp144.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1321_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1321_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1321_ap_start() {
    grp_roundf_fu_1321_ap_start = grp_roundf_fu_1321_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1330_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp172.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1330_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1330_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1330_ap_start() {
    grp_roundf_fu_1330_ap_start = grp_roundf_fu_1330_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1339_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp173.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1339_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1339_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1339_ap_start() {
    grp_roundf_fu_1339_ap_start = grp_roundf_fu_1339_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1348_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp174.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1348_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1348_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1348_ap_start() {
    grp_roundf_fu_1348_ap_start = grp_roundf_fu_1348_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1357_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp317.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1357_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1357_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1357_ap_start() {
    grp_roundf_fu_1357_ap_start = grp_roundf_fu_1357_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1366_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp318.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1366_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1366_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1366_ap_start() {
    grp_roundf_fu_1366_ap_start = grp_roundf_fu_1366_ap_start_reg.read();
}

void resnet50_0::thread_grp_roundf_fu_1375_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp319.read(), ap_const_boolean_0))) {
        grp_roundf_fu_1375_ap_ce = ap_const_logic_1;
    } else {
        grp_roundf_fu_1375_ap_ce = ap_const_logic_0;
    }
}

void resnet50_0::thread_grp_roundf_fu_1375_ap_start() {
    grp_roundf_fu_1375_ap_start = grp_roundf_fu_1375_ap_start_reg.read();
}

void resnet50_0::thread_i_fu_4037_p2() {
    i_fu_4037_p2 = (!select_ln431_fu_4012_p3.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(select_ln431_fu_4012_p3.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void resnet50_0::thread_icmp_ln214_1_fu_4219_p2() {
    icmp_ln214_1_fu_4219_p2 = (!p_cast164_fu_4201_p1.read().is_01() || !p_cast162_fu_4215_p1.read().is_01())? sc_lv<1>(): (sc_biguint<10>(p_cast164_fu_4201_p1.read()) > sc_biguint<10>(p_cast162_fu_4215_p1.read()));
}

void resnet50_0::thread_icmp_ln214_2_fu_4351_p2() {
    icmp_ln214_2_fu_4351_p2 = (!empty_48_fu_4339_p2.read().is_01() || !empty_49_fu_4345_p2.read().is_01())? sc_lv<1>(): (sc_biguint<9>(empty_48_fu_4339_p2.read()) > sc_biguint<9>(empty_49_fu_4345_p2.read()));
}

void resnet50_0::thread_icmp_ln214_3_fu_4517_p2() {
    icmp_ln214_3_fu_4517_p2 = (!tmp_380_fu_4503_p3.read().is_01() || !empty_51_fu_4511_p2.read().is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_380_fu_4503_p3.read()) > sc_biguint<8>(empty_51_fu_4511_p2.read()));
}

void resnet50_0::thread_icmp_ln214_4_fu_4667_p2() {
    icmp_ln214_4_fu_4667_p2 = (!p_cast151_fu_4653_p1.read().is_01() || !p_cast150_fu_4663_p1.read().is_01())? sc_lv<1>(): (sc_biguint<10>(p_cast151_fu_4653_p1.read()) > sc_biguint<10>(p_cast150_fu_4663_p1.read()));
}

void resnet50_0::thread_icmp_ln214_5_fu_4799_p2() {
    icmp_ln214_5_fu_4799_p2 = (!empty_55_fu_4787_p2.read().is_01() || !empty_56_fu_4793_p2.read().is_01())? sc_lv<1>(): (sc_biguint<9>(empty_55_fu_4787_p2.read()) > sc_biguint<9>(empty_56_fu_4793_p2.read()));
}

void resnet50_0::thread_icmp_ln214_6_fu_4977_p2() {
    icmp_ln214_6_fu_4977_p2 = (!p_cast142_fu_4963_p1.read().is_01() || !p_cast141_fu_4973_p1.read().is_01())? sc_lv<1>(): (sc_biguint<10>(p_cast142_fu_4963_p1.read()) > sc_biguint<10>(p_cast141_fu_4973_p1.read()));
}

void resnet50_0::thread_icmp_ln214_7_fu_5237_p2() {
    icmp_ln214_7_fu_5237_p2 = (!p_cast130_fu_5223_p1.read().is_01() || !p_cast129_fu_5233_p1.read().is_01())? sc_lv<1>(): (sc_biguint<10>(p_cast130_fu_5223_p1.read()) > sc_biguint<10>(p_cast129_fu_5233_p1.read()));
}

void resnet50_0::thread_icmp_ln214_fu_4069_p2() {
    icmp_ln214_fu_4069_p2 = (!tmp_376_fu_4053_p5.read().is_01() || !empty_45_fu_4063_p2.read().is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_376_fu_4053_p5.read()) > sc_biguint<8>(empty_45_fu_4063_p2.read()));
}

void resnet50_0::thread_icmp_ln278_1_fu_2045_p2() {
    icmp_ln278_1_fu_2045_p2 = (!trunc_ln263_64_fu_2003_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_64_fu_2003_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_2_fu_2325_p2() {
    icmp_ln278_2_fu_2325_p2 = (!trunc_ln263_65_fu_2291_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_65_fu_2291_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_3_fu_2613_p2() {
    icmp_ln278_3_fu_2613_p2 = (!trunc_ln263_66_fu_2571_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_66_fu_2571_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_4_fu_2898_p2() {
    icmp_ln278_4_fu_2898_p2 = (!trunc_ln263_67_fu_2856_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_67_fu_2856_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_5_fu_3176_p2() {
    icmp_ln278_5_fu_3176_p2 = (!trunc_ln263_68_fu_3142_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_68_fu_3142_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_6_fu_3378_p2() {
    icmp_ln278_6_fu_3378_p2 = (!trunc_ln263_69_fu_3344_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_69_fu_3344_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_7_fu_3747_p2() {
    icmp_ln278_7_fu_3747_p2 = (!trunc_ln263_70_fu_3705_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_70_fu_3705_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln278_fu_1758_p2() {
    icmp_ln278_fu_1758_p2 = (!trunc_ln263_fu_1716_p1.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln263_fu_1716_p1.read() == ap_const_lv31_0);
}

void resnet50_0::thread_icmp_ln282_1_fu_2061_p2() {
    icmp_ln282_1_fu_2061_p2 = (!p_Result_24_1_fu_2015_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_1_fu_2015_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_2_fu_2341_p2() {
    icmp_ln282_2_fu_2341_p2 = (!p_Result_24_2_fu_2295_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_2_fu_2295_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_3_fu_2629_p2() {
    icmp_ln282_3_fu_2629_p2 = (!p_Result_24_3_fu_2583_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_3_fu_2583_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_4_fu_2914_p2() {
    icmp_ln282_4_fu_2914_p2 = (!p_Result_24_4_fu_2868_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_4_fu_2868_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_5_fu_3192_p2() {
    icmp_ln282_5_fu_3192_p2 = (!p_Result_24_5_fu_3146_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_5_fu_3146_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_6_fu_3394_p2() {
    icmp_ln282_6_fu_3394_p2 = (!p_Result_24_6_fu_3348_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_6_fu_3348_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_7_fu_3763_p2() {
    icmp_ln282_7_fu_3763_p2 = (!p_Result_24_7_fu_3717_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_24_7_fu_3717_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln282_fu_1774_p2() {
    icmp_ln282_fu_1774_p2 = (!p_Result_s_fu_1728_p4.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_fu_1728_p4.read() == ap_const_lv8_96);
}

void resnet50_0::thread_icmp_ln284_1_fu_2067_p2() {
    icmp_ln284_1_fu_2067_p2 = (!sub_ln281_64_fu_2051_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_64_fu_2051_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_2_fu_2347_p2() {
    icmp_ln284_2_fu_2347_p2 = (!sub_ln281_65_fu_2331_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_65_fu_2331_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_3_fu_2635_p2() {
    icmp_ln284_3_fu_2635_p2 = (!sub_ln281_66_fu_2619_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_66_fu_2619_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_4_fu_2920_p2() {
    icmp_ln284_4_fu_2920_p2 = (!sub_ln281_67_fu_2904_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_67_fu_2904_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_5_fu_3198_p2() {
    icmp_ln284_5_fu_3198_p2 = (!sub_ln281_68_fu_3182_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_68_fu_3182_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_6_fu_3400_p2() {
    icmp_ln284_6_fu_3400_p2 = (!sub_ln281_69_fu_3384_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_69_fu_3384_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_7_fu_3769_p2() {
    icmp_ln284_7_fu_3769_p2 = (!sub_ln281_70_fu_3753_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_70_fu_3753_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln284_fu_1780_p2() {
    icmp_ln284_fu_1780_p2 = (!sub_ln281_fu_1764_p2.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_fu_1764_p2.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void resnet50_0::thread_icmp_ln285_1_fu_2073_p2() {
    icmp_ln285_1_fu_2073_p2 = (!sub_ln281_64_fu_2051_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_64_fu_2051_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_2_fu_2353_p2() {
    icmp_ln285_2_fu_2353_p2 = (!sub_ln281_65_fu_2331_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_65_fu_2331_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_3_fu_2641_p2() {
    icmp_ln285_3_fu_2641_p2 = (!sub_ln281_66_fu_2619_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_66_fu_2619_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_4_fu_2926_p2() {
    icmp_ln285_4_fu_2926_p2 = (!sub_ln281_67_fu_2904_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_67_fu_2904_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_5_fu_3204_p2() {
    icmp_ln285_5_fu_3204_p2 = (!sub_ln281_68_fu_3182_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_68_fu_3182_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_6_fu_3406_p2() {
    icmp_ln285_6_fu_3406_p2 = (!sub_ln281_69_fu_3384_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_69_fu_3384_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_7_fu_3775_p2() {
    icmp_ln285_7_fu_3775_p2 = (!sub_ln281_70_fu_3753_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_70_fu_3753_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln285_fu_1786_p2() {
    icmp_ln285_fu_1786_p2 = (!sub_ln281_fu_1764_p2.read().is_01() || !ap_const_lv9_19.is_01())? sc_lv<1>(): (sc_bigint<9>(sub_ln281_fu_1764_p2.read()) < sc_bigint<9>(ap_const_lv9_19));
}

void resnet50_0::thread_icmp_ln295_1_fu_2089_p2() {
    icmp_ln295_1_fu_2089_p2 = (!trunc_ln294_64_fu_2085_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_64_fu_2085_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_2_fu_2369_p2() {
    icmp_ln295_2_fu_2369_p2 = (!trunc_ln294_65_fu_2365_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_65_fu_2365_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_3_fu_2657_p2() {
    icmp_ln295_3_fu_2657_p2 = (!trunc_ln294_66_fu_2653_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_66_fu_2653_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_4_fu_2942_p2() {
    icmp_ln295_4_fu_2942_p2 = (!trunc_ln294_67_fu_2938_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_67_fu_2938_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_5_fu_3220_p2() {
    icmp_ln295_5_fu_3220_p2 = (!trunc_ln294_68_fu_3216_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_68_fu_3216_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_6_fu_3422_p2() {
    icmp_ln295_6_fu_3422_p2 = (!trunc_ln294_69_fu_3418_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_69_fu_3418_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_7_fu_3791_p2() {
    icmp_ln295_7_fu_3791_p2 = (!trunc_ln294_70_fu_3787_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_70_fu_3787_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln295_fu_1802_p2() {
    icmp_ln295_fu_1802_p2 = (!trunc_ln294_fu_1798_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): (sc_bigint<8>(trunc_ln294_fu_1798_p1.read()) < sc_bigint<8>(ap_const_lv8_9));
}

void resnet50_0::thread_icmp_ln395_fu_1424_p2() {
    icmp_ln395_fu_1424_p2 = (!indvar_flatten47_reg_759.read().is_01() || !ap_const_lv15_4980.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten47_reg_759.read() == ap_const_lv15_4980);
}

void resnet50_0::thread_icmp_ln396_fu_1544_p2() {
    icmp_ln396_fu_1544_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_786_p4.read().is_01() || !ap_const_lv13_1880.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_786_p4.read() == ap_const_lv13_1880);
}

void resnet50_0::thread_icmp_ln397_fu_1564_p2() {
    icmp_ln397_fu_1564_p2 = (!ap_phi_mux_col_0_phi_fu_810_p4.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col_0_phi_fu_810_p4.read() == ap_const_lv5_1C);
}

void resnet50_0::thread_icmp_ln425_fu_3988_p2() {
    icmp_ln425_fu_3988_p2 = (!indvar_flatten55_reg_818.read().is_01() || !ap_const_lv16_C400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten55_reg_818.read() == ap_const_lv16_C400);
}

void resnet50_0::thread_icmp_ln426_fu_4006_p2() {
    icmp_ln426_fu_4006_p2 = (!i_0_reg_840.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_840.read() == ap_const_lv2_2);
}

void resnet50_0::thread_inbuf_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        inbuf_V_address0 =  (sc_lv<13>) (zext_ln180_3_fu_1644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        inbuf_V_address0 = grp_conv1_fu_914_input_V_address0.read();
    } else {
        inbuf_V_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void resnet50_0::thread_inbuf_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        inbuf_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        inbuf_V_ce0 = grp_conv1_fu_914_input_V_ce0.read();
    } else {
        inbuf_V_ce0 = ap_const_logic_0;
    }
}

void resnet50_0::thread_inbuf_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        inbuf_V_ce1 = ap_const_logic_1;
    } else {
        inbuf_V_ce1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_inbuf_V_d1() {
    inbuf_V_d1 = (and_ln180_7_fu_3965_p2.read() | shl_ln180_15_fu_3975_p2.read());
}

void resnet50_0::thread_inbuf_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter11_reg.read()))) {
        inbuf_V_we1 = ap_const_logic_1;
    } else {
        inbuf_V_we1 = ap_const_logic_0;
    }
}

void resnet50_0::thread_input_V_0_ack_in() {
    input_V_0_ack_in = input_V_0_state.read()[1];
}

void resnet50_0::thread_input_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        input_V_0_ack_out = ap_const_logic_1;
    } else {
        input_V_0_ack_out = ap_const_logic_0;
    }
}

void resnet50_0::thread_input_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_sel.read())) {
        input_V_0_data_out = input_V_0_payload_B.read();
    } else {
        input_V_0_data_out = input_V_0_payload_A.read();
    }
}

void resnet50_0::thread_input_V_0_load_A() {
    input_V_0_load_A = (input_V_0_state_cmp_full.read() & ~input_V_0_sel_wr.read());
}

void resnet50_0::thread_input_V_0_load_B() {
    input_V_0_load_B = (input_V_0_sel_wr.read() & input_V_0_state_cmp_full.read());
}

void resnet50_0::thread_input_V_0_sel() {
    input_V_0_sel = input_V_0_sel_rd.read();
}

void resnet50_0::thread_input_V_0_state_cmp_full() {
    input_V_0_state_cmp_full =  (sc_logic) ((!input_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(input_V_0_state.read() != ap_const_lv2_1))[0];
}

void resnet50_0::thread_input_V_0_vld_in() {
    input_V_0_vld_in = input_V_TVALID.read();
}

void resnet50_0::thread_input_V_0_vld_out() {
    input_V_0_vld_out = input_V_0_state.read()[0];
}

void resnet50_0::thread_input_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()))) {
        input_V_TDATA_blk_n = input_V_0_state.read()[0];
    } else {
        input_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void resnet50_0::thread_input_V_TREADY() {
    input_V_TREADY = input_V_0_state.read()[1];
}

void resnet50_0::thread_lshr_ln180_1_fu_2227_p2() {
    lshr_ln180_1_fu_2227_p2 = (!zext_ln180_7_fu_2223_p1.read().is_01())? sc_lv<216>(): or_ln180_fu_1994_p2.read() >> (unsigned short)zext_ln180_7_fu_2223_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_2_fu_2511_p2() {
    lshr_ln180_2_fu_2511_p2 = (!zext_ln180_10_fu_2508_p1.read().is_01())? sc_lv<216>(): or_ln180_1_reg_5690.read() >> (unsigned short)zext_ln180_10_fu_2508_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_3_fu_2794_p2() {
    lshr_ln180_3_fu_2794_p2 = (!zext_ln180_13_fu_2791_p1.read().is_01())? sc_lv<216>(): or_ln180_2_fu_2562_p2.read() >> (unsigned short)zext_ln180_13_fu_2791_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_4_fu_3079_p2() {
    lshr_ln180_4_fu_3079_p2 = (!zext_ln180_16_fu_3076_p1.read().is_01())? sc_lv<216>(): or_ln180_3_fu_2847_p2.read() >> (unsigned short)zext_ln180_16_fu_3076_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_5_fu_3564_p2() {
    lshr_ln180_5_fu_3564_p2 = (!zext_ln180_19_fu_3561_p1.read().is_01())? sc_lv<216>(): or_ln180_4_reg_5717.read() >> (unsigned short)zext_ln180_19_fu_3561_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_6_fu_3643_p2() {
    lshr_ln180_6_fu_3643_p2 = (!zext_ln180_22_fu_3640_p1.read().is_01())? sc_lv<216>(): or_ln180_5_fu_3615_p2.read() >> (unsigned short)zext_ln180_22_fu_3640_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_7_fu_3928_p2() {
    lshr_ln180_7_fu_3928_p2 = (!zext_ln180_25_fu_3925_p1.read().is_01())? sc_lv<216>(): or_ln180_6_fu_3696_p2.read() >> (unsigned short)zext_ln180_25_fu_3925_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln180_fu_1940_p2() {
    lshr_ln180_fu_1940_p2 = (!zext_ln180_4_fu_1936_p1.read().is_01())? sc_lv<216>(): inbuf_V_q0.read() >> (unsigned short)zext_ln180_4_fu_1936_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_10_fu_4749_p2() {
    lshr_ln214_10_fu_4749_p2 = (!zext_ln214_16_fu_4739_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_16_fu_4739_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_11_fu_4871_p2() {
    lshr_ln214_11_fu_4871_p2 = (!zext_ln214_17_fu_4863_p1.read().is_01())? sc_lv<288>(): select_ln214_16_fu_4841_p3.read() >> (unsigned short)zext_ln214_17_fu_4863_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_12_fu_4877_p2() {
    lshr_ln214_12_fu_4877_p2 = (!zext_ln214_18_fu_4867_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_18_fu_4867_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_13_fu_4925_p2() {
    lshr_ln214_13_fu_4925_p2 = (!zext_ln214_19_fu_4921_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_19_fu_4921_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_14_fu_5053_p2() {
    lshr_ln214_14_fu_5053_p2 = (!zext_ln214_21_fu_5045_p1.read().is_01())? sc_lv<288>(): select_ln214_19_fu_5023_p3.read() >> (unsigned short)zext_ln214_21_fu_5045_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_15_fu_5059_p2() {
    lshr_ln214_15_fu_5059_p2 = (!zext_ln214_22_fu_5049_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_22_fu_5049_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_16_fu_5101_p2() {
    lshr_ln214_16_fu_5101_p2 = (!zext_ln214_23_fu_5097_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_23_fu_5097_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_17_fu_5143_p2() {
    lshr_ln214_17_fu_5143_p2 = (!zext_ln214_24_fu_5139_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_24_fu_5139_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_18_fu_5185_p2() {
    lshr_ln214_18_fu_5185_p2 = (!zext_ln214_25_fu_5181_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_25_fu_5181_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_19_fu_5313_p2() {
    lshr_ln214_19_fu_5313_p2 = (!zext_ln214_27_fu_5305_p1.read().is_01())? sc_lv<288>(): select_ln214_22_fu_5283_p3.read() >> (unsigned short)zext_ln214_27_fu_5305_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_1_fu_4155_p2() {
    lshr_ln214_1_fu_4155_p2 = (!zext_ln214_3_fu_4145_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_3_fu_4145_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_20_fu_5319_p2() {
    lshr_ln214_20_fu_5319_p2 = (!zext_ln214_28_fu_5309_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_28_fu_5309_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_21_fu_5361_p2() {
    lshr_ln214_21_fu_5361_p2 = (!zext_ln214_29_fu_5357_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_29_fu_5357_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_22_fu_5403_p2() {
    lshr_ln214_22_fu_5403_p2 = (!zext_ln214_30_fu_5399_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_30_fu_5399_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_23_fu_5445_p2() {
    lshr_ln214_23_fu_5445_p2 = (!zext_ln214_31_fu_5441_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_31_fu_5441_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_2_fu_4295_p2() {
    lshr_ln214_2_fu_4295_p2 = (!zext_ln214_5_fu_4287_p1.read().is_01())? sc_lv<288>(): select_ln214_4_fu_4265_p3.read() >> (unsigned short)zext_ln214_5_fu_4287_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_3_fu_4301_p2() {
    lshr_ln214_3_fu_4301_p2 = (!zext_ln214_6_fu_4291_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_6_fu_4291_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_4_fu_4423_p2() {
    lshr_ln214_4_fu_4423_p2 = (!zext_ln214_7_fu_4415_p1.read().is_01())? sc_lv<288>(): select_ln214_7_fu_4393_p3.read() >> (unsigned short)zext_ln214_7_fu_4415_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_5_fu_4429_p2() {
    lshr_ln214_5_fu_4429_p2 = (!zext_ln214_8_fu_4419_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_8_fu_4419_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_6_fu_4477_p2() {
    lshr_ln214_6_fu_4477_p2 = (!zext_ln214_9_fu_4473_p1.read().is_01())? sc_lv<288>(): buf2_V_q0.read() >> (unsigned short)zext_ln214_9_fu_4473_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_7_fu_4597_p2() {
    lshr_ln214_7_fu_4597_p2 = (!zext_ln214_12_fu_4589_p1.read().is_01())? sc_lv<288>(): select_ln214_10_fu_4567_p3.read() >> (unsigned short)zext_ln214_12_fu_4589_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_8_fu_4603_p2() {
    lshr_ln214_8_fu_4603_p2 = (!zext_ln214_13_fu_4593_p1.read().is_01())? sc_lv<288>(): ap_const_lv288_lc_5 >> (unsigned short)zext_ln214_13_fu_4593_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_9_fu_4743_p2() {
    lshr_ln214_9_fu_4743_p2 = (!zext_ln214_15_fu_4735_p1.read().is_01())? sc_lv<288>(): select_ln214_13_fu_4713_p3.read() >> (unsigned short)zext_ln214_15_fu_4735_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln214_fu_4149_p2() {
    lshr_ln214_fu_4149_p2 = (!zext_ln214_2_fu_4141_p1.read().is_01())? sc_lv<288>(): select_ln214_1_fu_4119_p3.read() >> (unsigned short)zext_ln214_2_fu_4141_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_64_fu_2109_p2() {
    lshr_ln286_64_fu_2109_p2 = (!sext_ln281_64_fu_2057_p1.read().is_01())? sc_lv<24>(): tmp_361_fu_2037_p3.read() >> (unsigned short)sext_ln281_64_fu_2057_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_65_fu_2389_p2() {
    lshr_ln286_65_fu_2389_p2 = (!sext_ln281_65_fu_2337_p1.read().is_01())? sc_lv<24>(): tmp_363_fu_2317_p3.read() >> (unsigned short)sext_ln281_65_fu_2337_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_66_fu_2677_p2() {
    lshr_ln286_66_fu_2677_p2 = (!sext_ln281_66_fu_2625_p1.read().is_01())? sc_lv<24>(): tmp_365_fu_2605_p3.read() >> (unsigned short)sext_ln281_66_fu_2625_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_67_fu_2962_p2() {
    lshr_ln286_67_fu_2962_p2 = (!sext_ln281_67_fu_2910_p1.read().is_01())? sc_lv<24>(): tmp_367_fu_2890_p3.read() >> (unsigned short)sext_ln281_67_fu_2910_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_68_fu_3240_p2() {
    lshr_ln286_68_fu_3240_p2 = (!sext_ln281_68_fu_3188_p1.read().is_01())? sc_lv<24>(): tmp_370_fu_3168_p3.read() >> (unsigned short)sext_ln281_68_fu_3188_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_69_fu_3442_p2() {
    lshr_ln286_69_fu_3442_p2 = (!sext_ln281_69_fu_3390_p1.read().is_01())? sc_lv<24>(): tmp_372_fu_3370_p3.read() >> (unsigned short)sext_ln281_69_fu_3390_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_70_fu_3811_p2() {
    lshr_ln286_70_fu_3811_p2 = (!sext_ln281_70_fu_3759_p1.read().is_01())? sc_lv<24>(): tmp_374_fu_3739_p3.read() >> (unsigned short)sext_ln281_70_fu_3759_p1.read().to_uint();
}

void resnet50_0::thread_lshr_ln286_fu_1822_p2() {
    lshr_ln286_fu_1822_p2 = (!sext_ln281_fu_1770_p1.read().is_01())? sc_lv<24>(): tmp_359_fu_1750_p3.read() >> (unsigned short)sext_ln281_fu_1770_p1.read().to_uint();
}

void resnet50_0::thread_or_ln180_1_fu_2281_p2() {
    or_ln180_1_fu_2281_p2 = (and_ln180_1_fu_2265_p2.read() | shl_ln180_3_fu_2275_p2.read());
}

void resnet50_0::thread_or_ln180_2_fu_2562_p2() {
    or_ln180_2_fu_2562_p2 = (and_ln180_2_fu_2547_p2.read() | shl_ln180_5_fu_2556_p2.read());
}

void resnet50_0::thread_or_ln180_3_fu_2847_p2() {
    or_ln180_3_fu_2847_p2 = (and_ln180_3_fu_2831_p2.read() | shl_ln180_7_fu_2841_p2.read());
}

void resnet50_0::thread_or_ln180_4_fu_3132_p2() {
    or_ln180_4_fu_3132_p2 = (and_ln180_4_fu_3116_p2.read() | shl_ln180_9_fu_3126_p2.read());
}

void resnet50_0::thread_or_ln180_5_fu_3615_p2() {
    or_ln180_5_fu_3615_p2 = (and_ln180_5_fu_3600_p2.read() | shl_ln180_11_fu_3609_p2.read());
}

void resnet50_0::thread_or_ln180_6_fu_3696_p2() {
    or_ln180_6_fu_3696_p2 = (and_ln180_6_fu_3680_p2.read() | shl_ln180_13_fu_3690_p2.read());
}

void resnet50_0::thread_or_ln180_fu_1994_p2() {
    or_ln180_fu_1994_p2 = (and_ln180_fu_1978_p2.read() | shl_ln180_1_fu_1988_p2.read());
}

void resnet50_0::thread_or_ln214_10_fu_5195_p2() {
    or_ln214_10_fu_5195_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_C);
}

void resnet50_0::thread_or_ln214_11_fu_5371_p2() {
    or_ln214_11_fu_5371_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_E);
}

void resnet50_0::thread_or_ln214_12_fu_5413_p2() {
    or_ln214_12_fu_5413_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_F);
}

void resnet50_0::thread_or_ln214_1_fu_4317_p2() {
    or_ln214_1_fu_4317_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_2);
}

void resnet50_0::thread_or_ln214_2_fu_4445_p2() {
    or_ln214_2_fu_4445_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_3);
}

void resnet50_0::thread_or_ln214_3_fu_4487_p2() {
    or_ln214_3_fu_4487_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_4);
}

void resnet50_0::thread_or_ln214_4_fu_4619_p2() {
    or_ln214_4_fu_4619_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_5);
}

void resnet50_0::thread_or_ln214_5_fu_4765_p2() {
    or_ln214_5_fu_4765_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_6);
}

void resnet50_0::thread_or_ln214_6_fu_4893_p2() {
    or_ln214_6_fu_4893_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_7);
}

void resnet50_0::thread_or_ln214_7_fu_4935_p2() {
    or_ln214_7_fu_4935_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_8);
}

void resnet50_0::thread_or_ln214_8_fu_5111_p2() {
    or_ln214_8_fu_5111_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_A);
}

void resnet50_0::thread_or_ln214_9_fu_5153_p2() {
    or_ln214_9_fu_5153_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_B);
}

void resnet50_0::thread_or_ln214_fu_4171_p2() {
    or_ln214_fu_4171_p2 = (shl_ln2_fu_4046_p3.read() | ap_const_lv5_1);
}

void resnet50_0::thread_or_ln282_64_fu_2135_p2() {
    or_ln282_64_fu_2135_p2 = (icmp_ln278_1_fu_2045_p2.read() | icmp_ln282_1_fu_2061_p2.read());
}

void resnet50_0::thread_or_ln282_65_fu_2415_p2() {
    or_ln282_65_fu_2415_p2 = (icmp_ln278_2_fu_2325_p2.read() | icmp_ln282_2_fu_2341_p2.read());
}

void resnet50_0::thread_or_ln282_66_fu_2703_p2() {
    or_ln282_66_fu_2703_p2 = (icmp_ln278_3_fu_2613_p2.read() | icmp_ln282_3_fu_2629_p2.read());
}

void resnet50_0::thread_or_ln282_67_fu_2988_p2() {
    or_ln282_67_fu_2988_p2 = (icmp_ln278_4_fu_2898_p2.read() | icmp_ln282_4_fu_2914_p2.read());
}

void resnet50_0::thread_or_ln282_68_fu_3266_p2() {
    or_ln282_68_fu_3266_p2 = (icmp_ln278_5_fu_3176_p2.read() | icmp_ln282_5_fu_3192_p2.read());
}

void resnet50_0::thread_or_ln282_69_fu_3468_p2() {
    or_ln282_69_fu_3468_p2 = (icmp_ln278_6_fu_3378_p2.read() | icmp_ln282_6_fu_3394_p2.read());
}

void resnet50_0::thread_or_ln282_70_fu_3837_p2() {
    or_ln282_70_fu_3837_p2 = (icmp_ln278_7_fu_3747_p2.read() | icmp_ln282_7_fu_3763_p2.read());
}

void resnet50_0::thread_or_ln282_fu_1848_p2() {
    or_ln282_fu_1848_p2 = (icmp_ln278_fu_1758_p2.read() | icmp_ln282_fu_1774_p2.read());
}

void resnet50_0::thread_or_ln284_64_fu_2195_p2() {
    or_ln284_64_fu_2195_p2 = (or_ln282_64_fu_2135_p2.read() | icmp_ln284_1_fu_2067_p2.read());
}

void resnet50_0::thread_or_ln284_65_fu_2475_p2() {
    or_ln284_65_fu_2475_p2 = (or_ln282_65_fu_2415_p2.read() | icmp_ln284_2_fu_2347_p2.read());
}

void resnet50_0::thread_or_ln284_66_fu_2763_p2() {
    or_ln284_66_fu_2763_p2 = (or_ln282_66_fu_2703_p2.read() | icmp_ln284_3_fu_2635_p2.read());
}

void resnet50_0::thread_or_ln284_67_fu_3048_p2() {
    or_ln284_67_fu_3048_p2 = (or_ln282_67_fu_2988_p2.read() | icmp_ln284_4_fu_2920_p2.read());
}

void resnet50_0::thread_or_ln284_68_fu_3326_p2() {
    or_ln284_68_fu_3326_p2 = (or_ln282_68_fu_3266_p2.read() | icmp_ln284_5_fu_3198_p2.read());
}

void resnet50_0::thread_or_ln284_69_fu_3528_p2() {
    or_ln284_69_fu_3528_p2 = (or_ln282_69_fu_3468_p2.read() | icmp_ln284_6_fu_3400_p2.read());
}

void resnet50_0::thread_or_ln284_70_fu_3897_p2() {
    or_ln284_70_fu_3897_p2 = (or_ln282_70_fu_3837_p2.read() | icmp_ln284_7_fu_3769_p2.read());
}

void resnet50_0::thread_or_ln284_fu_1908_p2() {
    or_ln284_fu_1908_p2 = (or_ln282_fu_1848_p2.read() | icmp_ln284_fu_1780_p2.read());
}

void resnet50_0::thread_or_ln396_fu_1582_p2() {
    or_ln396_fu_1582_p2 = (and_ln399_fu_1570_p2.read() | icmp_ln396_fu_1544_p2.read());
}

void resnet50_0::thread_p_Result_1_fu_1445_p4() {
    p_Result_1_fu_1445_p4 = input_V_0_data_out.read().range(63, 32);
}

void resnet50_0::thread_p_Result_24_1_fu_2015_p4() {
    p_Result_24_1_fu_2015_p4 = bitcast_ln705_1_fu_2000_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_2_fu_2295_p4() {
    p_Result_24_2_fu_2295_p4 = bitcast_ln705_2_fu_2287_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_3_fu_2583_p4() {
    p_Result_24_3_fu_2583_p4 = bitcast_ln705_3_fu_2568_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_4_fu_2868_p4() {
    p_Result_24_4_fu_2868_p4 = bitcast_ln705_4_fu_2853_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_5_fu_3146_p4() {
    p_Result_24_5_fu_3146_p4 = bitcast_ln705_5_fu_3138_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_6_fu_3348_p4() {
    p_Result_24_6_fu_3348_p4 = bitcast_ln705_6_fu_3340_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_24_7_fu_3717_p4() {
    p_Result_24_7_fu_3717_p4 = bitcast_ln705_7_fu_3702_p1.read().range(30, 23);
}

void resnet50_0::thread_p_Result_30_s_fu_5491_p5() {
    p_Result_30_s_fu_5491_p5 = esl_partset<169,169,128,32,32>(p_0106_1_fu_696.read(), tmp_369_fu_5455_p17.read(), ap_const_lv32_0, ap_const_lv32_7F);
}

void resnet50_0::thread_p_Result_s_fu_1728_p4() {
    p_Result_s_fu_1728_p4 = bitcast_ln705_fu_1713_p1.read().range(30, 23);
}

void resnet50_0::thread_p_cast129_fu_5233_p1() {
    p_cast129_fu_5233_p1 = esl_zext<10,9>(empty_64_fu_5227_p2.read());
}

void resnet50_0::thread_p_cast130_fu_5223_p1() {
    p_cast130_fu_5223_p1 = esl_zext<10,8>(tmp_386_fu_5211_p3.read());
}

void resnet50_0::thread_p_cast141_fu_4973_p1() {
    p_cast141_fu_4973_p1 = esl_zext<10,9>(empty_59_fu_4967_p2.read());
}

void resnet50_0::thread_p_cast142_fu_4963_p1() {
    p_cast142_fu_4963_p1 = esl_zext<10,8>(tmp_384_fu_4951_p3.read());
}

void resnet50_0::thread_p_cast150_fu_4663_p1() {
    p_cast150_fu_4663_p1 = esl_zext<10,9>(empty_54_fu_4657_p2.read());
}

void resnet50_0::thread_p_cast151_fu_4653_p1() {
    p_cast151_fu_4653_p1 = esl_zext<10,8>(tmp_382_fu_4641_p3.read());
}

void resnet50_0::thread_p_cast162_fu_4215_p1() {
    p_cast162_fu_4215_p1 = esl_zext<10,9>(empty_47_fu_4209_p2.read());
}

void resnet50_0::thread_p_cast163_fu_4205_p1() {
    p_cast163_fu_4205_p1 = esl_zext<9,8>(tmp_378_fu_4193_p3.read());
}

void resnet50_0::thread_p_cast164_fu_4201_p1() {
    p_cast164_fu_4201_p1 = esl_zext<10,8>(tmp_378_fu_4193_p3.read());
}

void resnet50_0::thread_p_shl105_cast_fu_5431_p1() {
    p_shl105_cast_fu_5431_p1 = esl_zext<9,8>(p_shl2_fu_5423_p3.read());
}

void resnet50_0::thread_p_shl106_cast_fu_5389_p1() {
    p_shl106_cast_fu_5389_p1 = esl_zext<9,8>(p_shl1_fu_5381_p3.read());
}

void resnet50_0::thread_p_shl107_cast_fu_5347_p1() {
    p_shl107_cast_fu_5347_p1 = esl_zext<9,8>(p_shl_fu_5339_p3.read());
}

void resnet50_0::thread_p_shl109_cast_fu_5171_p1() {
    p_shl109_cast_fu_5171_p1 = esl_zext<9,8>(p_shl9_fu_5163_p3.read());
}

void resnet50_0::thread_p_shl110_cast_fu_5129_p1() {
    p_shl110_cast_fu_5129_p1 = esl_zext<9,8>(p_shl8_fu_5121_p3.read());
}

void resnet50_0::thread_p_shl111_cast_fu_5087_p1() {
    p_shl111_cast_fu_5087_p1 = esl_zext<9,8>(p_shl7_fu_5079_p3.read());
}

void resnet50_0::thread_p_shl113_cast_fu_4911_p1() {
    p_shl113_cast_fu_4911_p1 = esl_zext<9,8>(p_shl6_fu_4903_p3.read());
}

void resnet50_0::thread_p_shl114_cast_fu_4783_p1() {
    p_shl114_cast_fu_4783_p1 = esl_zext<9,8>(p_shl5_fu_4775_p3.read());
}

void resnet50_0::thread_p_shl117_cast_fu_4463_p1() {
    p_shl117_cast_fu_4463_p1 = esl_zext<9,8>(p_shl4_fu_4455_p3.read());
}

void resnet50_0::thread_p_shl118_cast_fu_4335_p1() {
    p_shl118_cast_fu_4335_p1 = esl_zext<9,8>(p_shl3_fu_4327_p3.read());
}

void resnet50_0::thread_p_shl1_fu_5381_p3() {
    p_shl1_fu_5381_p3 = esl_concat<5,3>(or_ln214_11_fu_5371_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl2_fu_5423_p3() {
    p_shl2_fu_5423_p3 = esl_concat<5,3>(or_ln214_12_fu_5413_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl3_fu_4327_p3() {
    p_shl3_fu_4327_p3 = esl_concat<5,3>(or_ln214_1_fu_4317_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl4_fu_4455_p3() {
    p_shl4_fu_4455_p3 = esl_concat<5,3>(or_ln214_2_fu_4445_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl5_fu_4775_p3() {
    p_shl5_fu_4775_p3 = esl_concat<5,3>(or_ln214_5_fu_4765_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl6_fu_4903_p3() {
    p_shl6_fu_4903_p3 = esl_concat<5,3>(or_ln214_6_fu_4893_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl7_fu_5079_p3() {
    p_shl7_fu_5079_p3 = esl_concat<5,3>(empty_46_fu_4177_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl8_fu_5121_p3() {
    p_shl8_fu_5121_p3 = esl_concat<5,3>(or_ln214_8_fu_5111_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl9_fu_5163_p3() {
    p_shl9_fu_5163_p3 = esl_concat<5,3>(or_ln214_9_fu_5153_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_p_shl_fu_5339_p3() {
    p_shl_fu_5339_p3 = esl_concat<5,3>(empty_52_fu_4625_p2.read(), ap_const_lv3_0);
}

void resnet50_0::thread_row_fu_1576_p2() {
    row_fu_1576_p2 = (!ap_const_lv8_1.is_01() || !select_ln399_fu_1550_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(select_ln399_fu_1550_p3.read()));
}

void resnet50_0::thread_s_fu_4000_p2() {
    s_fu_4000_p2 = (!ap_phi_mux_s_0_phi_fu_833_p4.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(ap_phi_mux_s_0_phi_fu_833_p4.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void resnet50_0::thread_select_ln214_10_fu_4567_p3() {
    select_ln214_10_fu_4567_p3 = (!icmp_ln214_3_fu_4517_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_3_fu_4517_p2.read()[0].to_bool())? tmp_540_fu_4531_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_11_fu_4575_p3() {
    select_ln214_11_fu_4575_p3 = (!icmp_ln214_3_fu_4517_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_3_fu_4517_p2.read()[0].to_bool())? sub_ln214_13_fu_4547_p2.read(): zext_ln214_10_fu_4523_p1.read());
}

void resnet50_0::thread_select_ln214_12_fu_4705_p3() {
    select_ln214_12_fu_4705_p3 = (!icmp_ln214_4_fu_4667_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_4_fu_4667_p2.read()[0].to_bool())? sub_ln214_16_fu_4687_p2.read(): sub_ln214_18_fu_4699_p2.read());
}

void resnet50_0::thread_select_ln214_13_fu_4713_p3() {
    select_ln214_13_fu_4713_p3 = (!icmp_ln214_4_fu_4667_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_4_fu_4667_p2.read()[0].to_bool())? tmp_541_fu_4677_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_14_fu_4721_p3() {
    select_ln214_14_fu_4721_p3 = (!icmp_ln214_4_fu_4667_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_4_fu_4667_p2.read()[0].to_bool())? sub_ln214_17_fu_4693_p2.read(): zext_ln214_14_fu_4673_p1.read());
}

void resnet50_0::thread_select_ln214_15_fu_4833_p3() {
    select_ln214_15_fu_4833_p3 = (!icmp_ln214_5_fu_4799_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_5_fu_4799_p2.read()[0].to_bool())? sub_ln214_20_fu_4815_p2.read(): sub_ln214_22_fu_4827_p2.read());
}

void resnet50_0::thread_select_ln214_16_fu_4841_p3() {
    select_ln214_16_fu_4841_p3 = (!icmp_ln214_5_fu_4799_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_5_fu_4799_p2.read()[0].to_bool())? tmp_542_fu_4805_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_17_fu_4849_p3() {
    select_ln214_17_fu_4849_p3 = (!icmp_ln214_5_fu_4799_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_5_fu_4799_p2.read()[0].to_bool())? sub_ln214_21_fu_4821_p2.read(): empty_55_fu_4787_p2.read());
}

void resnet50_0::thread_select_ln214_18_fu_5015_p3() {
    select_ln214_18_fu_5015_p3 = (!icmp_ln214_6_fu_4977_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_6_fu_4977_p2.read()[0].to_bool())? sub_ln214_24_fu_4997_p2.read(): sub_ln214_26_fu_5009_p2.read());
}

void resnet50_0::thread_select_ln214_19_fu_5023_p3() {
    select_ln214_19_fu_5023_p3 = (!icmp_ln214_6_fu_4977_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_6_fu_4977_p2.read()[0].to_bool())? tmp_543_fu_4987_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_1_fu_4119_p3() {
    select_ln214_1_fu_4119_p3 = (!icmp_ln214_fu_4069_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_fu_4069_p2.read()[0].to_bool())? tmp_537_fu_4083_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_20_fu_5031_p3() {
    select_ln214_20_fu_5031_p3 = (!icmp_ln214_6_fu_4977_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_6_fu_4977_p2.read()[0].to_bool())? sub_ln214_25_fu_5003_p2.read(): zext_ln214_20_fu_4983_p1.read());
}

void resnet50_0::thread_select_ln214_21_fu_5275_p3() {
    select_ln214_21_fu_5275_p3 = (!icmp_ln214_7_fu_5237_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_7_fu_5237_p2.read()[0].to_bool())? sub_ln214_28_fu_5257_p2.read(): sub_ln214_30_fu_5269_p2.read());
}

void resnet50_0::thread_select_ln214_22_fu_5283_p3() {
    select_ln214_22_fu_5283_p3 = (!icmp_ln214_7_fu_5237_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_7_fu_5237_p2.read()[0].to_bool())? tmp_544_fu_5247_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_23_fu_5291_p3() {
    select_ln214_23_fu_5291_p3 = (!icmp_ln214_7_fu_5237_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_7_fu_5237_p2.read()[0].to_bool())? sub_ln214_29_fu_5263_p2.read(): zext_ln214_26_fu_5243_p1.read());
}

void resnet50_0::thread_select_ln214_2_fu_4127_p3() {
    select_ln214_2_fu_4127_p3 = (!icmp_ln214_fu_4069_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_fu_4069_p2.read()[0].to_bool())? sub_ln214_1_fu_4099_p2.read(): zext_ln214_fu_4075_p1.read());
}

void resnet50_0::thread_select_ln214_3_fu_4257_p3() {
    select_ln214_3_fu_4257_p3 = (!icmp_ln214_1_fu_4219_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_1_fu_4219_p2.read()[0].to_bool())? sub_ln214_4_fu_4239_p2.read(): sub_ln214_6_fu_4251_p2.read());
}

void resnet50_0::thread_select_ln214_4_fu_4265_p3() {
    select_ln214_4_fu_4265_p3 = (!icmp_ln214_1_fu_4219_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_1_fu_4219_p2.read()[0].to_bool())? tmp_538_fu_4229_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_5_fu_4273_p3() {
    select_ln214_5_fu_4273_p3 = (!icmp_ln214_1_fu_4219_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_1_fu_4219_p2.read()[0].to_bool())? sub_ln214_5_fu_4245_p2.read(): zext_ln214_4_fu_4225_p1.read());
}

void resnet50_0::thread_select_ln214_6_fu_4385_p3() {
    select_ln214_6_fu_4385_p3 = (!icmp_ln214_2_fu_4351_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_2_fu_4351_p2.read()[0].to_bool())? sub_ln214_8_fu_4367_p2.read(): sub_ln214_10_fu_4379_p2.read());
}

void resnet50_0::thread_select_ln214_7_fu_4393_p3() {
    select_ln214_7_fu_4393_p3 = (!icmp_ln214_2_fu_4351_p2.read()[0].is_01())? sc_lv<288>(): ((icmp_ln214_2_fu_4351_p2.read()[0].to_bool())? tmp_539_fu_4357_p4.read(): buf2_V_q0.read());
}

void resnet50_0::thread_select_ln214_8_fu_4401_p3() {
    select_ln214_8_fu_4401_p3 = (!icmp_ln214_2_fu_4351_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_2_fu_4351_p2.read()[0].to_bool())? sub_ln214_9_fu_4373_p2.read(): empty_48_fu_4339_p2.read());
}

void resnet50_0::thread_select_ln214_9_fu_4559_p3() {
    select_ln214_9_fu_4559_p3 = (!icmp_ln214_3_fu_4517_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_3_fu_4517_p2.read()[0].to_bool())? sub_ln214_12_fu_4541_p2.read(): sub_ln214_14_fu_4553_p2.read());
}

void resnet50_0::thread_select_ln214_fu_4111_p3() {
    select_ln214_fu_4111_p3 = (!icmp_ln214_fu_4069_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln214_fu_4069_p2.read()[0].to_bool())? sub_ln214_fu_4093_p2.read(): sub_ln214_2_fu_4105_p2.read());
}

void resnet50_0::thread_select_ln278_64_fu_2167_p3() {
    select_ln278_64_fu_2167_p3 = (!icmp_ln278_1_fu_2045_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_1_fu_2045_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_64_fu_2159_p3.read());
}

void resnet50_0::thread_select_ln278_65_fu_2447_p3() {
    select_ln278_65_fu_2447_p3 = (!icmp_ln278_2_fu_2325_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_2_fu_2325_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_65_fu_2439_p3.read());
}

void resnet50_0::thread_select_ln278_66_fu_2735_p3() {
    select_ln278_66_fu_2735_p3 = (!icmp_ln278_3_fu_2613_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_3_fu_2613_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_66_fu_2727_p3.read());
}

void resnet50_0::thread_select_ln278_67_fu_3020_p3() {
    select_ln278_67_fu_3020_p3 = (!icmp_ln278_4_fu_2898_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_4_fu_2898_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_67_fu_3012_p3.read());
}

void resnet50_0::thread_select_ln278_68_fu_3298_p3() {
    select_ln278_68_fu_3298_p3 = (!icmp_ln278_5_fu_3176_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_5_fu_3176_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_68_fu_3290_p3.read());
}

void resnet50_0::thread_select_ln278_69_fu_3500_p3() {
    select_ln278_69_fu_3500_p3 = (!icmp_ln278_6_fu_3378_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_6_fu_3378_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_69_fu_3492_p3.read());
}

void resnet50_0::thread_select_ln278_70_fu_3869_p3() {
    select_ln278_70_fu_3869_p3 = (!icmp_ln278_7_fu_3747_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_7_fu_3747_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_70_fu_3861_p3.read());
}

void resnet50_0::thread_select_ln278_fu_1880_p3() {
    select_ln278_fu_1880_p3 = (!icmp_ln278_fu_1758_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln278_fu_1758_p2.read()[0].to_bool())? ap_const_lv9_0: select_ln285_fu_1872_p3.read());
}

void resnet50_0::thread_select_ln282_64_fu_2187_p3() {
    select_ln282_64_fu_2187_p3 = (!and_ln282_64_fu_2181_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_64_fu_2181_p2.read()[0].to_bool())? trunc_ln296_64_fu_2033_p1.read(): select_ln278_64_fu_2167_p3.read());
}

void resnet50_0::thread_select_ln282_65_fu_2467_p3() {
    select_ln282_65_fu_2467_p3 = (!and_ln282_65_fu_2461_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_65_fu_2461_p2.read()[0].to_bool())? trunc_ln296_65_fu_2313_p1.read(): select_ln278_65_fu_2447_p3.read());
}

void resnet50_0::thread_select_ln282_66_fu_2755_p3() {
    select_ln282_66_fu_2755_p3 = (!and_ln282_66_fu_2749_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_66_fu_2749_p2.read()[0].to_bool())? trunc_ln296_66_fu_2601_p1.read(): select_ln278_66_fu_2735_p3.read());
}

void resnet50_0::thread_select_ln282_67_fu_3040_p3() {
    select_ln282_67_fu_3040_p3 = (!and_ln282_67_fu_3034_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_67_fu_3034_p2.read()[0].to_bool())? trunc_ln296_67_fu_2886_p1.read(): select_ln278_67_fu_3020_p3.read());
}

void resnet50_0::thread_select_ln282_68_fu_3318_p3() {
    select_ln282_68_fu_3318_p3 = (!and_ln282_68_fu_3312_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_68_fu_3312_p2.read()[0].to_bool())? trunc_ln296_68_fu_3164_p1.read(): select_ln278_68_fu_3298_p3.read());
}

void resnet50_0::thread_select_ln282_69_fu_3520_p3() {
    select_ln282_69_fu_3520_p3 = (!and_ln282_69_fu_3514_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_69_fu_3514_p2.read()[0].to_bool())? trunc_ln296_69_fu_3366_p1.read(): select_ln278_69_fu_3500_p3.read());
}

void resnet50_0::thread_select_ln282_70_fu_3889_p3() {
    select_ln282_70_fu_3889_p3 = (!and_ln282_70_fu_3883_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_70_fu_3883_p2.read()[0].to_bool())? trunc_ln296_70_fu_3735_p1.read(): select_ln278_70_fu_3869_p3.read());
}

void resnet50_0::thread_select_ln282_fu_1900_p3() {
    select_ln282_fu_1900_p3 = (!and_ln282_fu_1894_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln282_fu_1894_p2.read()[0].to_bool())? trunc_ln296_fu_1746_p1.read(): select_ln278_fu_1880_p3.read());
}

void resnet50_0::thread_select_ln284_64_fu_2201_p3() {
    select_ln284_64_fu_2201_p3 = (!or_ln284_64_fu_2195_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_64_fu_2195_p2.read()[0].to_bool())? select_ln282_64_fu_2187_p3.read(): select_ln295_64_fu_2101_p3.read());
}

void resnet50_0::thread_select_ln284_65_fu_2481_p3() {
    select_ln284_65_fu_2481_p3 = (!or_ln284_65_fu_2475_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_65_fu_2475_p2.read()[0].to_bool())? select_ln282_65_fu_2467_p3.read(): select_ln295_65_fu_2381_p3.read());
}

void resnet50_0::thread_select_ln284_66_fu_2769_p3() {
    select_ln284_66_fu_2769_p3 = (!or_ln284_66_fu_2763_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_66_fu_2763_p2.read()[0].to_bool())? select_ln282_66_fu_2755_p3.read(): select_ln295_66_fu_2669_p3.read());
}

void resnet50_0::thread_select_ln284_67_fu_3054_p3() {
    select_ln284_67_fu_3054_p3 = (!or_ln284_67_fu_3048_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_67_fu_3048_p2.read()[0].to_bool())? select_ln282_67_fu_3040_p3.read(): select_ln295_67_fu_2954_p3.read());
}

void resnet50_0::thread_select_ln284_68_fu_3332_p3() {
    select_ln284_68_fu_3332_p3 = (!or_ln284_68_fu_3326_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_68_fu_3326_p2.read()[0].to_bool())? select_ln282_68_fu_3318_p3.read(): select_ln295_68_fu_3232_p3.read());
}

void resnet50_0::thread_select_ln284_69_fu_3534_p3() {
    select_ln284_69_fu_3534_p3 = (!or_ln284_69_fu_3528_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_69_fu_3528_p2.read()[0].to_bool())? select_ln282_69_fu_3520_p3.read(): select_ln295_69_fu_3434_p3.read());
}

void resnet50_0::thread_select_ln284_70_fu_3903_p3() {
    select_ln284_70_fu_3903_p3 = (!or_ln284_70_fu_3897_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_70_fu_3897_p2.read()[0].to_bool())? select_ln282_70_fu_3889_p3.read(): select_ln295_70_fu_3803_p3.read());
}

void resnet50_0::thread_select_ln284_fu_1914_p3() {
    select_ln284_fu_1914_p3 = (!or_ln284_fu_1908_p2.read()[0].is_01())? sc_lv<9>(): ((or_ln284_fu_1908_p2.read()[0].to_bool())? select_ln282_fu_1900_p3.read(): select_ln295_fu_1814_p3.read());
}

void resnet50_0::thread_select_ln285_64_fu_2159_p3() {
    select_ln285_64_fu_2159_p3 = (!and_ln285_130_fu_2153_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_130_fu_2153_p2.read()[0].to_bool())? trunc_ln286_64_fu_2115_p1.read(): select_ln288_64_fu_2127_p3.read());
}

void resnet50_0::thread_select_ln285_65_fu_2439_p3() {
    select_ln285_65_fu_2439_p3 = (!and_ln285_132_fu_2433_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_132_fu_2433_p2.read()[0].to_bool())? trunc_ln286_65_fu_2395_p1.read(): select_ln288_65_fu_2407_p3.read());
}

void resnet50_0::thread_select_ln285_66_fu_2727_p3() {
    select_ln285_66_fu_2727_p3 = (!and_ln285_134_fu_2721_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_134_fu_2721_p2.read()[0].to_bool())? trunc_ln286_66_fu_2683_p1.read(): select_ln288_66_fu_2695_p3.read());
}

void resnet50_0::thread_select_ln285_67_fu_3012_p3() {
    select_ln285_67_fu_3012_p3 = (!and_ln285_136_fu_3006_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_136_fu_3006_p2.read()[0].to_bool())? trunc_ln286_67_fu_2968_p1.read(): select_ln288_67_fu_2980_p3.read());
}

void resnet50_0::thread_select_ln285_68_fu_3290_p3() {
    select_ln285_68_fu_3290_p3 = (!and_ln285_138_fu_3284_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_138_fu_3284_p2.read()[0].to_bool())? trunc_ln286_68_fu_3246_p1.read(): select_ln288_68_fu_3258_p3.read());
}

void resnet50_0::thread_select_ln285_69_fu_3492_p3() {
    select_ln285_69_fu_3492_p3 = (!and_ln285_140_fu_3486_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_140_fu_3486_p2.read()[0].to_bool())? trunc_ln286_69_fu_3448_p1.read(): select_ln288_69_fu_3460_p3.read());
}

void resnet50_0::thread_select_ln285_70_fu_3861_p3() {
    select_ln285_70_fu_3861_p3 = (!and_ln285_142_fu_3855_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_142_fu_3855_p2.read()[0].to_bool())? trunc_ln286_70_fu_3817_p1.read(): select_ln288_70_fu_3829_p3.read());
}

void resnet50_0::thread_select_ln285_fu_1872_p3() {
    select_ln285_fu_1872_p3 = (!and_ln285_128_fu_1866_p2.read()[0].is_01())? sc_lv<9>(): ((and_ln285_128_fu_1866_p2.read()[0].to_bool())? trunc_ln286_fu_1828_p1.read(): select_ln288_fu_1840_p3.read());
}

void resnet50_0::thread_select_ln288_64_fu_2127_p3() {
    select_ln288_64_fu_2127_p3 = (!tmp_524_fu_2119_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_524_fu_2119_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_65_fu_2407_p3() {
    select_ln288_65_fu_2407_p3 = (!tmp_526_fu_2399_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_526_fu_2399_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_66_fu_2695_p3() {
    select_ln288_66_fu_2695_p3 = (!tmp_528_fu_2687_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_528_fu_2687_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_67_fu_2980_p3() {
    select_ln288_67_fu_2980_p3 = (!tmp_530_fu_2972_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_530_fu_2972_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_68_fu_3258_p3() {
    select_ln288_68_fu_3258_p3 = (!tmp_532_fu_3250_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_532_fu_3250_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_69_fu_3460_p3() {
    select_ln288_69_fu_3460_p3 = (!tmp_534_fu_3452_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_534_fu_3452_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_70_fu_3829_p3() {
    select_ln288_70_fu_3829_p3 = (!tmp_536_fu_3821_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_536_fu_3821_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln288_fu_1840_p3() {
    select_ln288_fu_1840_p3 = (!tmp_522_fu_1832_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_522_fu_1832_p3.read()[0].to_bool())? ap_const_lv9_1FF: ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_64_fu_2101_p3() {
    select_ln295_64_fu_2101_p3 = (!icmp_ln295_1_fu_2089_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_1_fu_2089_p2.read()[0].to_bool())? shl_ln297_1_fu_2095_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_65_fu_2381_p3() {
    select_ln295_65_fu_2381_p3 = (!icmp_ln295_2_fu_2369_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_2_fu_2369_p2.read()[0].to_bool())? shl_ln297_2_fu_2375_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_66_fu_2669_p3() {
    select_ln295_66_fu_2669_p3 = (!icmp_ln295_3_fu_2657_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_3_fu_2657_p2.read()[0].to_bool())? shl_ln297_3_fu_2663_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_67_fu_2954_p3() {
    select_ln295_67_fu_2954_p3 = (!icmp_ln295_4_fu_2942_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_4_fu_2942_p2.read()[0].to_bool())? shl_ln297_4_fu_2948_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_68_fu_3232_p3() {
    select_ln295_68_fu_3232_p3 = (!icmp_ln295_5_fu_3220_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_5_fu_3220_p2.read()[0].to_bool())? shl_ln297_5_fu_3226_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_69_fu_3434_p3() {
    select_ln295_69_fu_3434_p3 = (!icmp_ln295_6_fu_3422_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_6_fu_3422_p2.read()[0].to_bool())? shl_ln297_6_fu_3428_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_70_fu_3803_p3() {
    select_ln295_70_fu_3803_p3 = (!icmp_ln295_7_fu_3791_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_7_fu_3791_p2.read()[0].to_bool())? shl_ln297_7_fu_3797_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln295_fu_1814_p3() {
    select_ln295_fu_1814_p3 = (!icmp_ln295_fu_1802_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln295_fu_1802_p2.read()[0].to_bool())? shl_ln297_fu_1808_p2.read(): ap_const_lv9_0);
}

void resnet50_0::thread_select_ln303_1_fu_2215_p3() {
    select_ln303_1_fu_2215_p3 = (!tmp_523_fu_2007_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_523_fu_2007_p3.read()[0].to_bool())? sub_ln461_1_fu_2209_p2.read(): select_ln284_64_fu_2201_p3.read());
}

void resnet50_0::thread_select_ln303_2_fu_2501_p3() {
    select_ln303_2_fu_2501_p3 = (!tmp_525_fu_2489_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_525_fu_2489_p3.read()[0].to_bool())? sub_ln461_2_fu_2496_p2.read(): select_ln284_65_reg_5701.read());
}

void resnet50_0::thread_select_ln303_3_fu_2783_p3() {
    select_ln303_3_fu_2783_p3 = (!tmp_527_fu_2575_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_527_fu_2575_p3.read()[0].to_bool())? sub_ln461_3_fu_2777_p2.read(): select_ln284_66_fu_2769_p3.read());
}

void resnet50_0::thread_select_ln303_4_fu_3068_p3() {
    select_ln303_4_fu_3068_p3 = (!tmp_529_fu_2860_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_529_fu_2860_p3.read()[0].to_bool())? sub_ln461_4_fu_3062_p2.read(): select_ln284_67_fu_3054_p3.read());
}

void resnet50_0::thread_select_ln303_5_fu_3554_p3() {
    select_ln303_5_fu_3554_p3 = (!tmp_531_fu_3542_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_531_fu_3542_p3.read()[0].to_bool())? sub_ln461_5_fu_3549_p2.read(): select_ln284_68_reg_5728.read());
}

void resnet50_0::thread_select_ln303_6_fu_3633_p3() {
    select_ln303_6_fu_3633_p3 = (!tmp_533_fu_3621_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_533_fu_3621_p3.read()[0].to_bool())? sub_ln461_6_fu_3628_p2.read(): select_ln284_69_reg_5739.read());
}

void resnet50_0::thread_select_ln303_7_fu_3917_p3() {
    select_ln303_7_fu_3917_p3 = (!tmp_535_fu_3709_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_535_fu_3709_p3.read()[0].to_bool())? sub_ln461_7_fu_3911_p2.read(): select_ln284_70_fu_3903_p3.read());
}

void resnet50_0::thread_select_ln303_fu_1928_p3() {
    select_ln303_fu_1928_p3 = (!tmp_521_fu_1720_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_521_fu_1720_p3.read()[0].to_bool())? sub_ln461_fu_1922_p2.read(): select_ln284_fu_1914_p3.read());
}

void resnet50_0::thread_select_ln396_1_fu_1596_p3() {
    select_ln396_1_fu_1596_p3 = (!and_ln399_fu_1570_p2.read()[0].is_01())? sc_lv<8>(): ((and_ln399_fu_1570_p2.read()[0].to_bool())? row_fu_1576_p2.read(): select_ln399_fu_1550_p3.read());
}

void resnet50_0::thread_select_ln396_2_fu_1661_p3() {
    select_ln396_2_fu_1661_p3 = (!icmp_ln396_fu_1544_p2.read()[0].is_01())? sc_lv<13>(): ((icmp_ln396_fu_1544_p2.read()[0].to_bool())? ap_const_lv13_1: add_ln396_1_fu_1655_p2.read());
}

void resnet50_0::thread_select_ln396_fu_1588_p3() {
    select_ln396_fu_1588_p3 = (!or_ln396_fu_1582_p2.read()[0].is_01())? sc_lv<5>(): ((or_ln396_fu_1582_p2.read()[0].to_bool())? ap_const_lv5_0: ap_phi_mux_col_0_phi_fu_810_p4.read());
}

void resnet50_0::thread_select_ln399_1_fu_1675_p3() {
    select_ln399_1_fu_1675_p3 = (!icmp_ln396_reg_5617.read()[0].is_01())? sc_lv<2>(): ((icmp_ln396_reg_5617.read()[0].to_bool())? ch_fu_1669_p2.read(): ap_phi_mux_ch_0_phi_fu_774_p4.read());
}

void resnet50_0::thread_select_ln399_2_fu_1706_p3() {
    select_ln399_2_fu_1706_p3 = (!icmp_ln396_reg_5617.read()[0].is_01())? sc_lv<8>(): ((icmp_ln396_reg_5617.read()[0].to_bool())? tmp_403_mid1_fu_1682_p5.read(): tmp_s_fu_1694_p5.read());
}

void resnet50_0::thread_select_ln399_fu_1550_p3() {
    select_ln399_fu_1550_p3 = (!icmp_ln396_fu_1544_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln396_fu_1544_p2.read()[0].to_bool())? ap_const_lv8_0: ap_phi_mux_row_0_phi_fu_798_p4.read());
}

void resnet50_0::thread_select_ln431_1_fu_4020_p3() {
    select_ln431_1_fu_4020_p3 = (!icmp_ln426_fu_4006_p2.read()[0].is_01())? sc_lv<15>(): ((icmp_ln426_fu_4006_p2.read()[0].to_bool())? s_fu_4000_p2.read(): ap_phi_mux_s_0_phi_fu_833_p4.read());
}

void resnet50_0::thread_select_ln431_fu_4012_p3() {
    select_ln431_fu_4012_p3 = (!icmp_ln426_fu_4006_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln426_fu_4006_p2.read()[0].to_bool())? ap_const_lv2_0: i_0_reg_840.read());
}

void resnet50_0::thread_sext_ln281_64_fu_2057_p1() {
    sext_ln281_64_fu_2057_p1 = esl_sext<24,9>(sub_ln281_64_fu_2051_p2.read());
}

void resnet50_0::thread_sext_ln281_65_fu_2337_p1() {
    sext_ln281_65_fu_2337_p1 = esl_sext<24,9>(sub_ln281_65_fu_2331_p2.read());
}

void resnet50_0::thread_sext_ln281_66_fu_2625_p1() {
    sext_ln281_66_fu_2625_p1 = esl_sext<24,9>(sub_ln281_66_fu_2619_p2.read());
}

void resnet50_0::thread_sext_ln281_67_fu_2910_p1() {
    sext_ln281_67_fu_2910_p1 = esl_sext<24,9>(sub_ln281_67_fu_2904_p2.read());
}

void resnet50_0::thread_sext_ln281_68_fu_3188_p1() {
    sext_ln281_68_fu_3188_p1 = esl_sext<24,9>(sub_ln281_68_fu_3182_p2.read());
}

void resnet50_0::thread_sext_ln281_69_fu_3390_p1() {
    sext_ln281_69_fu_3390_p1 = esl_sext<24,9>(sub_ln281_69_fu_3384_p2.read());
}

void resnet50_0::thread_sext_ln281_70_fu_3759_p1() {
    sext_ln281_70_fu_3759_p1 = esl_sext<24,9>(sub_ln281_70_fu_3753_p2.read());
}

void resnet50_0::thread_sext_ln281_fu_1770_p1() {
    sext_ln281_fu_1770_p1 = esl_sext<24,9>(sub_ln281_fu_1764_p2.read());
}

void resnet50_0::thread_shl_ln180_10_fu_3588_p2() {
    shl_ln180_10_fu_3588_p2 = (!zext_ln180_20_fu_3585_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_20_fu_3585_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_11_fu_3609_p2() {
    shl_ln180_11_fu_3609_p2 = (!zext_ln180_20_fu_3585_p1.read().is_01())? sc_lv<216>(): zext_ln180_21_fu_3605_p1.read() << (unsigned short)zext_ln180_20_fu_3585_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_12_fu_3668_p2() {
    shl_ln180_12_fu_3668_p2 = (!zext_ln180_23_fu_3665_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_23_fu_3665_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_13_fu_3690_p2() {
    shl_ln180_13_fu_3690_p2 = (!zext_ln180_23_fu_3665_p1.read().is_01())? sc_lv<216>(): zext_ln180_24_fu_3686_p1.read() << (unsigned short)zext_ln180_23_fu_3665_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_14_fu_3953_p2() {
    shl_ln180_14_fu_3953_p2 = (!zext_ln180_26_fu_3950_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_26_fu_3950_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_15_fu_3975_p2() {
    shl_ln180_15_fu_3975_p2 = (!zext_ln180_26_fu_3950_p1.read().is_01())? sc_lv<216>(): zext_ln180_27_fu_3971_p1.read() << (unsigned short)zext_ln180_26_fu_3950_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_1_fu_1988_p2() {
    shl_ln180_1_fu_1988_p2 = (!zext_ln180_5_fu_1962_p1.read().is_01())? sc_lv<216>(): zext_ln180_6_fu_1984_p1.read() << (unsigned short)zext_ln180_5_fu_1962_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_2_fu_2253_p2() {
    shl_ln180_2_fu_2253_p2 = (!zext_ln180_8_fu_2249_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_8_fu_2249_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_3_fu_2275_p2() {
    shl_ln180_3_fu_2275_p2 = (!zext_ln180_8_fu_2249_p1.read().is_01())? sc_lv<216>(): zext_ln180_9_fu_2271_p1.read() << (unsigned short)zext_ln180_8_fu_2249_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_4_fu_2535_p2() {
    shl_ln180_4_fu_2535_p2 = (!zext_ln180_11_fu_2532_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_11_fu_2532_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_5_fu_2556_p2() {
    shl_ln180_5_fu_2556_p2 = (!zext_ln180_11_fu_2532_p1.read().is_01())? sc_lv<216>(): zext_ln180_12_fu_2552_p1.read() << (unsigned short)zext_ln180_11_fu_2532_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_6_fu_2819_p2() {
    shl_ln180_6_fu_2819_p2 = (!zext_ln180_14_fu_2816_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_14_fu_2816_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_7_fu_2841_p2() {
    shl_ln180_7_fu_2841_p2 = (!zext_ln180_14_fu_2816_p1.read().is_01())? sc_lv<216>(): zext_ln180_15_fu_2837_p1.read() << (unsigned short)zext_ln180_14_fu_2816_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_8_fu_3104_p2() {
    shl_ln180_8_fu_3104_p2 = (!zext_ln180_17_fu_3101_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_17_fu_3101_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_9_fu_3126_p2() {
    shl_ln180_9_fu_3126_p2 = (!zext_ln180_17_fu_3101_p1.read().is_01())? sc_lv<216>(): zext_ln180_18_fu_3122_p1.read() << (unsigned short)zext_ln180_17_fu_3101_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln180_fu_1966_p2() {
    shl_ln180_fu_1966_p2 = (!zext_ln180_5_fu_1962_p1.read().is_01())? sc_lv<216>(): ap_const_lv216_lc_3 << (unsigned short)zext_ln180_5_fu_1962_p1.read().to_uint();
}

void resnet50_0::thread_shl_ln297_1_fu_2095_p2() {
    shl_ln297_1_fu_2095_p2 = (!sub_ln294_64_fu_2079_p2.read().is_01())? sc_lv<9>(): trunc_ln296_64_fu_2033_p1.read() << (unsigned short)sub_ln294_64_fu_2079_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_2_fu_2375_p2() {
    shl_ln297_2_fu_2375_p2 = (!sub_ln294_65_fu_2359_p2.read().is_01())? sc_lv<9>(): trunc_ln296_65_fu_2313_p1.read() << (unsigned short)sub_ln294_65_fu_2359_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_3_fu_2663_p2() {
    shl_ln297_3_fu_2663_p2 = (!sub_ln294_66_fu_2647_p2.read().is_01())? sc_lv<9>(): trunc_ln296_66_fu_2601_p1.read() << (unsigned short)sub_ln294_66_fu_2647_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_4_fu_2948_p2() {
    shl_ln297_4_fu_2948_p2 = (!sub_ln294_67_fu_2932_p2.read().is_01())? sc_lv<9>(): trunc_ln296_67_fu_2886_p1.read() << (unsigned short)sub_ln294_67_fu_2932_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_5_fu_3226_p2() {
    shl_ln297_5_fu_3226_p2 = (!sub_ln294_68_fu_3210_p2.read().is_01())? sc_lv<9>(): trunc_ln296_68_fu_3164_p1.read() << (unsigned short)sub_ln294_68_fu_3210_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_6_fu_3428_p2() {
    shl_ln297_6_fu_3428_p2 = (!sub_ln294_69_fu_3412_p2.read().is_01())? sc_lv<9>(): trunc_ln296_69_fu_3366_p1.read() << (unsigned short)sub_ln294_69_fu_3412_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_7_fu_3797_p2() {
    shl_ln297_7_fu_3797_p2 = (!sub_ln294_70_fu_3781_p2.read().is_01())? sc_lv<9>(): trunc_ln296_70_fu_3735_p1.read() << (unsigned short)sub_ln294_70_fu_3781_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln297_fu_1808_p2() {
    shl_ln297_fu_1808_p2 = (!sub_ln294_fu_1792_p2.read().is_01())? sc_lv<9>(): trunc_ln296_fu_1746_p1.read() << (unsigned short)sub_ln294_fu_1792_p2.read().to_uint();
}

void resnet50_0::thread_shl_ln2_fu_4046_p3() {
    shl_ln2_fu_4046_p3 = esl_concat<1,4>(trunc_ln214_reg_5770.read(), ap_const_lv4_0);
}

void resnet50_0::thread_startt_V_1_ack_in() {
    startt_V_1_ack_in = startt_V_1_state.read()[1];
}

void resnet50_0::thread_startt_V_1_ack_out() {
    startt_V_1_ack_out = startt_V_TREADY.read();
}

void resnet50_0::thread_startt_V_1_data_out() {
    startt_V_1_data_out = ap_const_lv8_1;
}

void resnet50_0::thread_startt_V_1_sel() {
    startt_V_1_sel = startt_V_1_sel_rd.read();
}

void resnet50_0::thread_startt_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, startt_V_1_ack_in.read())))) {
        startt_V_1_vld_in = ap_const_logic_1;
    } else {
        startt_V_1_vld_in = ap_const_logic_0;
    }
}

void resnet50_0::thread_startt_V_1_vld_out() {
    startt_V_1_vld_out = startt_V_1_state.read()[0];
}

void resnet50_0::thread_startt_V_TDATA() {
    startt_V_TDATA = startt_V_1_data_out.read();
}

void resnet50_0::thread_startt_V_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        startt_V_TDATA_blk_n = startt_V_1_state.read()[1];
    } else {
        startt_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void resnet50_0::thread_startt_V_TVALID() {
    startt_V_TVALID = startt_V_1_state.read()[0];
}

void resnet50_0::thread_stopt_V_1_ack_in() {
    stopt_V_1_ack_in = stopt_V_1_state.read()[1];
}

void resnet50_0::thread_stopt_V_1_ack_out() {
    stopt_V_1_ack_out = stopt_V_TREADY.read();
}

void resnet50_0::thread_stopt_V_1_data_out() {
    stopt_V_1_data_out = ap_const_lv8_1;
}

void resnet50_0::thread_stopt_V_1_sel() {
    stopt_V_1_sel = stopt_V_1_sel_rd.read();
}

void resnet50_0::thread_stopt_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
         esl_seteq<1,1,1>(stopt_V_1_ack_in.read(), ap_const_logic_1))) {
        stopt_V_1_vld_in = ap_const_logic_1;
    } else {
        stopt_V_1_vld_in = ap_const_logic_0;
    }
}

void resnet50_0::thread_stopt_V_1_vld_out() {
    stopt_V_1_vld_out = stopt_V_1_state.read()[0];
}

void resnet50_0::thread_stopt_V_TDATA() {
    stopt_V_TDATA = stopt_V_1_data_out.read();
}

void resnet50_0::thread_stopt_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        stopt_V_TDATA_blk_n = stopt_V_1_state.read()[1];
    } else {
        stopt_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void resnet50_0::thread_stopt_V_TVALID() {
    stopt_V_TVALID = stopt_V_1_state.read()[0];
}

void resnet50_0::thread_sub_ln180_fu_1628_p2() {
    sub_ln180_fu_1628_p2 = (!zext_ln180_fu_1612_p1.read().is_01() || !zext_ln180_1_fu_1624_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln180_fu_1612_p1.read()) - sc_biguint<14>(zext_ln180_1_fu_1624_p1.read()));
}

void resnet50_0::thread_sub_ln214_10_fu_4379_p2() {
    sub_ln214_10_fu_4379_p2 = (!empty_49_fu_4345_p2.read().is_01() || !empty_48_fu_4339_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_49_fu_4345_p2.read()) - sc_biguint<9>(empty_48_fu_4339_p2.read()));
}

void resnet50_0::thread_sub_ln214_11_fu_4409_p2() {
    sub_ln214_11_fu_4409_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_6_fu_4385_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_6_fu_4385_p3.read()));
}

void resnet50_0::thread_sub_ln214_12_fu_4541_p2() {
    sub_ln214_12_fu_4541_p2 = (!zext_ln214_10_fu_4523_p1.read().is_01() || !zext_ln214_11_fu_4527_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_10_fu_4523_p1.read()) - sc_biguint<9>(zext_ln214_11_fu_4527_p1.read()));
}

void resnet50_0::thread_sub_ln214_13_fu_4547_p2() {
    sub_ln214_13_fu_4547_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_10_fu_4523_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_10_fu_4523_p1.read()));
}

void resnet50_0::thread_sub_ln214_14_fu_4553_p2() {
    sub_ln214_14_fu_4553_p2 = (!zext_ln214_11_fu_4527_p1.read().is_01() || !zext_ln214_10_fu_4523_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_11_fu_4527_p1.read()) - sc_biguint<9>(zext_ln214_10_fu_4523_p1.read()));
}

void resnet50_0::thread_sub_ln214_15_fu_4583_p2() {
    sub_ln214_15_fu_4583_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_9_fu_4559_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_9_fu_4559_p3.read()));
}

void resnet50_0::thread_sub_ln214_16_fu_4687_p2() {
    sub_ln214_16_fu_4687_p2 = (!zext_ln214_14_fu_4673_p1.read().is_01() || !empty_54_fu_4657_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_14_fu_4673_p1.read()) - sc_biguint<9>(empty_54_fu_4657_p2.read()));
}

void resnet50_0::thread_sub_ln214_17_fu_4693_p2() {
    sub_ln214_17_fu_4693_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_14_fu_4673_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_14_fu_4673_p1.read()));
}

void resnet50_0::thread_sub_ln214_18_fu_4699_p2() {
    sub_ln214_18_fu_4699_p2 = (!empty_54_fu_4657_p2.read().is_01() || !zext_ln214_14_fu_4673_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_54_fu_4657_p2.read()) - sc_biguint<9>(zext_ln214_14_fu_4673_p1.read()));
}

void resnet50_0::thread_sub_ln214_19_fu_4729_p2() {
    sub_ln214_19_fu_4729_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_12_fu_4705_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_12_fu_4705_p3.read()));
}

void resnet50_0::thread_sub_ln214_1_fu_4099_p2() {
    sub_ln214_1_fu_4099_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_fu_4075_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_fu_4075_p1.read()));
}

void resnet50_0::thread_sub_ln214_20_fu_4815_p2() {
    sub_ln214_20_fu_4815_p2 = (!empty_55_fu_4787_p2.read().is_01() || !empty_56_fu_4793_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_55_fu_4787_p2.read()) - sc_biguint<9>(empty_56_fu_4793_p2.read()));
}

void resnet50_0::thread_sub_ln214_21_fu_4821_p2() {
    sub_ln214_21_fu_4821_p2 = (!ap_const_lv9_11F.is_01() || !empty_55_fu_4787_p2.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(empty_55_fu_4787_p2.read()));
}

void resnet50_0::thread_sub_ln214_22_fu_4827_p2() {
    sub_ln214_22_fu_4827_p2 = (!empty_56_fu_4793_p2.read().is_01() || !empty_55_fu_4787_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_56_fu_4793_p2.read()) - sc_biguint<9>(empty_55_fu_4787_p2.read()));
}

void resnet50_0::thread_sub_ln214_23_fu_4857_p2() {
    sub_ln214_23_fu_4857_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_15_fu_4833_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_15_fu_4833_p3.read()));
}

void resnet50_0::thread_sub_ln214_24_fu_4997_p2() {
    sub_ln214_24_fu_4997_p2 = (!zext_ln214_20_fu_4983_p1.read().is_01() || !empty_59_fu_4967_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_20_fu_4983_p1.read()) - sc_biguint<9>(empty_59_fu_4967_p2.read()));
}

void resnet50_0::thread_sub_ln214_25_fu_5003_p2() {
    sub_ln214_25_fu_5003_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_20_fu_4983_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_20_fu_4983_p1.read()));
}

void resnet50_0::thread_sub_ln214_26_fu_5009_p2() {
    sub_ln214_26_fu_5009_p2 = (!empty_59_fu_4967_p2.read().is_01() || !zext_ln214_20_fu_4983_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_59_fu_4967_p2.read()) - sc_biguint<9>(zext_ln214_20_fu_4983_p1.read()));
}

void resnet50_0::thread_sub_ln214_27_fu_5039_p2() {
    sub_ln214_27_fu_5039_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_18_fu_5015_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_18_fu_5015_p3.read()));
}

void resnet50_0::thread_sub_ln214_28_fu_5257_p2() {
    sub_ln214_28_fu_5257_p2 = (!zext_ln214_26_fu_5243_p1.read().is_01() || !empty_64_fu_5227_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_26_fu_5243_p1.read()) - sc_biguint<9>(empty_64_fu_5227_p2.read()));
}

void resnet50_0::thread_sub_ln214_29_fu_5263_p2() {
    sub_ln214_29_fu_5263_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_26_fu_5243_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_26_fu_5243_p1.read()));
}

void resnet50_0::thread_sub_ln214_2_fu_4105_p2() {
    sub_ln214_2_fu_4105_p2 = (!zext_ln214_1_fu_4079_p1.read().is_01() || !zext_ln214_fu_4075_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_1_fu_4079_p1.read()) - sc_biguint<9>(zext_ln214_fu_4075_p1.read()));
}

void resnet50_0::thread_sub_ln214_30_fu_5269_p2() {
    sub_ln214_30_fu_5269_p2 = (!empty_64_fu_5227_p2.read().is_01() || !zext_ln214_26_fu_5243_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_64_fu_5227_p2.read()) - sc_biguint<9>(zext_ln214_26_fu_5243_p1.read()));
}

void resnet50_0::thread_sub_ln214_31_fu_5299_p2() {
    sub_ln214_31_fu_5299_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_21_fu_5275_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_21_fu_5275_p3.read()));
}

void resnet50_0::thread_sub_ln214_3_fu_4135_p2() {
    sub_ln214_3_fu_4135_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_fu_4111_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_fu_4111_p3.read()));
}

void resnet50_0::thread_sub_ln214_4_fu_4239_p2() {
    sub_ln214_4_fu_4239_p2 = (!zext_ln214_4_fu_4225_p1.read().is_01() || !empty_47_fu_4209_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_4_fu_4225_p1.read()) - sc_biguint<9>(empty_47_fu_4209_p2.read()));
}

void resnet50_0::thread_sub_ln214_5_fu_4245_p2() {
    sub_ln214_5_fu_4245_p2 = (!ap_const_lv9_11F.is_01() || !zext_ln214_4_fu_4225_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(zext_ln214_4_fu_4225_p1.read()));
}

void resnet50_0::thread_sub_ln214_6_fu_4251_p2() {
    sub_ln214_6_fu_4251_p2 = (!empty_47_fu_4209_p2.read().is_01() || !zext_ln214_4_fu_4225_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_47_fu_4209_p2.read()) - sc_biguint<9>(zext_ln214_4_fu_4225_p1.read()));
}

void resnet50_0::thread_sub_ln214_7_fu_4281_p2() {
    sub_ln214_7_fu_4281_p2 = (!ap_const_lv9_11F.is_01() || !select_ln214_3_fu_4257_p3.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(select_ln214_3_fu_4257_p3.read()));
}

void resnet50_0::thread_sub_ln214_8_fu_4367_p2() {
    sub_ln214_8_fu_4367_p2 = (!empty_48_fu_4339_p2.read().is_01() || !empty_49_fu_4345_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(empty_48_fu_4339_p2.read()) - sc_biguint<9>(empty_49_fu_4345_p2.read()));
}

void resnet50_0::thread_sub_ln214_9_fu_4373_p2() {
    sub_ln214_9_fu_4373_p2 = (!ap_const_lv9_11F.is_01() || !empty_48_fu_4339_p2.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_11F) - sc_biguint<9>(empty_48_fu_4339_p2.read()));
}

void resnet50_0::thread_sub_ln214_fu_4093_p2() {
    sub_ln214_fu_4093_p2 = (!zext_ln214_fu_4075_p1.read().is_01() || !zext_ln214_1_fu_4079_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln214_fu_4075_p1.read()) - sc_biguint<9>(zext_ln214_1_fu_4079_p1.read()));
}

void resnet50_0::thread_sub_ln281_64_fu_2051_p2() {
    sub_ln281_64_fu_2051_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_64_fu_2025_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_64_fu_2025_p1.read()));
}

void resnet50_0::thread_sub_ln281_65_fu_2331_p2() {
    sub_ln281_65_fu_2331_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_65_fu_2305_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_65_fu_2305_p1.read()));
}

void resnet50_0::thread_sub_ln281_66_fu_2619_p2() {
    sub_ln281_66_fu_2619_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_66_fu_2593_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_66_fu_2593_p1.read()));
}

void resnet50_0::thread_sub_ln281_67_fu_2904_p2() {
    sub_ln281_67_fu_2904_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_67_fu_2878_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_67_fu_2878_p1.read()));
}

void resnet50_0::thread_sub_ln281_68_fu_3182_p2() {
    sub_ln281_68_fu_3182_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_68_fu_3156_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_68_fu_3156_p1.read()));
}

void resnet50_0::thread_sub_ln281_69_fu_3384_p2() {
    sub_ln281_69_fu_3384_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_69_fu_3358_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_69_fu_3358_p1.read()));
}

void resnet50_0::thread_sub_ln281_70_fu_3753_p2() {
    sub_ln281_70_fu_3753_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_70_fu_3727_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_70_fu_3727_p1.read()));
}

void resnet50_0::thread_sub_ln281_fu_1764_p2() {
    sub_ln281_fu_1764_p2 = (!ap_const_lv9_96.is_01() || !zext_ln266_fu_1738_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_96) - sc_biguint<9>(zext_ln266_fu_1738_p1.read()));
}

void resnet50_0::thread_sub_ln294_64_fu_2079_p2() {
    sub_ln294_64_fu_2079_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_64_fu_2051_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_64_fu_2051_p2.read()));
}

void resnet50_0::thread_sub_ln294_65_fu_2359_p2() {
    sub_ln294_65_fu_2359_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_65_fu_2331_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_65_fu_2331_p2.read()));
}

void resnet50_0::thread_sub_ln294_66_fu_2647_p2() {
    sub_ln294_66_fu_2647_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_66_fu_2619_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_66_fu_2619_p2.read()));
}

void resnet50_0::thread_sub_ln294_67_fu_2932_p2() {
    sub_ln294_67_fu_2932_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_67_fu_2904_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_67_fu_2904_p2.read()));
}

void resnet50_0::thread_sub_ln294_68_fu_3210_p2() {
    sub_ln294_68_fu_3210_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_68_fu_3182_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_68_fu_3182_p2.read()));
}

void resnet50_0::thread_sub_ln294_69_fu_3412_p2() {
    sub_ln294_69_fu_3412_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_69_fu_3384_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_69_fu_3384_p2.read()));
}

void resnet50_0::thread_sub_ln294_70_fu_3781_p2() {
    sub_ln294_70_fu_3781_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_70_fu_3753_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_70_fu_3753_p2.read()));
}

void resnet50_0::thread_sub_ln294_fu_1792_p2() {
    sub_ln294_fu_1792_p2 = (!ap_const_lv9_0.is_01() || !sub_ln281_fu_1764_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_bigint<9>(sub_ln281_fu_1764_p2.read()));
}

void resnet50_0::thread_sub_ln461_1_fu_2209_p2() {
    sub_ln461_1_fu_2209_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_64_fu_2201_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_64_fu_2201_p3.read()));
}

void resnet50_0::thread_sub_ln461_2_fu_2496_p2() {
    sub_ln461_2_fu_2496_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_65_reg_5701.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_65_reg_5701.read()));
}

void resnet50_0::thread_sub_ln461_3_fu_2777_p2() {
    sub_ln461_3_fu_2777_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_66_fu_2769_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_66_fu_2769_p3.read()));
}

void resnet50_0::thread_sub_ln461_4_fu_3062_p2() {
    sub_ln461_4_fu_3062_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_67_fu_3054_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_67_fu_3054_p3.read()));
}

void resnet50_0::thread_sub_ln461_5_fu_3549_p2() {
    sub_ln461_5_fu_3549_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_68_reg_5728.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_68_reg_5728.read()));
}

void resnet50_0::thread_sub_ln461_6_fu_3628_p2() {
    sub_ln461_6_fu_3628_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_69_reg_5739.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_69_reg_5739.read()));
}

void resnet50_0::thread_sub_ln461_7_fu_3911_p2() {
    sub_ln461_7_fu_3911_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_70_fu_3903_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_70_fu_3903_p3.read()));
}

void resnet50_0::thread_sub_ln461_fu_1922_p2() {
    sub_ln461_fu_1922_p2 = (!ap_const_lv9_0.is_01() || !select_ln284_fu_1914_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(select_ln284_fu_1914_p3.read()));
}

void resnet50_0::thread_sw0out_V_1_ack_in() {
    sw0out_V_1_ack_in = sw0out_V_1_state.read()[1];
}

void resnet50_0::thread_sw0out_V_1_ack_out() {
    sw0out_V_1_ack_out = sw0out_V_TREADY.read();
}

void resnet50_0::thread_sw0out_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_sel.read())) {
        sw0out_V_1_data_out = sw0out_V_1_payload_B.read();
    } else {
        sw0out_V_1_data_out = sw0out_V_1_payload_A.read();
    }
}

void resnet50_0::thread_sw0out_V_1_load_A() {
    sw0out_V_1_load_A = (sw0out_V_1_state_cmp_full.read() & ~sw0out_V_1_sel_wr.read());
}

void resnet50_0::thread_sw0out_V_1_load_B() {
    sw0out_V_1_load_B = (sw0out_V_1_sel_wr.read() & sw0out_V_1_state_cmp_full.read());
}

void resnet50_0::thread_sw0out_V_1_sel() {
    sw0out_V_1_sel = sw0out_V_1_sel_rd.read();
}

void resnet50_0::thread_sw0out_V_1_state_cmp_full() {
    sw0out_V_1_state_cmp_full =  (sc_logic) ((!sw0out_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(sw0out_V_1_state.read() != ap_const_lv2_1))[0];
}

void resnet50_0::thread_sw0out_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        sw0out_V_1_vld_in = ap_const_logic_1;
    } else {
        sw0out_V_1_vld_in = ap_const_logic_0;
    }
}

void resnet50_0::thread_sw0out_V_1_vld_out() {
    sw0out_V_1_vld_out = sw0out_V_1_state.read()[0];
}

void resnet50_0::thread_sw0out_V_TDATA() {
    sw0out_V_TDATA = sw0out_V_1_data_out.read();
}

void resnet50_0::thread_sw0out_V_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756_pp1_iter1_reg.read())))) {
        sw0out_V_TDATA_blk_n = sw0out_V_1_state.read()[1];
    } else {
        sw0out_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void resnet50_0::thread_sw0out_V_TVALID() {
    sw0out_V_TVALID = sw0out_V_1_state.read()[0];
}

void resnet50_0::thread_tmp_359_fu_1750_p3() {
    tmp_359_fu_1750_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_fu_1742_p1.read());
}

void resnet50_0::thread_tmp_360_fu_1950_p5() {
    tmp_360_fu_1950_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_fu_1946_p1.read(), select_ln303_fu_1928_p3.read(), ap_const_lv32_0, ap_const_lv32_8);
}

void resnet50_0::thread_tmp_361_fu_2037_p3() {
    tmp_361_fu_2037_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_1_fu_2029_p1.read());
}

void resnet50_0::thread_tmp_362_fu_2237_p5() {
    tmp_362_fu_2237_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_1_fu_2233_p1.read(), select_ln303_1_fu_2215_p3.read(), ap_const_lv32_9, ap_const_lv32_11);
}

void resnet50_0::thread_tmp_363_fu_2317_p3() {
    tmp_363_fu_2317_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_2_fu_2309_p1.read());
}

void resnet50_0::thread_tmp_364_fu_2520_p5() {
    tmp_364_fu_2520_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_2_fu_2516_p1.read(), select_ln303_2_fu_2501_p3.read(), ap_const_lv32_12, ap_const_lv32_1A);
}

void resnet50_0::thread_tmp_365_fu_2605_p3() {
    tmp_365_fu_2605_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_3_fu_2597_p1.read());
}

void resnet50_0::thread_tmp_366_fu_2804_p5() {
    tmp_366_fu_2804_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_3_fu_2800_p1.read(), select_ln303_3_fu_2783_p3.read(), ap_const_lv32_1B, ap_const_lv32_23);
}

void resnet50_0::thread_tmp_367_fu_2890_p3() {
    tmp_367_fu_2890_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_4_fu_2882_p1.read());
}

void resnet50_0::thread_tmp_368_fu_3089_p5() {
    tmp_368_fu_3089_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_4_fu_3085_p1.read(), select_ln303_4_fu_3068_p3.read(), ap_const_lv32_24, ap_const_lv32_2C);
}

void resnet50_0::thread_tmp_369_fu_5455_p17() {
    tmp_369_fu_5455_p17 = esl_concat<120,8>(esl_concat<112,8>(esl_concat<104,8>(esl_concat<96,8>(esl_concat<88,8>(esl_concat<80,8>(esl_concat<72,8>(esl_concat<64,8>(esl_concat<56,8>(esl_concat<48,8>(esl_concat<40,8>(esl_concat<32,8>(esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(trunc_ln214_16_fu_5451_p1.read(), trunc_ln214_15_fu_5409_p1.read()), trunc_ln214_14_fu_5367_p1.read()), trunc_ln214_13_fu_5331_p1.read()), trunc_ln214_12_fu_5191_p1.read()), trunc_ln214_11_fu_5149_p1.read()), trunc_ln214_10_fu_5107_p1.read()), trunc_ln214_9_fu_5071_p1.read()), trunc_ln214_8_fu_4931_p1.read()), trunc_ln214_7_fu_4889_p1.read()), trunc_ln214_6_fu_4761_p1.read()), trunc_ln214_5_fu_4615_p1.read()), trunc_ln214_4_fu_4483_p1.read()), trunc_ln214_3_fu_4441_p1.read()), trunc_ln214_2_fu_4313_p1.read()), trunc_ln214_1_fu_4167_p1.read());
}

void resnet50_0::thread_tmp_370_fu_3168_p3() {
    tmp_370_fu_3168_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_5_fu_3160_p1.read());
}

void resnet50_0::thread_tmp_371_fu_3573_p5() {
    tmp_371_fu_3573_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_5_fu_3569_p1.read(), select_ln303_5_fu_3554_p3.read(), ap_const_lv32_2D, ap_const_lv32_35);
}

void resnet50_0::thread_tmp_372_fu_3370_p3() {
    tmp_372_fu_3370_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_6_fu_3362_p1.read());
}

void resnet50_0::thread_tmp_373_fu_3653_p5() {
    tmp_373_fu_3653_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_6_fu_3649_p1.read(), select_ln303_6_fu_3633_p3.read(), ap_const_lv32_36, ap_const_lv32_3E);
}

void resnet50_0::thread_tmp_374_fu_3739_p3() {
    tmp_374_fu_3739_p3 = esl_concat<1,23>(ap_const_lv1_1, trunc_ln270_7_fu_3731_p1.read());
}

void resnet50_0::thread_tmp_375_fu_3938_p5() {
    tmp_375_fu_3938_p5 = esl_partset<72,72,9,32,32>(trunc_ln180_7_fu_3934_p1.read(), select_ln303_7_fu_3917_p3.read(), ap_const_lv32_3F, ap_const_lv32_47);
}

void resnet50_0::thread_tmp_376_fu_4053_p5() {
    tmp_376_fu_4053_p5 = esl_concat<4,4>(esl_concat<3,1>(esl_concat<1,2>(trunc_ln214_reg_5770.read(), ap_const_lv2_0), trunc_ln214_reg_5770.read()), ap_const_lv4_0);
}

void resnet50_0::thread_tmp_377_fu_4183_p4() {
    tmp_377_fu_4183_p4 = or_ln214_fu_4171_p2.read().range(4, 2);
}

void resnet50_0::thread_tmp_378_fu_4193_p3() {
    tmp_378_fu_4193_p3 = esl_concat<3,5>(tmp_377_fu_4183_p4.read(), empty_46_fu_4177_p2.read());
}

void resnet50_0::thread_tmp_379_fu_4493_p4() {
    tmp_379_fu_4493_p4 = or_ln214_3_fu_4487_p2.read().range(4, 2);
}

void resnet50_0::thread_tmp_380_fu_4503_p3() {
    tmp_380_fu_4503_p3 = esl_concat<3,5>(tmp_379_fu_4493_p4.read(), or_ln214_3_fu_4487_p2.read());
}

void resnet50_0::thread_tmp_381_fu_4631_p4() {
    tmp_381_fu_4631_p4 = or_ln214_4_fu_4619_p2.read().range(4, 2);
}

void resnet50_0::thread_tmp_382_fu_4641_p3() {
    tmp_382_fu_4641_p3 = esl_concat<3,5>(tmp_381_fu_4631_p4.read(), empty_52_fu_4625_p2.read());
}

void resnet50_0::thread_tmp_383_fu_4941_p4() {
    tmp_383_fu_4941_p4 = or_ln214_7_fu_4935_p2.read().range(4, 2);
}

void resnet50_0::thread_tmp_384_fu_4951_p3() {
    tmp_384_fu_4951_p3 = esl_concat<3,5>(tmp_383_fu_4941_p4.read(), or_ln214_7_fu_4935_p2.read());
}

void resnet50_0::thread_tmp_385_fu_5201_p4() {
    tmp_385_fu_5201_p4 = or_ln214_10_fu_5195_p2.read().range(4, 2);
}

void resnet50_0::thread_tmp_386_fu_5211_p3() {
    tmp_386_fu_5211_p3 = esl_concat<3,5>(tmp_385_fu_5201_p4.read(), or_ln214_10_fu_5195_p2.read());
}

void resnet50_0::thread_tmp_403_mid1_fu_1682_p5() {
    tmp_403_mid1_fu_1682_p5 = esl_concat<5,3>(esl_concat<3,2>(esl_concat<2,1>(ch_fu_1669_p2.read(), ap_const_lv1_0), ch_fu_1669_p2.read()), ap_const_lv3_0);
}

void resnet50_0::thread_tmp_519_fu_1604_p3() {
    tmp_519_fu_1604_p3 = esl_concat<8,5>(select_ln396_1_fu_1596_p3.read(), ap_const_lv5_0);
}

void resnet50_0::thread_tmp_520_fu_1616_p3() {
    tmp_520_fu_1616_p3 = esl_concat<8,2>(select_ln396_1_fu_1596_p3.read(), ap_const_lv2_0);
}

void resnet50_0::thread_tmp_521_fu_1720_p3() {
    tmp_521_fu_1720_p3 = bitcast_ln705_fu_1713_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_522_fu_1832_p3() {
    tmp_522_fu_1832_p3 = bitcast_ln705_fu_1713_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_523_fu_2007_p3() {
    tmp_523_fu_2007_p3 = bitcast_ln705_1_fu_2000_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_524_fu_2119_p3() {
    tmp_524_fu_2119_p3 = bitcast_ln705_1_fu_2000_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_525_fu_2489_p3() {
    tmp_525_fu_2489_p3 = bitcast_ln705_2_reg_5696.read().range(31, 31);
}

void resnet50_0::thread_tmp_526_fu_2399_p3() {
    tmp_526_fu_2399_p3 = bitcast_ln705_2_fu_2287_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_527_fu_2575_p3() {
    tmp_527_fu_2575_p3 = bitcast_ln705_3_fu_2568_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_528_fu_2687_p3() {
    tmp_528_fu_2687_p3 = bitcast_ln705_3_fu_2568_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_529_fu_2860_p3() {
    tmp_529_fu_2860_p3 = bitcast_ln705_4_fu_2853_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_530_fu_2972_p3() {
    tmp_530_fu_2972_p3 = bitcast_ln705_4_fu_2853_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_531_fu_3542_p3() {
    tmp_531_fu_3542_p3 = bitcast_ln705_5_reg_5723.read().range(31, 31);
}

void resnet50_0::thread_tmp_532_fu_3250_p3() {
    tmp_532_fu_3250_p3 = bitcast_ln705_5_fu_3138_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_533_fu_3621_p3() {
    tmp_533_fu_3621_p3 = bitcast_ln705_6_reg_5734.read().range(31, 31);
}

void resnet50_0::thread_tmp_534_fu_3452_p3() {
    tmp_534_fu_3452_p3 = bitcast_ln705_6_fu_3340_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_535_fu_3709_p3() {
    tmp_535_fu_3709_p3 = bitcast_ln705_7_fu_3702_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_536_fu_3821_p3() {
    tmp_536_fu_3821_p3 = bitcast_ln705_7_fu_3702_p1.read().range(31, 31);
}

void resnet50_0::thread_tmp_537_fu_4083_p4() {
    tmp_537_fu_4083_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_538_fu_4229_p4() {
    tmp_538_fu_4229_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_539_fu_4357_p4() {
    tmp_539_fu_4357_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_540_fu_4531_p4() {
    tmp_540_fu_4531_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_541_fu_4677_p4() {
    tmp_541_fu_4677_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_542_fu_4805_p4() {
    tmp_542_fu_4805_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_543_fu_4987_p4() {
    tmp_543_fu_4987_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_544_fu_5247_p4() {
    tmp_544_fu_5247_p4 = buf2_V_q0.read().range(0, 287);
}

void resnet50_0::thread_tmp_s_fu_1694_p5() {
    tmp_s_fu_1694_p5 = esl_concat<5,3>(esl_concat<3,2>(esl_concat<2,1>(ap_phi_mux_ch_0_phi_fu_774_p4.read(), ap_const_lv1_0), ap_phi_mux_ch_0_phi_fu_774_p4.read()), ap_const_lv3_0);
}

void resnet50_0::thread_trunc_ln180_1_fu_2233_p1() {
    trunc_ln180_1_fu_2233_p1 = lshr_ln180_1_fu_2227_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_2_fu_2516_p1() {
    trunc_ln180_2_fu_2516_p1 = lshr_ln180_2_fu_2511_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_3_fu_2800_p1() {
    trunc_ln180_3_fu_2800_p1 = lshr_ln180_3_fu_2794_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_4_fu_3085_p1() {
    trunc_ln180_4_fu_3085_p1 = lshr_ln180_4_fu_3079_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_5_fu_3569_p1() {
    trunc_ln180_5_fu_3569_p1 = lshr_ln180_5_fu_3564_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_6_fu_3649_p1() {
    trunc_ln180_6_fu_3649_p1 = lshr_ln180_6_fu_3643_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_7_fu_3934_p1() {
    trunc_ln180_7_fu_3934_p1 = lshr_ln180_7_fu_3928_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln180_fu_1946_p1() {
    trunc_ln180_fu_1946_p1 = lshr_ln180_fu_1940_p2.read().range(72-1, 0);
}

void resnet50_0::thread_trunc_ln214_10_fu_5107_p1() {
    trunc_ln214_10_fu_5107_p1 = lshr_ln214_16_fu_5101_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_11_fu_5149_p1() {
    trunc_ln214_11_fu_5149_p1 = lshr_ln214_17_fu_5143_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_12_fu_5191_p1() {
    trunc_ln214_12_fu_5191_p1 = lshr_ln214_18_fu_5185_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_13_fu_5331_p1() {
    trunc_ln214_13_fu_5331_p1 = and_ln214_7_fu_5325_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_14_fu_5367_p1() {
    trunc_ln214_14_fu_5367_p1 = lshr_ln214_21_fu_5361_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_15_fu_5409_p1() {
    trunc_ln214_15_fu_5409_p1 = lshr_ln214_22_fu_5403_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_16_fu_5451_p1() {
    trunc_ln214_16_fu_5451_p1 = lshr_ln214_23_fu_5445_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_1_fu_4167_p1() {
    trunc_ln214_1_fu_4167_p1 = and_ln214_fu_4161_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_2_fu_4313_p1() {
    trunc_ln214_2_fu_4313_p1 = and_ln214_1_fu_4307_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_3_fu_4441_p1() {
    trunc_ln214_3_fu_4441_p1 = and_ln214_2_fu_4435_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_4_fu_4483_p1() {
    trunc_ln214_4_fu_4483_p1 = lshr_ln214_6_fu_4477_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_5_fu_4615_p1() {
    trunc_ln214_5_fu_4615_p1 = and_ln214_3_fu_4609_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_6_fu_4761_p1() {
    trunc_ln214_6_fu_4761_p1 = and_ln214_4_fu_4755_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_7_fu_4889_p1() {
    trunc_ln214_7_fu_4889_p1 = and_ln214_5_fu_4883_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_8_fu_4931_p1() {
    trunc_ln214_8_fu_4931_p1 = lshr_ln214_13_fu_4925_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_9_fu_5071_p1() {
    trunc_ln214_9_fu_5071_p1 = and_ln214_6_fu_5065_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln214_fu_4033_p1() {
    trunc_ln214_fu_4033_p1 = select_ln431_fu_4012_p3.read().range(1-1, 0);
}

void resnet50_0::thread_trunc_ln263_64_fu_2003_p1() {
    trunc_ln263_64_fu_2003_p1 = bitcast_ln705_1_fu_2000_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_65_fu_2291_p1() {
    trunc_ln263_65_fu_2291_p1 = bitcast_ln705_2_fu_2287_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_66_fu_2571_p1() {
    trunc_ln263_66_fu_2571_p1 = bitcast_ln705_3_fu_2568_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_67_fu_2856_p1() {
    trunc_ln263_67_fu_2856_p1 = bitcast_ln705_4_fu_2853_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_68_fu_3142_p1() {
    trunc_ln263_68_fu_3142_p1 = bitcast_ln705_5_fu_3138_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_69_fu_3344_p1() {
    trunc_ln263_69_fu_3344_p1 = bitcast_ln705_6_fu_3340_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_70_fu_3705_p1() {
    trunc_ln263_70_fu_3705_p1 = bitcast_ln705_7_fu_3702_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln263_fu_1716_p1() {
    trunc_ln263_fu_1716_p1 = bitcast_ln705_fu_1713_p1.read().range(31-1, 0);
}

void resnet50_0::thread_trunc_ln270_1_fu_2029_p1() {
    trunc_ln270_1_fu_2029_p1 = bitcast_ln705_1_fu_2000_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_2_fu_2309_p1() {
    trunc_ln270_2_fu_2309_p1 = bitcast_ln705_2_fu_2287_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_3_fu_2597_p1() {
    trunc_ln270_3_fu_2597_p1 = bitcast_ln705_3_fu_2568_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_4_fu_2882_p1() {
    trunc_ln270_4_fu_2882_p1 = bitcast_ln705_4_fu_2853_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_5_fu_3160_p1() {
    trunc_ln270_5_fu_3160_p1 = bitcast_ln705_5_fu_3138_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_6_fu_3362_p1() {
    trunc_ln270_6_fu_3362_p1 = bitcast_ln705_6_fu_3340_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_7_fu_3731_p1() {
    trunc_ln270_7_fu_3731_p1 = bitcast_ln705_7_fu_3702_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln270_fu_1742_p1() {
    trunc_ln270_fu_1742_p1 = bitcast_ln705_fu_1713_p1.read().range(23-1, 0);
}

void resnet50_0::thread_trunc_ln286_64_fu_2115_p1() {
    trunc_ln286_64_fu_2115_p1 = lshr_ln286_64_fu_2109_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_65_fu_2395_p1() {
    trunc_ln286_65_fu_2395_p1 = lshr_ln286_65_fu_2389_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_66_fu_2683_p1() {
    trunc_ln286_66_fu_2683_p1 = lshr_ln286_66_fu_2677_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_67_fu_2968_p1() {
    trunc_ln286_67_fu_2968_p1 = lshr_ln286_67_fu_2962_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_68_fu_3246_p1() {
    trunc_ln286_68_fu_3246_p1 = lshr_ln286_68_fu_3240_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_69_fu_3448_p1() {
    trunc_ln286_69_fu_3448_p1 = lshr_ln286_69_fu_3442_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_70_fu_3817_p1() {
    trunc_ln286_70_fu_3817_p1 = lshr_ln286_70_fu_3811_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln286_fu_1828_p1() {
    trunc_ln286_fu_1828_p1 = lshr_ln286_fu_1822_p2.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln294_64_fu_2085_p1() {
    trunc_ln294_64_fu_2085_p1 = sub_ln294_64_fu_2079_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_65_fu_2365_p1() {
    trunc_ln294_65_fu_2365_p1 = sub_ln294_65_fu_2359_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_66_fu_2653_p1() {
    trunc_ln294_66_fu_2653_p1 = sub_ln294_66_fu_2647_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_67_fu_2938_p1() {
    trunc_ln294_67_fu_2938_p1 = sub_ln294_67_fu_2932_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_68_fu_3216_p1() {
    trunc_ln294_68_fu_3216_p1 = sub_ln294_68_fu_3210_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_69_fu_3418_p1() {
    trunc_ln294_69_fu_3418_p1 = sub_ln294_69_fu_3412_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_70_fu_3787_p1() {
    trunc_ln294_70_fu_3787_p1 = sub_ln294_70_fu_3781_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln294_fu_1798_p1() {
    trunc_ln294_fu_1798_p1 = sub_ln294_fu_1792_p2.read().range(8-1, 0);
}

void resnet50_0::thread_trunc_ln296_64_fu_2033_p1() {
    trunc_ln296_64_fu_2033_p1 = bitcast_ln705_1_fu_2000_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_65_fu_2313_p1() {
    trunc_ln296_65_fu_2313_p1 = bitcast_ln705_2_fu_2287_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_66_fu_2601_p1() {
    trunc_ln296_66_fu_2601_p1 = bitcast_ln705_3_fu_2568_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_67_fu_2886_p1() {
    trunc_ln296_67_fu_2886_p1 = bitcast_ln705_4_fu_2853_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_68_fu_3164_p1() {
    trunc_ln296_68_fu_3164_p1 = bitcast_ln705_5_fu_3138_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_69_fu_3366_p1() {
    trunc_ln296_69_fu_3366_p1 = bitcast_ln705_6_fu_3340_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_70_fu_3735_p1() {
    trunc_ln296_70_fu_3735_p1 = bitcast_ln705_7_fu_3702_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln296_fu_1746_p1() {
    trunc_ln296_fu_1746_p1 = bitcast_ln705_fu_1713_p1.read().range(9-1, 0);
}

void resnet50_0::thread_trunc_ln681_fu_1436_p1() {
    trunc_ln681_fu_1436_p1 = input_V_0_data_out.read().range(32-1, 0);
}

void resnet50_0::thread_xor_ln180_1_fu_2259_p2() {
    xor_ln180_1_fu_2259_p2 = (shl_ln180_2_fu_2253_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_2_fu_2541_p2() {
    xor_ln180_2_fu_2541_p2 = (shl_ln180_4_fu_2535_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_3_fu_2825_p2() {
    xor_ln180_3_fu_2825_p2 = (shl_ln180_6_fu_2819_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_4_fu_3110_p2() {
    xor_ln180_4_fu_3110_p2 = (shl_ln180_8_fu_3104_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_5_fu_3594_p2() {
    xor_ln180_5_fu_3594_p2 = (shl_ln180_10_fu_3588_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_6_fu_3674_p2() {
    xor_ln180_6_fu_3674_p2 = (shl_ln180_12_fu_3668_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_7_fu_3959_p2() {
    xor_ln180_7_fu_3959_p2 = (shl_ln180_14_fu_3953_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln180_fu_1972_p2() {
    xor_ln180_fu_1972_p2 = (shl_ln180_fu_1966_p2.read() ^ ap_const_lv216_lc_4);
}

void resnet50_0::thread_xor_ln278_64_fu_2175_p2() {
    xor_ln278_64_fu_2175_p2 = (icmp_ln278_1_fu_2045_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_65_fu_2455_p2() {
    xor_ln278_65_fu_2455_p2 = (icmp_ln278_2_fu_2325_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_66_fu_2743_p2() {
    xor_ln278_66_fu_2743_p2 = (icmp_ln278_3_fu_2613_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_67_fu_3028_p2() {
    xor_ln278_67_fu_3028_p2 = (icmp_ln278_4_fu_2898_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_68_fu_3306_p2() {
    xor_ln278_68_fu_3306_p2 = (icmp_ln278_5_fu_3176_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_69_fu_3508_p2() {
    xor_ln278_69_fu_3508_p2 = (icmp_ln278_6_fu_3378_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_70_fu_3877_p2() {
    xor_ln278_70_fu_3877_p2 = (icmp_ln278_7_fu_3747_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln278_fu_1888_p2() {
    xor_ln278_fu_1888_p2 = (icmp_ln278_fu_1758_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_64_fu_2141_p2() {
    xor_ln282_64_fu_2141_p2 = (or_ln282_64_fu_2135_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_65_fu_2421_p2() {
    xor_ln282_65_fu_2421_p2 = (or_ln282_65_fu_2415_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_66_fu_2709_p2() {
    xor_ln282_66_fu_2709_p2 = (or_ln282_66_fu_2703_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_67_fu_2994_p2() {
    xor_ln282_67_fu_2994_p2 = (or_ln282_67_fu_2988_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_68_fu_3272_p2() {
    xor_ln282_68_fu_3272_p2 = (or_ln282_68_fu_3266_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_69_fu_3474_p2() {
    xor_ln282_69_fu_3474_p2 = (or_ln282_69_fu_3468_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_70_fu_3843_p2() {
    xor_ln282_70_fu_3843_p2 = (or_ln282_70_fu_3837_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln282_fu_1854_p2() {
    xor_ln282_fu_1854_p2 = (or_ln282_fu_1848_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_xor_ln399_fu_1558_p2() {
    xor_ln399_fu_1558_p2 = (icmp_ln396_fu_1544_p2.read() ^ ap_const_lv1_1);
}

void resnet50_0::thread_zext_ln180_10_fu_2508_p1() {
    zext_ln180_10_fu_2508_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_11_fu_2532_p1() {
    zext_ln180_11_fu_2532_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_12_fu_2552_p1() {
    zext_ln180_12_fu_2552_p1 = esl_zext<216,72>(tmp_364_fu_2520_p5.read());
}

void resnet50_0::thread_zext_ln180_13_fu_2791_p1() {
    zext_ln180_13_fu_2791_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_14_fu_2816_p1() {
    zext_ln180_14_fu_2816_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_15_fu_2837_p1() {
    zext_ln180_15_fu_2837_p1 = esl_zext<216,72>(tmp_366_fu_2804_p5.read());
}

void resnet50_0::thread_zext_ln180_16_fu_3076_p1() {
    zext_ln180_16_fu_3076_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_17_fu_3101_p1() {
    zext_ln180_17_fu_3101_p1 = esl_zext<216,8>(select_ln399_2_reg_5674.read());
}

void resnet50_0::thread_zext_ln180_18_fu_3122_p1() {
    zext_ln180_18_fu_3122_p1 = esl_zext<216,72>(tmp_368_fu_3089_p5.read());
}

void resnet50_0::thread_zext_ln180_19_fu_3561_p1() {
    zext_ln180_19_fu_3561_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_1_fu_1624_p1() {
    zext_ln180_1_fu_1624_p1 = esl_zext<14,10>(tmp_520_fu_1616_p3.read());
}

void resnet50_0::thread_zext_ln180_20_fu_3585_p1() {
    zext_ln180_20_fu_3585_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_21_fu_3605_p1() {
    zext_ln180_21_fu_3605_p1 = esl_zext<216,72>(tmp_371_fu_3573_p5.read());
}

void resnet50_0::thread_zext_ln180_22_fu_3640_p1() {
    zext_ln180_22_fu_3640_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_23_fu_3665_p1() {
    zext_ln180_23_fu_3665_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_24_fu_3686_p1() {
    zext_ln180_24_fu_3686_p1 = esl_zext<216,72>(tmp_373_fu_3653_p5.read());
}

void resnet50_0::thread_zext_ln180_25_fu_3925_p1() {
    zext_ln180_25_fu_3925_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_26_fu_3950_p1() {
    zext_ln180_26_fu_3950_p1 = esl_zext<216,8>(select_ln399_2_reg_5674_pp0_iter11_reg.read());
}

void resnet50_0::thread_zext_ln180_27_fu_3971_p1() {
    zext_ln180_27_fu_3971_p1 = esl_zext<216,72>(tmp_375_fu_3938_p5.read());
}

void resnet50_0::thread_zext_ln180_2_fu_1634_p1() {
    zext_ln180_2_fu_1634_p1 = esl_zext<14,5>(select_ln396_fu_1588_p3.read());
}

void resnet50_0::thread_zext_ln180_3_fu_1644_p1() {
    zext_ln180_3_fu_1644_p1 = esl_zext<64,14>(add_ln180_fu_1638_p2.read());
}

void resnet50_0::thread_zext_ln180_4_fu_1936_p1() {
    zext_ln180_4_fu_1936_p1 = esl_zext<216,8>(select_ln399_2_fu_1706_p3.read());
}

void resnet50_0::thread_zext_ln180_5_fu_1962_p1() {
    zext_ln180_5_fu_1962_p1 = esl_zext<216,8>(select_ln399_2_fu_1706_p3.read());
}

void resnet50_0::thread_zext_ln180_6_fu_1984_p1() {
    zext_ln180_6_fu_1984_p1 = esl_zext<216,72>(tmp_360_fu_1950_p5.read());
}

void resnet50_0::thread_zext_ln180_7_fu_2223_p1() {
    zext_ln180_7_fu_2223_p1 = esl_zext<216,8>(select_ln399_2_fu_1706_p3.read());
}

void resnet50_0::thread_zext_ln180_8_fu_2249_p1() {
    zext_ln180_8_fu_2249_p1 = esl_zext<216,8>(select_ln399_2_fu_1706_p3.read());
}

void resnet50_0::thread_zext_ln180_9_fu_2271_p1() {
    zext_ln180_9_fu_2271_p1 = esl_zext<216,72>(tmp_362_fu_2237_p5.read());
}

void resnet50_0::thread_zext_ln180_fu_1612_p1() {
    zext_ln180_fu_1612_p1 = esl_zext<14,13>(tmp_519_fu_1604_p3.read());
}

void resnet50_0::thread_zext_ln214_10_cast13_fu_5117_p1() {
    zext_ln214_10_cast13_fu_5117_p1 = esl_zext<9,5>(or_ln214_8_fu_5111_p2.read());
}

void resnet50_0::thread_zext_ln214_10_fu_4523_p1() {
    zext_ln214_10_fu_4523_p1 = esl_zext<9,8>(tmp_380_fu_4503_p3.read());
}

void resnet50_0::thread_zext_ln214_11_cast13_fu_5159_p1() {
    zext_ln214_11_cast13_fu_5159_p1 = esl_zext<9,5>(or_ln214_9_fu_5153_p2.read());
}

void resnet50_0::thread_zext_ln214_11_fu_4527_p1() {
    zext_ln214_11_fu_4527_p1 = esl_zext<9,8>(empty_51_fu_4511_p2.read());
}

void resnet50_0::thread_zext_ln214_12_fu_4589_p1() {
    zext_ln214_12_fu_4589_p1 = esl_zext<288,9>(select_ln214_11_fu_4575_p3.read());
}

void resnet50_0::thread_zext_ln214_13_cast12_fu_5335_p1() {
    zext_ln214_13_cast12_fu_5335_p1 = esl_zext<9,5>(empty_52_fu_4625_p2.read());
}

void resnet50_0::thread_zext_ln214_13_fu_4593_p1() {
    zext_ln214_13_fu_4593_p1 = esl_zext<288,9>(sub_ln214_15_fu_4583_p2.read());
}

void resnet50_0::thread_zext_ln214_14_cast12_fu_5377_p1() {
    zext_ln214_14_cast12_fu_5377_p1 = esl_zext<9,5>(or_ln214_11_fu_5371_p2.read());
}

void resnet50_0::thread_zext_ln214_14_fu_4673_p1() {
    zext_ln214_14_fu_4673_p1 = esl_zext<9,8>(tmp_382_fu_4641_p3.read());
}

void resnet50_0::thread_zext_ln214_15_cast12_fu_5419_p1() {
    zext_ln214_15_cast12_fu_5419_p1 = esl_zext<9,5>(or_ln214_12_fu_5413_p2.read());
}

void resnet50_0::thread_zext_ln214_15_fu_4735_p1() {
    zext_ln214_15_fu_4735_p1 = esl_zext<288,9>(select_ln214_14_fu_4721_p3.read());
}

void resnet50_0::thread_zext_ln214_16_fu_4739_p1() {
    zext_ln214_16_fu_4739_p1 = esl_zext<288,9>(sub_ln214_19_fu_4729_p2.read());
}

void resnet50_0::thread_zext_ln214_17_fu_4863_p1() {
    zext_ln214_17_fu_4863_p1 = esl_zext<288,9>(select_ln214_17_fu_4849_p3.read());
}

void resnet50_0::thread_zext_ln214_18_fu_4867_p1() {
    zext_ln214_18_fu_4867_p1 = esl_zext<288,9>(sub_ln214_23_fu_4857_p2.read());
}

void resnet50_0::thread_zext_ln214_19_fu_4921_p1() {
    zext_ln214_19_fu_4921_p1 = esl_zext<288,9>(empty_57_fu_4915_p2.read());
}

void resnet50_0::thread_zext_ln214_1_fu_4079_p1() {
    zext_ln214_1_fu_4079_p1 = esl_zext<9,8>(empty_45_fu_4063_p2.read());
}

void resnet50_0::thread_zext_ln214_20_fu_4983_p1() {
    zext_ln214_20_fu_4983_p1 = esl_zext<9,8>(tmp_384_fu_4951_p3.read());
}

void resnet50_0::thread_zext_ln214_21_fu_5045_p1() {
    zext_ln214_21_fu_5045_p1 = esl_zext<288,9>(select_ln214_20_fu_5031_p3.read());
}

void resnet50_0::thread_zext_ln214_22_fu_5049_p1() {
    zext_ln214_22_fu_5049_p1 = esl_zext<288,9>(sub_ln214_27_fu_5039_p2.read());
}

void resnet50_0::thread_zext_ln214_23_fu_5097_p1() {
    zext_ln214_23_fu_5097_p1 = esl_zext<288,9>(empty_60_fu_5091_p2.read());
}

void resnet50_0::thread_zext_ln214_24_fu_5139_p1() {
    zext_ln214_24_fu_5139_p1 = esl_zext<288,9>(empty_61_fu_5133_p2.read());
}

void resnet50_0::thread_zext_ln214_25_fu_5181_p1() {
    zext_ln214_25_fu_5181_p1 = esl_zext<288,9>(empty_62_fu_5175_p2.read());
}

void resnet50_0::thread_zext_ln214_26_fu_5243_p1() {
    zext_ln214_26_fu_5243_p1 = esl_zext<9,8>(tmp_386_fu_5211_p3.read());
}

void resnet50_0::thread_zext_ln214_27_fu_5305_p1() {
    zext_ln214_27_fu_5305_p1 = esl_zext<288,9>(select_ln214_23_fu_5291_p3.read());
}

void resnet50_0::thread_zext_ln214_28_fu_5309_p1() {
    zext_ln214_28_fu_5309_p1 = esl_zext<288,9>(sub_ln214_31_fu_5299_p2.read());
}

void resnet50_0::thread_zext_ln214_29_fu_5357_p1() {
    zext_ln214_29_fu_5357_p1 = esl_zext<288,9>(empty_65_fu_5351_p2.read());
}

void resnet50_0::thread_zext_ln214_2_cast161_fu_4323_p1() {
    zext_ln214_2_cast161_fu_4323_p1 = esl_zext<9,5>(or_ln214_1_fu_4317_p2.read());
}

void resnet50_0::thread_zext_ln214_2_fu_4141_p1() {
    zext_ln214_2_fu_4141_p1 = esl_zext<288,9>(select_ln214_2_fu_4127_p3.read());
}

void resnet50_0::thread_zext_ln214_30_fu_5399_p1() {
    zext_ln214_30_fu_5399_p1 = esl_zext<288,9>(empty_66_fu_5393_p2.read());
}

void resnet50_0::thread_zext_ln214_31_fu_5441_p1() {
    zext_ln214_31_fu_5441_p1 = esl_zext<288,9>(empty_67_fu_5435_p2.read());
}

void resnet50_0::thread_zext_ln214_3_cast158_fu_4451_p1() {
    zext_ln214_3_cast158_fu_4451_p1 = esl_zext<9,5>(or_ln214_2_fu_4445_p2.read());
}

void resnet50_0::thread_zext_ln214_3_fu_4145_p1() {
    zext_ln214_3_fu_4145_p1 = esl_zext<288,9>(sub_ln214_3_fu_4135_p2.read());
}

void resnet50_0::thread_zext_ln214_4_fu_4225_p1() {
    zext_ln214_4_fu_4225_p1 = esl_zext<9,8>(tmp_378_fu_4193_p3.read());
}

void resnet50_0::thread_zext_ln214_5_fu_4287_p1() {
    zext_ln214_5_fu_4287_p1 = esl_zext<288,9>(select_ln214_5_fu_4273_p3.read());
}

void resnet50_0::thread_zext_ln214_6_cast149_fu_4771_p1() {
    zext_ln214_6_cast149_fu_4771_p1 = esl_zext<9,5>(or_ln214_5_fu_4765_p2.read());
}

void resnet50_0::thread_zext_ln214_6_fu_4291_p1() {
    zext_ln214_6_fu_4291_p1 = esl_zext<288,9>(sub_ln214_7_fu_4281_p2.read());
}

void resnet50_0::thread_zext_ln214_7_cast146_fu_4899_p1() {
    zext_ln214_7_cast146_fu_4899_p1 = esl_zext<9,5>(or_ln214_6_fu_4893_p2.read());
}

void resnet50_0::thread_zext_ln214_7_fu_4415_p1() {
    zext_ln214_7_fu_4415_p1 = esl_zext<288,9>(select_ln214_8_fu_4401_p3.read());
}

void resnet50_0::thread_zext_ln214_8_fu_4419_p1() {
    zext_ln214_8_fu_4419_p1 = esl_zext<288,9>(sub_ln214_11_fu_4409_p2.read());
}

void resnet50_0::thread_zext_ln214_9_cast140_fu_5075_p1() {
    zext_ln214_9_cast140_fu_5075_p1 = esl_zext<9,5>(empty_46_fu_4177_p2.read());
}

void resnet50_0::thread_zext_ln214_9_fu_4473_p1() {
    zext_ln214_9_fu_4473_p1 = esl_zext<288,9>(empty_50_fu_4467_p2.read());
}

void resnet50_0::thread_zext_ln214_fu_4075_p1() {
    zext_ln214_fu_4075_p1 = esl_zext<9,8>(tmp_376_fu_4053_p5.read());
}

void resnet50_0::thread_zext_ln266_64_fu_2025_p1() {
    zext_ln266_64_fu_2025_p1 = esl_zext<9,8>(p_Result_24_1_fu_2015_p4.read());
}

void resnet50_0::thread_zext_ln266_65_fu_2305_p1() {
    zext_ln266_65_fu_2305_p1 = esl_zext<9,8>(p_Result_24_2_fu_2295_p4.read());
}

void resnet50_0::thread_zext_ln266_66_fu_2593_p1() {
    zext_ln266_66_fu_2593_p1 = esl_zext<9,8>(p_Result_24_3_fu_2583_p4.read());
}

void resnet50_0::thread_zext_ln266_67_fu_2878_p1() {
    zext_ln266_67_fu_2878_p1 = esl_zext<9,8>(p_Result_24_4_fu_2868_p4.read());
}

void resnet50_0::thread_zext_ln266_68_fu_3156_p1() {
    zext_ln266_68_fu_3156_p1 = esl_zext<9,8>(p_Result_24_5_fu_3146_p4.read());
}

void resnet50_0::thread_zext_ln266_69_fu_3358_p1() {
    zext_ln266_69_fu_3358_p1 = esl_zext<9,8>(p_Result_24_6_fu_3348_p4.read());
}

void resnet50_0::thread_zext_ln266_70_fu_3727_p1() {
    zext_ln266_70_fu_3727_p1 = esl_zext<9,8>(p_Result_24_7_fu_3717_p4.read());
}

void resnet50_0::thread_zext_ln266_fu_1738_p1() {
    zext_ln266_fu_1738_p1 = esl_zext<9,8>(p_Result_s_fu_1728_p4.read());
}

void resnet50_0::thread_zext_ln332_fu_5503_p1() {
    zext_ln332_fu_5503_p1 = esl_zext<176,169>(p_Result_30_s_fu_5491_p5.read());
}

void resnet50_0::thread_zext_ln431_fu_4028_p1() {
    zext_ln431_fu_4028_p1 = esl_zext<64,15>(select_ln431_1_fu_4020_p3.read());
}

}

