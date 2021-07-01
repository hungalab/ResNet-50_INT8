// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_layer_HH_
#define _conv_layer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dataflow_parent_loop_1.h"
#include "store_output_1.h"
#include "load_bias_scale.h"
#include "conv_layer_outbuf_V.h"
#include "conv_layer_bias.h"
#include "conv_layer_scale.h"

namespace ap_rtl {

struct conv_layer : public sc_module {
    // Port declarations 63
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<15> > input_V_address0;
    sc_out< sc_logic > input_V_ce0;
    sc_in< sc_lv<288> > input_V_q0;
    sc_out< sc_lv<15> > output_V_address1;
    sc_out< sc_logic > output_V_ce1;
    sc_out< sc_logic > output_V_we1;
    sc_out< sc_lv<288> > output_V_d1;
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
    sc_in< sc_lv<4> > TO_r;
    sc_in< sc_lv<5> > TI;
    sc_in< sc_lv<4> > K;
    sc_in< sc_lv<1> > P;
    sc_in< sc_lv<19> > OFFSET;
    sc_signal< sc_logic > ap_var_for_const5;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const3;
    sc_signal< sc_lv<2> > ap_var_for_const2;
    sc_signal< sc_lv<288> > ap_var_for_const0;
    sc_signal< sc_lv<1536> > ap_var_for_const4;


    // Module declarations
    conv_layer(sc_module_name name);
    SC_HAS_PROCESS(conv_layer);

    ~conv_layer();

    sc_trace_file* mVcdFile;

