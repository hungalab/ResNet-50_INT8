// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _load_bias_scale_HH_
#define _load_bias_scale_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct load_bias_scale : public sc_module {
    // Port declarations 61
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > bias_address0;
    sc_out< sc_logic > bias_ce0;
    sc_out< sc_logic > bias_we0;
    sc_out< sc_lv<2048> > bias_d0;
    sc_out< sc_lv<5> > scale_address0;
    sc_out< sc_logic > scale_ce0;
    sc_out< sc_logic > scale_we0;
    sc_out< sc_lv<2048> > scale_d0;
    sc_out< sc_logic > m_axi_ddr_V_AWVALID;
    sc_in< sc_logic > m_axi_ddr_V_AWREADY;
    sc_out< sc_lv<32> > m_axi_ddr_V_AWADDR;
    sc_out< sc_lv<1> > m_axi_ddr_V_AWID;
    sc_out< sc_lv<32> > m_axi_ddr_V_AWLEN;
    sc_out< sc_lv<3> > m_axi_ddr_V_AWSIZE;
    sc_out< sc_lv<2> > m_axi_ddr_V_AWBURST;
    sc_out< sc_lv<2> > m_axi_ddr_V_AWLOCK;
    sc_out< sc_lv<4> > m_axi_ddr_V_AWCACHE;
    sc_out< sc_lv<3> > m_axi_ddr_V_AWPROT;
    sc_out< sc_lv<4> > m_axi_ddr_V_AWQOS;
    sc_out< sc_lv<4> > m_axi_ddr_V_AWREGION;
    sc_out< sc_lv<1> > m_axi_ddr_V_AWUSER;
    sc_out< sc_logic > m_axi_ddr_V_WVALID;
    sc_in< sc_logic > m_axi_ddr_V_WREADY;
    sc_out< sc_lv<128> > m_axi_ddr_V_WDATA;
    sc_out< sc_lv<16> > m_axi_ddr_V_WSTRB;
    sc_out< sc_logic > m_axi_ddr_V_WLAST;
    sc_out< sc_lv<1> > m_axi_ddr_V_WID;
    sc_out< sc_lv<1> > m_axi_ddr_V_WUSER;
    sc_out< sc_logic > m_axi_ddr_V_ARVALID;
    sc_in< sc_logic > m_axi_ddr_V_ARREADY;
    sc_out< sc_lv<32> > m_axi_ddr_V_ARADDR;
    sc_out< sc_lv<1> > m_axi_ddr_V_ARID;
    sc_out< sc_lv<32> > m_axi_ddr_V_ARLEN;
    sc_out< sc_lv<3> > m_axi_ddr_V_ARSIZE;
    sc_out< sc_lv<2> > m_axi_ddr_V_ARBURST;
    sc_out< sc_lv<2> > m_axi_ddr_V_ARLOCK;
    sc_out< sc_lv<4> > m_axi_ddr_V_ARCACHE;
    sc_out< sc_lv<3> > m_axi_ddr_V_ARPROT;
    sc_out< sc_lv<4> > m_axi_ddr_V_ARQOS;
    sc_out< sc_lv<4> > m_axi_ddr_V_ARREGION;
    sc_out< sc_lv<1> > m_axi_ddr_V_ARUSER;
    sc_in< sc_logic > m_axi_ddr_V_RVALID;
    sc_out< sc_logic > m_axi_ddr_V_RREADY;
    sc_in< sc_lv<128> > m_axi_ddr_V_RDATA;
    sc_in< sc_logic > m_axi_ddr_V_RLAST;
    sc_in< sc_lv<1> > m_axi_ddr_V_RID;
    sc_in< sc_lv<1> > m_axi_ddr_V_RUSER;
    sc_in< sc_lv<2> > m_axi_ddr_V_RRESP;
    sc_in< sc_logic > m_axi_ddr_V_BVALID;
    sc_out< sc_logic > m_axi_ddr_V_BREADY;
    sc_in< sc_lv<2> > m_axi_ddr_V_BRESP;
    sc_in< sc_lv<1> > m_axi_ddr_V_BID;
    sc_in< sc_lv<1> > m_axi_ddr_V_BUSER;
    sc_in< sc_lv<6> > TO_r;
    sc_in< sc_lv<21> > offset;


    // Module declarations
    load_bias_scale(sc_module_name name);
    SC_HAS_PROCESS(load_bias_scale);

    ~load_bias_scale();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<35> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ddr_V_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > icmp_ln65_reg_319;
    sc_signal< sc_logic > ddr_V_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< bool > ap_block_pp0_stage11;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< bool > ap_block_pp0_stage12;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    sc_signal< bool > ap_block_pp0_stage13;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< bool > ap_block_pp0_stage14;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage15;
    sc_signal< bool > ap_block_pp0_stage15;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln65_reg_319_pp0_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<1> > icmp_ln80_reg_424;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage8;
    sc_signal< bool > ap_block_pp1_stage8;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage9;
    sc_signal< bool > ap_block_pp1_stage9;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage10;
    sc_signal< bool > ap_block_pp1_stage10;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage11;
    sc_signal< bool > ap_block_pp1_stage11;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage12;
    sc_signal< bool > ap_block_pp1_stage12;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage13;
    sc_signal< bool > ap_block_pp1_stage13;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage14;
    sc_signal< bool > ap_block_pp1_stage14;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage15;
    sc_signal< bool > ap_block_pp1_stage15;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > icmp_ln80_reg_424_pp1_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage2;
    sc_signal< bool > ap_block_pp1_stage2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage3;
    sc_signal< bool > ap_block_pp1_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage4;
    sc_signal< bool > ap_block_pp1_stage4;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage5;
    sc_signal< bool > ap_block_pp1_stage5;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage6;
    sc_signal< bool > ap_block_pp1_stage6;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage7;
    sc_signal< bool > ap_block_pp1_stage7;
    sc_signal< sc_lv<6> > i_0_reg_130;
    sc_signal< sc_lv<6> > i_0_reg_130_pp0_iter1_reg;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<6> > i1_0_reg_142;
    sc_signal< sc_lv<6> > i1_0_reg_142_pp1_iter1_reg;
    sc_signal< bool > ap_block_state28_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state44_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln65_fu_154_p2;
    sc_signal< sc_lv<6> > i_fu_159_p2;
    sc_signal< sc_lv<6> > i_reg_323;
    sc_signal< sc_lv<21> > add_ln70_fu_181_p2;
    sc_signal< sc_lv<21> > add_ln70_reg_328;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_state19_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_reg_339;
    sc_signal< bool > ap_block_state10_pp0_stage8_iter0;
    sc_signal< bool > ap_block_state26_pp0_stage8_iter1;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_128_reg_344;
    sc_signal< bool > ap_block_state11_pp0_stage9_iter0;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_129_reg_349;
    sc_signal< bool > ap_block_state12_pp0_stage10_iter0;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_130_reg_354;
    sc_signal< bool > ap_block_state13_pp0_stage11_iter0;
    sc_signal< bool > ap_block_pp0_stage11_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_131_reg_359;
    sc_signal< bool > ap_block_state14_pp0_stage12_iter0;
    sc_signal< bool > ap_block_pp0_stage12_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_132_reg_364;
    sc_signal< bool > ap_block_state15_pp0_stage13_iter0;
    sc_signal< bool > ap_block_pp0_stage13_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_133_reg_369;
    sc_signal< bool > ap_block_state16_pp0_stage14_iter0;
    sc_signal< bool > ap_block_pp0_stage14_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_134_reg_374;
    sc_signal< bool > ap_block_state17_pp0_stage15_iter0;
    sc_signal< bool > ap_block_pp0_stage15_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_135_reg_379;
    sc_signal< sc_lv<128> > ddr_V_addr_read_136_reg_384;
    sc_signal< sc_lv<128> > ddr_V_addr_read_137_reg_389;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state20_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_138_reg_394;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state21_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_139_reg_399;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state22_pp0_stage4_iter1;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_140_reg_404;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_state23_pp0_stage5_iter1;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_141_reg_409;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_state24_pp0_stage6_iter1;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_read_142_reg_414;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_state25_pp0_stage7_iter1;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< sc_lv<21> > add_ln85_fu_233_p2;
    sc_signal< sc_lv<21> > add_ln85_reg_419;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<1> > icmp_ln80_fu_238_p2;
    sc_signal< sc_lv<6> > i_2_fu_243_p2;
    sc_signal< sc_lv<6> > i_2_reg_428;
    sc_signal< sc_lv<21> > add_ln85_1_fu_265_p2;
    sc_signal< sc_lv<21> > add_ln85_1_reg_433;
    sc_signal< bool > ap_block_state29_pp1_stage1_iter0;
    sc_signal< bool > ap_block_state29_io;
    sc_signal< bool > ap_block_state45_pp1_stage1_iter1;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_reg_444;
    sc_signal< bool > ap_block_state36_pp1_stage8_iter0;
    sc_signal< bool > ap_block_state52_pp1_stage8_iter1;
    sc_signal< bool > ap_block_pp1_stage8_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_1_reg_449;
    sc_signal< bool > ap_block_state37_pp1_stage9_iter0;
    sc_signal< bool > ap_block_pp1_stage9_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_2_reg_454;
    sc_signal< bool > ap_block_state38_pp1_stage10_iter0;
    sc_signal< bool > ap_block_pp1_stage10_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_3_reg_459;
    sc_signal< bool > ap_block_state39_pp1_stage11_iter0;
    sc_signal< bool > ap_block_pp1_stage11_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_4_reg_464;
    sc_signal< bool > ap_block_state40_pp1_stage12_iter0;
    sc_signal< bool > ap_block_pp1_stage12_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_5_reg_469;
    sc_signal< bool > ap_block_state41_pp1_stage13_iter0;
    sc_signal< bool > ap_block_pp1_stage13_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_6_reg_474;
    sc_signal< bool > ap_block_state42_pp1_stage14_iter0;
    sc_signal< bool > ap_block_pp1_stage14_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_7_reg_479;
    sc_signal< bool > ap_block_state43_pp1_stage15_iter0;
    sc_signal< bool > ap_block_pp1_stage15_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_8_reg_484;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_9_reg_489;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_10_reg_494;
    sc_signal< bool > ap_block_state30_pp1_stage2_iter0;
    sc_signal< bool > ap_block_state46_pp1_stage2_iter1;
    sc_signal< bool > ap_block_pp1_stage2_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_11_reg_499;
    sc_signal< bool > ap_block_state31_pp1_stage3_iter0;
    sc_signal< bool > ap_block_state47_pp1_stage3_iter1;
    sc_signal< bool > ap_block_pp1_stage3_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_12_reg_504;
    sc_signal< bool > ap_block_state32_pp1_stage4_iter0;
    sc_signal< bool > ap_block_state48_pp1_stage4_iter1;
    sc_signal< bool > ap_block_pp1_stage4_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_13_reg_509;
    sc_signal< bool > ap_block_state33_pp1_stage5_iter0;
    sc_signal< bool > ap_block_state49_pp1_stage5_iter1;
    sc_signal< bool > ap_block_pp1_stage5_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_14_reg_514;
    sc_signal< bool > ap_block_state34_pp1_stage6_iter0;
    sc_signal< bool > ap_block_state50_pp1_stage6_iter1;
    sc_signal< bool > ap_block_pp1_stage6_11001;
    sc_signal< sc_lv<128> > ddr_V_addr_1_read_15_reg_519;
    sc_signal< bool > ap_block_state35_pp1_stage7_iter0;
    sc_signal< bool > ap_block_state51_pp1_stage7_iter1;
    sc_signal< bool > ap_block_pp1_stage7_11001;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage15_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state28;
    sc_signal< bool > ap_block_pp1_stage15_subdone;
    sc_signal< bool > ap_block_pp1_stage8_subdone;
    sc_signal< sc_lv<6> > ap_phi_mux_i_0_phi_fu_134_p4;
    sc_signal< sc_lv<6> > ap_phi_mux_i1_0_phi_fu_146_p4;
    sc_signal< sc_lv<64> > zext_ln75_fu_196_p1;
    sc_signal< sc_lv<64> > zext_ln90_fu_280_p1;
    sc_signal< sc_lv<64> > zext_ln70_fu_186_p1;
    sc_signal< sc_lv<64> > zext_ln85_1_fu_270_p1;
    sc_signal< sc_lv<5> > trunc_ln70_fu_165_p1;
    sc_signal< sc_lv<9> > shl_ln2_fu_169_p3;
    sc_signal< sc_lv<21> > zext_ln75_1_fu_177_p1;
    sc_signal< sc_lv<10> > shl_ln_fu_222_p3;
    sc_signal< sc_lv<21> > zext_ln85_fu_229_p1;
    sc_signal< sc_lv<5> > trunc_ln85_fu_249_p1;
    sc_signal< sc_lv<9> > shl_ln85_1_fu_253_p3;
    sc_signal< sc_lv<21> > zext_ln90_1_fu_261_p1;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<35> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage2_subdone;
    sc_signal< bool > ap_block_pp1_stage3_subdone;
    sc_signal< bool > ap_block_pp1_stage4_subdone;
    sc_signal< bool > ap_block_pp1_stage5_subdone;
    sc_signal< bool > ap_block_pp1_stage6_subdone;
    sc_signal< bool > ap_block_pp1_stage7_subdone;
    sc_signal< bool > ap_block_pp1_stage9_subdone;
    sc_signal< bool > ap_block_pp1_stage10_subdone;
    sc_signal< bool > ap_block_pp1_stage11_subdone;
    sc_signal< bool > ap_block_pp1_stage12_subdone;
    sc_signal< bool > ap_block_pp1_stage13_subdone;
    sc_signal< bool > ap_block_pp1_stage14_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<35> ap_ST_fsm_state1;
    static const sc_lv<35> ap_ST_fsm_pp0_stage0;
    static const sc_lv<35> ap_ST_fsm_pp0_stage1;
    static const sc_lv<35> ap_ST_fsm_pp0_stage2;
    static const sc_lv<35> ap_ST_fsm_pp0_stage3;
    static const sc_lv<35> ap_ST_fsm_pp0_stage4;
    static const sc_lv<35> ap_ST_fsm_pp0_stage5;
    static const sc_lv<35> ap_ST_fsm_pp0_stage6;
    static const sc_lv<35> ap_ST_fsm_pp0_stage7;
    static const sc_lv<35> ap_ST_fsm_pp0_stage8;
    static const sc_lv<35> ap_ST_fsm_pp0_stage9;
    static const sc_lv<35> ap_ST_fsm_pp0_stage10;
    static const sc_lv<35> ap_ST_fsm_pp0_stage11;
    static const sc_lv<35> ap_ST_fsm_pp0_stage12;
    static const sc_lv<35> ap_ST_fsm_pp0_stage13;
    static const sc_lv<35> ap_ST_fsm_pp0_stage14;
    static const sc_lv<35> ap_ST_fsm_pp0_stage15;
    static const sc_lv<35> ap_ST_fsm_state27;
    static const sc_lv<35> ap_ST_fsm_pp1_stage0;
    static const sc_lv<35> ap_ST_fsm_pp1_stage1;
    static const sc_lv<35> ap_ST_fsm_pp1_stage2;
    static const sc_lv<35> ap_ST_fsm_pp1_stage3;
    static const sc_lv<35> ap_ST_fsm_pp1_stage4;
    static const sc_lv<35> ap_ST_fsm_pp1_stage5;
    static const sc_lv<35> ap_ST_fsm_pp1_stage6;
    static const sc_lv<35> ap_ST_fsm_pp1_stage7;
    static const sc_lv<35> ap_ST_fsm_pp1_stage8;
    static const sc_lv<35> ap_ST_fsm_pp1_stage9;
    static const sc_lv<35> ap_ST_fsm_pp1_stage10;
    static const sc_lv<35> ap_ST_fsm_pp1_stage11;
    static const sc_lv<35> ap_ST_fsm_pp1_stage12;
    static const sc_lv<35> ap_ST_fsm_pp1_stage13;
    static const sc_lv<35> ap_ST_fsm_pp1_stage14;
    static const sc_lv<35> ap_ST_fsm_pp1_stage15;
    static const sc_lv<35> ap_ST_fsm_state53;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_22;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln70_fu_181_p2();
    void thread_add_ln85_1_fu_265_p2();
    void thread_add_ln85_fu_233_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage15();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp1_stage10();
    void thread_ap_CS_fsm_pp1_stage11();
    void thread_ap_CS_fsm_pp1_stage12();
    void thread_ap_CS_fsm_pp1_stage13();
    void thread_ap_CS_fsm_pp1_stage14();
    void thread_ap_CS_fsm_pp1_stage15();
    void thread_ap_CS_fsm_pp1_stage2();
    void thread_ap_CS_fsm_pp1_stage3();
    void thread_ap_CS_fsm_pp1_stage4();
    void thread_ap_CS_fsm_pp1_stage5();
    void thread_ap_CS_fsm_pp1_stage6();
    void thread_ap_CS_fsm_pp1_stage7();
    void thread_ap_CS_fsm_pp1_stage8();
    void thread_ap_CS_fsm_pp1_stage9();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state53();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11();
    void thread_ap_block_pp0_stage11_11001();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12();
    void thread_ap_block_pp0_stage12_11001();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13();
    void thread_ap_block_pp0_stage13_11001();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14();
    void thread_ap_block_pp0_stage14_11001();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage15();
    void thread_ap_block_pp0_stage15_11001();
    void thread_ap_block_pp0_stage15_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage10();
    void thread_ap_block_pp1_stage10_11001();
    void thread_ap_block_pp1_stage10_subdone();
    void thread_ap_block_pp1_stage11();
    void thread_ap_block_pp1_stage11_11001();
    void thread_ap_block_pp1_stage11_subdone();
    void thread_ap_block_pp1_stage12();
    void thread_ap_block_pp1_stage12_11001();
    void thread_ap_block_pp1_stage12_subdone();
    void thread_ap_block_pp1_stage13();
    void thread_ap_block_pp1_stage13_11001();
    void thread_ap_block_pp1_stage13_subdone();
    void thread_ap_block_pp1_stage14();
    void thread_ap_block_pp1_stage14_11001();
    void thread_ap_block_pp1_stage14_subdone();
    void thread_ap_block_pp1_stage15();
    void thread_ap_block_pp1_stage15_11001();
    void thread_ap_block_pp1_stage15_subdone();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp1_stage2();
    void thread_ap_block_pp1_stage2_11001();
    void thread_ap_block_pp1_stage2_subdone();
    void thread_ap_block_pp1_stage3();
    void thread_ap_block_pp1_stage3_11001();
    void thread_ap_block_pp1_stage3_subdone();
    void thread_ap_block_pp1_stage4();
    void thread_ap_block_pp1_stage4_11001();
    void thread_ap_block_pp1_stage4_subdone();
    void thread_ap_block_pp1_stage5();
    void thread_ap_block_pp1_stage5_11001();
    void thread_ap_block_pp1_stage5_subdone();
    void thread_ap_block_pp1_stage6();
    void thread_ap_block_pp1_stage6_11001();
    void thread_ap_block_pp1_stage6_subdone();
    void thread_ap_block_pp1_stage7();
    void thread_ap_block_pp1_stage7_11001();
    void thread_ap_block_pp1_stage7_subdone();
    void thread_ap_block_pp1_stage8();
    void thread_ap_block_pp1_stage8_11001();
    void thread_ap_block_pp1_stage8_subdone();
    void thread_ap_block_pp1_stage9();
    void thread_ap_block_pp1_stage9_11001();
    void thread_ap_block_pp1_stage9_subdone();
    void thread_ap_block_state10_pp0_stage8_iter0();
    void thread_ap_block_state11_pp0_stage9_iter0();
    void thread_ap_block_state12_pp0_stage10_iter0();
    void thread_ap_block_state13_pp0_stage11_iter0();
    void thread_ap_block_state14_pp0_stage12_iter0();
    void thread_ap_block_state15_pp0_stage13_iter0();
    void thread_ap_block_state16_pp0_stage14_iter0();
    void thread_ap_block_state17_pp0_stage15_iter0();
    void thread_ap_block_state18_pp0_stage0_iter1();
    void thread_ap_block_state19_pp0_stage1_iter1();
    void thread_ap_block_state20_pp0_stage2_iter1();
    void thread_ap_block_state21_pp0_stage3_iter1();
    void thread_ap_block_state22_pp0_stage4_iter1();
    void thread_ap_block_state23_pp0_stage5_iter1();
    void thread_ap_block_state24_pp0_stage6_iter1();
    void thread_ap_block_state25_pp0_stage7_iter1();
    void thread_ap_block_state26_pp0_stage8_iter1();
    void thread_ap_block_state28_pp1_stage0_iter0();
    void thread_ap_block_state29_io();
    void thread_ap_block_state29_pp1_stage1_iter0();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state30_pp1_stage2_iter0();
    void thread_ap_block_state31_pp1_stage3_iter0();
    void thread_ap_block_state32_pp1_stage4_iter0();
    void thread_ap_block_state33_pp1_stage5_iter0();
    void thread_ap_block_state34_pp1_stage6_iter0();
    void thread_ap_block_state35_pp1_stage7_iter0();
    void thread_ap_block_state36_pp1_stage8_iter0();
    void thread_ap_block_state37_pp1_stage9_iter0();
    void thread_ap_block_state38_pp1_stage10_iter0();
    void thread_ap_block_state39_pp1_stage11_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state40_pp1_stage12_iter0();
    void thread_ap_block_state41_pp1_stage13_iter0();
    void thread_ap_block_state42_pp1_stage14_iter0();
    void thread_ap_block_state43_pp1_stage15_iter0();
    void thread_ap_block_state44_pp1_stage0_iter1();
    void thread_ap_block_state45_pp1_stage1_iter1();
    void thread_ap_block_state46_pp1_stage2_iter1();
    void thread_ap_block_state47_pp1_stage3_iter1();
    void thread_ap_block_state48_pp1_stage4_iter1();
    void thread_ap_block_state49_pp1_stage5_iter1();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state50_pp1_stage6_iter1();
    void thread_ap_block_state51_pp1_stage7_iter1();
    void thread_ap_block_state52_pp1_stage8_iter1();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state28();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_i1_0_phi_fu_146_p4();
    void thread_ap_phi_mux_i_0_phi_fu_134_p4();
    void thread_ap_ready();
    void thread_bias_address0();
    void thread_bias_ce0();
    void thread_bias_d0();
    void thread_bias_we0();
    void thread_ddr_V_blk_n_AR();
    void thread_ddr_V_blk_n_R();
    void thread_i_2_fu_243_p2();
    void thread_i_fu_159_p2();
    void thread_icmp_ln65_fu_154_p2();
    void thread_icmp_ln80_fu_238_p2();
    void thread_m_axi_ddr_V_ARADDR();
    void thread_m_axi_ddr_V_ARBURST();
    void thread_m_axi_ddr_V_ARCACHE();
    void thread_m_axi_ddr_V_ARID();
    void thread_m_axi_ddr_V_ARLEN();
    void thread_m_axi_ddr_V_ARLOCK();
    void thread_m_axi_ddr_V_ARPROT();
    void thread_m_axi_ddr_V_ARQOS();
    void thread_m_axi_ddr_V_ARREGION();
    void thread_m_axi_ddr_V_ARSIZE();
    void thread_m_axi_ddr_V_ARUSER();
    void thread_m_axi_ddr_V_ARVALID();
    void thread_m_axi_ddr_V_AWADDR();
    void thread_m_axi_ddr_V_AWBURST();
    void thread_m_axi_ddr_V_AWCACHE();
    void thread_m_axi_ddr_V_AWID();
    void thread_m_axi_ddr_V_AWLEN();
    void thread_m_axi_ddr_V_AWLOCK();
    void thread_m_axi_ddr_V_AWPROT();
    void thread_m_axi_ddr_V_AWQOS();
    void thread_m_axi_ddr_V_AWREGION();
    void thread_m_axi_ddr_V_AWSIZE();
    void thread_m_axi_ddr_V_AWUSER();
    void thread_m_axi_ddr_V_AWVALID();
    void thread_m_axi_ddr_V_BREADY();
    void thread_m_axi_ddr_V_RREADY();
    void thread_m_axi_ddr_V_WDATA();
    void thread_m_axi_ddr_V_WID();
    void thread_m_axi_ddr_V_WLAST();
    void thread_m_axi_ddr_V_WSTRB();
    void thread_m_axi_ddr_V_WUSER();
    void thread_m_axi_ddr_V_WVALID();
    void thread_scale_address0();
    void thread_scale_ce0();
    void thread_scale_d0();
    void thread_scale_we0();
    void thread_shl_ln2_fu_169_p3();
    void thread_shl_ln85_1_fu_253_p3();
    void thread_shl_ln_fu_222_p3();
    void thread_trunc_ln70_fu_165_p1();
    void thread_trunc_ln85_fu_249_p1();
    void thread_zext_ln70_fu_186_p1();
    void thread_zext_ln75_1_fu_177_p1();
    void thread_zext_ln75_fu_196_p1();
    void thread_zext_ln85_1_fu_270_p1();
    void thread_zext_ln85_fu_229_p1();
    void thread_zext_ln90_1_fu_261_p1();
    void thread_zext_ln90_fu_280_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