    conv_layer_outbuf_V* outbuf_V_U;
    conv_layer_bias* bias_U;
    conv_layer_scale* scale_U;
    dataflow_parent_loop_1* grp_dataflow_parent_loop_1_fu_108;
    store_output_1* grp_store_output_1_fu_125;
    load_bias_scale* grp_load_bias_scale_fu_140;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > outbuf_V_address0;
    sc_signal< sc_logic > outbuf_V_ce0;
    sc_signal< sc_lv<1536> > outbuf_V_q0;
    sc_signal< sc_lv<14> > outbuf_V_address1;
    sc_signal< sc_logic > outbuf_V_ce1;
    sc_signal< sc_logic > outbuf_V_we1;
    sc_signal< sc_lv<1536> > outbuf_V_d1;
    sc_signal< sc_lv<17> > mul_ln189_2_fu_192_p2;
    sc_signal< sc_lv<17> > mul_ln189_2_reg_244;
    sc_signal< sc_lv<16> > lshr_ln_reg_249;
    sc_signal< sc_lv<3> > empty_fu_227_p1;
    sc_signal< sc_lv<3> > empty_reg_254;
    sc_signal< sc_lv<18> > empty_76_fu_232_p1;
    sc_signal< sc_lv<18> > empty_76_reg_261;
    sc_signal< sc_lv<4> > empty_77_fu_236_p1;
    sc_signal< sc_lv<4> > empty_77_reg_266;
    sc_signal< sc_lv<2> > empty_78_fu_240_p1;
    sc_signal< sc_lv<2> > empty_78_reg_271;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<2> > bias_address0;
    sc_signal< sc_logic > bias_ce0;
    sc_signal< sc_logic > bias_we0;
    sc_signal< sc_lv<2048> > bias_q0;
    sc_signal< sc_lv<2> > scale_address0;
    sc_signal< sc_logic > scale_ce0;
    sc_signal< sc_logic > scale_we0;
    sc_signal< sc_lv<2048> > scale_q0;
    sc_signal< sc_lv<15> > grp_dataflow_parent_loop_1_fu_108_input_V_address0;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_input_V_ce0;
    sc_signal< sc_lv<288> > grp_dataflow_parent_loop_1_fu_108_input_V_d0;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_input_V_we0;
    sc_signal< sc_lv<15> > grp_dataflow_parent_loop_1_fu_108_input_V_address1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_input_V_ce1;
    sc_signal< sc_lv<288> > grp_dataflow_parent_loop_1_fu_108_input_V_d1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_input_V_we1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWVALID;
    sc_signal< sc_lv<32> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWADDR;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWID;
    sc_signal< sc_lv<32> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWLEN;
    sc_signal< sc_lv<3> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWSIZE;
    sc_signal< sc_lv<2> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWBURST;
    sc_signal< sc_lv<2> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWLOCK;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWCACHE;
    sc_signal< sc_lv<3> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWPROT;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWQOS;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWREGION;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_AWUSER;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WVALID;
    sc_signal< sc_lv<128> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WDATA;
    sc_signal< sc_lv<16> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WSTRB;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WLAST;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WID;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_WUSER;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARVALID;
    sc_signal< sc_lv<32> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARADDR;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARID;
    sc_signal< sc_lv<32> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARLEN;
    sc_signal< sc_lv<3> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARSIZE;
    sc_signal< sc_lv<2> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARBURST;
    sc_signal< sc_lv<2> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARLOCK;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARCACHE;
    sc_signal< sc_lv<3> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARPROT;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARQOS;
    sc_signal< sc_lv<4> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARREGION;
    sc_signal< sc_lv<1> > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_ARUSER;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_RREADY;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_m_axi_ddr_V_BREADY;
    sc_signal< sc_lv<14> > grp_dataflow_parent_loop_1_fu_108_outbuf_V_address0;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_outbuf_V_ce0;
    sc_signal< sc_lv<1536> > grp_dataflow_parent_loop_1_fu_108_outbuf_V_d0;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_outbuf_V_we0;
    sc_signal< sc_lv<14> > grp_dataflow_parent_loop_1_fu_108_outbuf_V_address1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_outbuf_V_ce1;
    sc_signal< sc_lv<1536> > grp_dataflow_parent_loop_1_fu_108_outbuf_V_d1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_outbuf_V_we1;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_start;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_done;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_ready;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_idle;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_continue;
    sc_signal< sc_logic > grp_store_output_1_fu_125_ap_start;
    sc_signal< sc_logic > grp_store_output_1_fu_125_ap_done;
    sc_signal< sc_logic > grp_store_output_1_fu_125_ap_idle;
    sc_signal< sc_logic > grp_store_output_1_fu_125_ap_ready;
    sc_signal< sc_lv<15> > grp_store_output_1_fu_125_output_V_address1;
    sc_signal< sc_logic > grp_store_output_1_fu_125_output_V_ce1;
    sc_signal< sc_logic > grp_store_output_1_fu_125_output_V_we1;
    sc_signal< sc_lv<288> > grp_store_output_1_fu_125_output_V_d1;
    sc_signal< sc_lv<2> > grp_store_output_1_fu_125_bias_address0;
    sc_signal< sc_logic > grp_store_output_1_fu_125_bias_ce0;
    sc_signal< sc_lv<2> > grp_store_output_1_fu_125_scale_address0;
    sc_signal< sc_logic > grp_store_output_1_fu_125_scale_ce0;
    sc_signal< sc_lv<14> > grp_store_output_1_fu_125_outbuf_V_address0;
    sc_signal< sc_logic > grp_store_output_1_fu_125_outbuf_V_ce0;
    sc_signal< sc_lv<14> > grp_store_output_1_fu_125_outbuf_V_address1;
    sc_signal< sc_logic > grp_store_output_1_fu_125_outbuf_V_ce1;
    sc_signal< sc_logic > grp_store_output_1_fu_125_outbuf_V_we1;
    sc_signal< sc_lv<1536> > grp_store_output_1_fu_125_outbuf_V_d1;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_ap_start;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_ap_done;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_ap_idle;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_ap_ready;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_bias_address0;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_bias_ce0;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_bias_we0;
    sc_signal< sc_lv<2048> > grp_load_bias_scale_fu_140_bias_d0;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_scale_address0;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_scale_ce0;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_scale_we0;
    sc_signal< sc_lv<2048> > grp_load_bias_scale_fu_140_scale_d0;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWVALID;
    sc_signal< sc_lv<32> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWADDR;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWID;
    sc_signal< sc_lv<32> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWLEN;
    sc_signal< sc_lv<3> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWSIZE;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWBURST;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWLOCK;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWCACHE;
    sc_signal< sc_lv<3> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWPROT;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWQOS;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWREGION;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_AWUSER;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_WVALID;
    sc_signal< sc_lv<128> > grp_load_bias_scale_fu_140_m_axi_ddr_V_WDATA;
    sc_signal< sc_lv<16> > grp_load_bias_scale_fu_140_m_axi_ddr_V_WSTRB;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_WLAST;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_WID;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_WUSER;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARVALID;
    sc_signal< sc_lv<32> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARADDR;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARID;
    sc_signal< sc_lv<32> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARLEN;
    sc_signal< sc_lv<3> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARSIZE;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARBURST;
    sc_signal< sc_lv<2> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARLOCK;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARCACHE;
    sc_signal< sc_lv<3> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARPROT;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARQOS;
    sc_signal< sc_lv<4> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARREGION;
    sc_signal< sc_lv<1> > grp_load_bias_scale_fu_140_m_axi_ddr_V_ARUSER;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_RREADY;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_m_axi_ddr_V_BREADY;
    sc_signal< sc_logic > grp_dataflow_parent_loop_1_fu_108_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_sync_grp_dataflow_parent_loop_1_fu_108_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_dataflow_parent_loop_1_fu_108_ap_done;
    sc_signal< bool > ap_block_state4_on_subcall_done;
    sc_signal< sc_logic > ap_sync_reg_grp_dataflow_parent_loop_1_fu_108_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_dataflow_parent_loop_1_fu_108_ap_done;
    sc_signal< sc_logic > grp_store_output_1_fu_125_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > grp_load_bias_scale_fu_140_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > mul_ln189_fu_164_p0;
    sc_signal< sc_lv<5> > mul_ln189_fu_164_p1;
    sc_signal< sc_lv<9> > mul_ln189_fu_164_p2;
    sc_signal< sc_lv<4> > mul_ln189_1_fu_178_p0;
    sc_signal< sc_lv<9> > mul_ln189_1_fu_178_p1;
    sc_signal< sc_lv<13> > mul_ln189_1_fu_178_p2;
    sc_signal< sc_lv<4> > mul_ln189_2_fu_192_p0;
    sc_signal< sc_lv<13> > mul_ln189_2_fu_192_p1;
    sc_signal< sc_lv<9> > trunc_ln189_fu_198_p1;
    sc_signal< sc_lv<20> > zext_ln182_fu_152_p1;
    sc_signal< sc_lv<20> > shl_ln_fu_202_p3;
    sc_signal< sc_lv<20> > add_ln189_fu_210_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_lv<13> > mul_ln189_1_fu_178_p00;
    sc_signal< sc_lv<13> > mul_ln189_1_fu_178_p10;
    sc_signal< sc_lv<17> > mul_ln189_2_fu_192_p00;
    sc_signal< sc_lv<17> > mul_ln189_2_fu_192_p10;
    sc_signal< sc_lv<9> > mul_ln189_fu_164_p00;
    sc_signal< sc_lv<9> > mul_ln189_fu_164_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<288> ap_const_lv288_lc_1;
    static const sc_lv<1536> ap_const_lv1536_lc_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const4();
    void thread_ap_clk_no_reset_();
    void thread_add_ln189_fu_210_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_state4_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_grp_dataflow_parent_loop_1_fu_108_ap_done();
    void thread_ap_sync_grp_dataflow_parent_loop_1_fu_108_ap_ready();
    void thread_bias_address0();
    void thread_bias_ce0();
    void thread_bias_we0();
    void thread_empty_76_fu_232_p1();
    void thread_empty_77_fu_236_p1();
    void thread_empty_78_fu_240_p1();
    void thread_empty_fu_227_p1();
    void thread_grp_dataflow_parent_loop_1_fu_108_ap_continue();
    void thread_grp_dataflow_parent_loop_1_fu_108_ap_start();
    void thread_grp_load_bias_scale_fu_140_ap_start();
    void thread_grp_store_output_1_fu_125_ap_start();
    void thread_input_V_address0();
    void thread_input_V_ce0();
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
    void thread_mul_ln189_1_fu_178_p0();
    void thread_mul_ln189_1_fu_178_p00();
    void thread_mul_ln189_1_fu_178_p1();
    void thread_mul_ln189_1_fu_178_p10();
    void thread_mul_ln189_1_fu_178_p2();
    void thread_mul_ln189_2_fu_192_p0();
    void thread_mul_ln189_2_fu_192_p00();
    void thread_mul_ln189_2_fu_192_p1();
    void thread_mul_ln189_2_fu_192_p10();
    void thread_mul_ln189_2_fu_192_p2();
    void thread_mul_ln189_fu_164_p0();
    void thread_mul_ln189_fu_164_p00();
    void thread_mul_ln189_fu_164_p1();
    void thread_mul_ln189_fu_164_p10();
    void thread_mul_ln189_fu_164_p2();
    void thread_outbuf_V_address0();
    void thread_outbuf_V_address1();
    void thread_outbuf_V_ce0();
    void thread_outbuf_V_ce1();
    void thread_outbuf_V_d1();
    void thread_outbuf_V_we1();
    void thread_output_V_address1();
    void thread_output_V_ce1();
    void thread_output_V_d1();
    void thread_output_V_we1();
    void thread_scale_address0();
    void thread_scale_ce0();
    void thread_scale_we0();
    void thread_shl_ln_fu_202_p3();
    void thread_trunc_ln189_fu_198_p1();
    void thread_zext_ln182_fu_152_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
