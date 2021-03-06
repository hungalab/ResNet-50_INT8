// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dataflow_parent_loop_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<15> dataflow_parent_loop_1::ap_const_lv15_0 = "000000000000000";
const sc_logic dataflow_parent_loop_1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<288> dataflow_parent_loop_1::ap_const_lv288_lc_1 = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<14> dataflow_parent_loop_1::ap_const_lv14_0 = "00000000000000";
const sc_lv<1536> dataflow_parent_loop_1::ap_const_lv1536_lc_1 = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_logic dataflow_parent_loop_1::ap_const_logic_1 = sc_dt::Log_1;
const bool dataflow_parent_loop_1::ap_const_boolean_1 = true;
const sc_lv<21> dataflow_parent_loop_1::ap_const_lv21_0 = "000000000000000000000";
const sc_lv<21> dataflow_parent_loop_1::ap_const_lv21_1 = "1";
const sc_lv<2> dataflow_parent_loop_1::ap_const_lv2_0 = "00";
const sc_lv<2> dataflow_parent_loop_1::ap_const_lv2_1 = "1";
const sc_lv<1> dataflow_parent_loop_1::ap_const_lv1_0 = "0";
const sc_lv<1> dataflow_parent_loop_1::ap_const_lv1_1 = "1";
const sc_lv<288> dataflow_parent_loop_1::ap_const_lv288_lc_2 = "1";
const sc_lv<1536> dataflow_parent_loop_1::ap_const_lv1536_lc_2 = "1";
const sc_lv<32> dataflow_parent_loop_1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<3> dataflow_parent_loop_1::ap_const_lv3_0 = "000";
const sc_lv<4> dataflow_parent_loop_1::ap_const_lv4_0 = "0000";
const sc_lv<128> dataflow_parent_loop_1::ap_const_lv128_lc_1 = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<16> dataflow_parent_loop_1::ap_const_lv16_0 = "0000000000000000";

dataflow_parent_loop_1::dataflow_parent_loop_1(sc_module_name name) : sc_module(name), mVcdFile(0) {
    dataflow_in_loop_Con_U0 = new dataflow_in_loop_Con("dataflow_in_loop_Con_U0");
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWVALID(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWVALID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWREADY(ap_var_for_const0);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWADDR(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWADDR);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWID(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWLEN(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLEN);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWSIZE(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWSIZE);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWBURST(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWBURST);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWLOCK(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLOCK);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWCACHE(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWCACHE);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWPROT(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWPROT);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWQOS(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWQOS);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWREGION(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWREGION);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_AWUSER(dataflow_in_loop_Con_U0_m_axi_ddr_V_AWUSER);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WVALID(dataflow_in_loop_Con_U0_m_axi_ddr_V_WVALID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WREADY(ap_var_for_const0);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WDATA(dataflow_in_loop_Con_U0_m_axi_ddr_V_WDATA);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WSTRB(dataflow_in_loop_Con_U0_m_axi_ddr_V_WSTRB);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WLAST(dataflow_in_loop_Con_U0_m_axi_ddr_V_WLAST);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WID(dataflow_in_loop_Con_U0_m_axi_ddr_V_WID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_WUSER(dataflow_in_loop_Con_U0_m_axi_ddr_V_WUSER);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARVALID(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARVALID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARREADY(m_axi_ddr_V_ARREADY);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARADDR(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARADDR);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARID(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARLEN(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLEN);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARSIZE(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARSIZE);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARBURST(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARBURST);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARLOCK(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLOCK);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARCACHE(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARCACHE);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARPROT(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARPROT);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARQOS(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARQOS);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARREGION(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARREGION);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_ARUSER(dataflow_in_loop_Con_U0_m_axi_ddr_V_ARUSER);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RVALID(m_axi_ddr_V_RVALID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RREADY(dataflow_in_loop_Con_U0_m_axi_ddr_V_RREADY);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RDATA(m_axi_ddr_V_RDATA);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RLAST(m_axi_ddr_V_RLAST);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RID(m_axi_ddr_V_RID);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RUSER(m_axi_ddr_V_RUSER);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_RRESP(m_axi_ddr_V_RRESP);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_BVALID(ap_var_for_const0);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_BREADY(dataflow_in_loop_Con_U0_m_axi_ddr_V_BREADY);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_BRESP(ap_var_for_const1);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_BID(ap_var_for_const2);
    dataflow_in_loop_Con_U0->m_axi_ddr_V_BUSER(ap_var_for_const2);
    dataflow_in_loop_Con_U0->l_0(dataflow_in_loop_Con_U0_l_0);
    dataflow_in_loop_Con_U0->OFFSET(OFFSET);
    dataflow_in_loop_Con_U0->input_V_address0(dataflow_in_loop_Con_U0_input_V_address0);
    dataflow_in_loop_Con_U0->input_V_ce0(dataflow_in_loop_Con_U0_input_V_ce0);
    dataflow_in_loop_Con_U0->input_V_d0(dataflow_in_loop_Con_U0_input_V_d0);
    dataflow_in_loop_Con_U0->input_V_q0(input_V_q0);
    dataflow_in_loop_Con_U0->input_V_we0(dataflow_in_loop_Con_U0_input_V_we0);
    dataflow_in_loop_Con_U0->input_V_address1(dataflow_in_loop_Con_U0_input_V_address1);
    dataflow_in_loop_Con_U0->input_V_ce1(dataflow_in_loop_Con_U0_input_V_ce1);
    dataflow_in_loop_Con_U0->input_V_d1(dataflow_in_loop_Con_U0_input_V_d1);
    dataflow_in_loop_Con_U0->input_V_q1(ap_var_for_const3);
    dataflow_in_loop_Con_U0->input_V_we1(dataflow_in_loop_Con_U0_input_V_we1);
    dataflow_in_loop_Con_U0->outbuf_V_4_address0(dataflow_in_loop_Con_U0_outbuf_V_4_address0);
    dataflow_in_loop_Con_U0->outbuf_V_4_ce0(dataflow_in_loop_Con_U0_outbuf_V_4_ce0);
    dataflow_in_loop_Con_U0->outbuf_V_4_d0(dataflow_in_loop_Con_U0_outbuf_V_4_d0);
    dataflow_in_loop_Con_U0->outbuf_V_4_q0(outbuf_V_4_q0);
    dataflow_in_loop_Con_U0->outbuf_V_4_we0(dataflow_in_loop_Con_U0_outbuf_V_4_we0);
    dataflow_in_loop_Con_U0->outbuf_V_4_address1(dataflow_in_loop_Con_U0_outbuf_V_4_address1);
    dataflow_in_loop_Con_U0->outbuf_V_4_ce1(dataflow_in_loop_Con_U0_outbuf_V_4_ce1);
    dataflow_in_loop_Con_U0->outbuf_V_4_d1(dataflow_in_loop_Con_U0_outbuf_V_4_d1);
    dataflow_in_loop_Con_U0->outbuf_V_4_q1(ap_var_for_const4);
    dataflow_in_loop_Con_U0->outbuf_V_4_we1(dataflow_in_loop_Con_U0_outbuf_V_4_we1);
    dataflow_in_loop_Con_U0->OSIZE(OSIZE);
    dataflow_in_loop_Con_U0->TO_r(TO_r);
    dataflow_in_loop_Con_U0->TI(TI);
    dataflow_in_loop_Con_U0->S(S);
    dataflow_in_loop_Con_U0->P(P);
    dataflow_in_loop_Con_U0->K(K);
    dataflow_in_loop_Con_U0->ap_clk(ap_clk);
    dataflow_in_loop_Con_U0->ap_rst(ap_rst);
    dataflow_in_loop_Con_U0->l_0_ap_vld(ap_var_for_const0);
    dataflow_in_loop_Con_U0->OFFSET_ap_vld(OFFSET_ap_vld);
    dataflow_in_loop_Con_U0->OSIZE_ap_vld(OSIZE_ap_vld);
    dataflow_in_loop_Con_U0->TO_r_ap_vld(TO_r_ap_vld);
    dataflow_in_loop_Con_U0->TI_ap_vld(TI_ap_vld);
    dataflow_in_loop_Con_U0->S_ap_vld(S_ap_vld);
    dataflow_in_loop_Con_U0->P_ap_vld(P_ap_vld);
    dataflow_in_loop_Con_U0->K_ap_vld(K_ap_vld);
    dataflow_in_loop_Con_U0->ap_start(dataflow_in_loop_Con_U0_ap_start);
    dataflow_in_loop_Con_U0->ap_done(dataflow_in_loop_Con_U0_ap_done);
    dataflow_in_loop_Con_U0->ap_ready(dataflow_in_loop_Con_U0_ap_ready);
    dataflow_in_loop_Con_U0->ap_idle(dataflow_in_loop_Con_U0_ap_idle);
    dataflow_in_loop_Con_U0->ap_continue(dataflow_in_loop_Con_U0_ap_continue);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( dataflow_in_loop_Con_U0_ap_done );
    sensitive << ( loop_dataflow_output_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( dataflow_in_loop_Con_U0_ap_idle );
    sensitive << ( ap_start );
    sensitive << ( loop_dataflow_output_count );

    SC_METHOD(thread_ap_ready);
    sensitive << ( dataflow_in_loop_Con_U0_ap_ready );
    sensitive << ( ap_start );
    sensitive << ( loop_dataflow_input_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_ap_sync_continue);
    sensitive << ( ap_continue );

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( dataflow_in_loop_Con_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( dataflow_in_loop_Con_U0_ap_ready );

    SC_METHOD(thread_bound_minus_1);
    sensitive << ( mul_ln204_2 );

    SC_METHOD(thread_dataflow_in_loop_Con_U0_ap_continue);
    sensitive << ( ap_continue );
    sensitive << ( loop_dataflow_output_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_dataflow_in_loop_Con_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_dataflow_in_loop_Con_U0_l_0);
    sensitive << ( loop_dataflow_input_count );

    SC_METHOD(thread_dataflow_in_loop_Con_U0_start_full_n);

    SC_METHOD(thread_dataflow_in_loop_Con_U0_start_write);

    SC_METHOD(thread_input_V_address0);
    sensitive << ( dataflow_in_loop_Con_U0_input_V_address0 );

    SC_METHOD(thread_input_V_address1);

    SC_METHOD(thread_input_V_ce0);
    sensitive << ( dataflow_in_loop_Con_U0_input_V_ce0 );

    SC_METHOD(thread_input_V_ce1);

    SC_METHOD(thread_input_V_d0);

    SC_METHOD(thread_input_V_d1);

    SC_METHOD(thread_input_V_we0);

    SC_METHOD(thread_input_V_we1);

    SC_METHOD(thread_m_axi_ddr_V_ARADDR);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARADDR );

    SC_METHOD(thread_m_axi_ddr_V_ARBURST);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARBURST );

    SC_METHOD(thread_m_axi_ddr_V_ARCACHE);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARCACHE );

    SC_METHOD(thread_m_axi_ddr_V_ARID);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARID );

    SC_METHOD(thread_m_axi_ddr_V_ARLEN);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLEN );

    SC_METHOD(thread_m_axi_ddr_V_ARLOCK);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLOCK );

    SC_METHOD(thread_m_axi_ddr_V_ARPROT);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARPROT );

    SC_METHOD(thread_m_axi_ddr_V_ARQOS);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARQOS );

    SC_METHOD(thread_m_axi_ddr_V_ARREGION);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARREGION );

    SC_METHOD(thread_m_axi_ddr_V_ARSIZE);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARSIZE );

    SC_METHOD(thread_m_axi_ddr_V_ARUSER);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARUSER );

    SC_METHOD(thread_m_axi_ddr_V_ARVALID);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_ARVALID );

    SC_METHOD(thread_m_axi_ddr_V_AWADDR);

    SC_METHOD(thread_m_axi_ddr_V_AWBURST);

    SC_METHOD(thread_m_axi_ddr_V_AWCACHE);

    SC_METHOD(thread_m_axi_ddr_V_AWID);

    SC_METHOD(thread_m_axi_ddr_V_AWLEN);

    SC_METHOD(thread_m_axi_ddr_V_AWLOCK);

    SC_METHOD(thread_m_axi_ddr_V_AWPROT);

    SC_METHOD(thread_m_axi_ddr_V_AWQOS);

    SC_METHOD(thread_m_axi_ddr_V_AWREGION);

    SC_METHOD(thread_m_axi_ddr_V_AWSIZE);

    SC_METHOD(thread_m_axi_ddr_V_AWUSER);

    SC_METHOD(thread_m_axi_ddr_V_AWVALID);

    SC_METHOD(thread_m_axi_ddr_V_BREADY);

    SC_METHOD(thread_m_axi_ddr_V_RREADY);
    sensitive << ( dataflow_in_loop_Con_U0_m_axi_ddr_V_RREADY );

    SC_METHOD(thread_m_axi_ddr_V_WDATA);

    SC_METHOD(thread_m_axi_ddr_V_WID);

    SC_METHOD(thread_m_axi_ddr_V_WLAST);

    SC_METHOD(thread_m_axi_ddr_V_WSTRB);

    SC_METHOD(thread_m_axi_ddr_V_WUSER);

    SC_METHOD(thread_m_axi_ddr_V_WVALID);

    SC_METHOD(thread_outbuf_V_4_address0);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_address0 );

    SC_METHOD(thread_outbuf_V_4_address1);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_address1 );

    SC_METHOD(thread_outbuf_V_4_ce0);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_ce0 );

    SC_METHOD(thread_outbuf_V_4_ce1);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_ce1 );

    SC_METHOD(thread_outbuf_V_4_d0);

    SC_METHOD(thread_outbuf_V_4_d1);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_d1 );

    SC_METHOD(thread_outbuf_V_4_we0);

    SC_METHOD(thread_outbuf_V_4_we1);
    sensitive << ( dataflow_in_loop_Con_U0_outbuf_V_4_we1 );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const3);

    SC_THREAD(thread_ap_var_for_const4);

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const2);

    loop_dataflow_input_count = "000000000000000000000";
    loop_dataflow_output_count = "000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dataflow_parent_loop_1_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, mul_ln204_2, "(port)mul_ln204_2");
    sc_trace(mVcdFile, input_V_address0, "(port)input_V_address0");
    sc_trace(mVcdFile, input_V_ce0, "(port)input_V_ce0");
    sc_trace(mVcdFile, input_V_d0, "(port)input_V_d0");
    sc_trace(mVcdFile, input_V_q0, "(port)input_V_q0");
    sc_trace(mVcdFile, input_V_we0, "(port)input_V_we0");
    sc_trace(mVcdFile, input_V_address1, "(port)input_V_address1");
    sc_trace(mVcdFile, input_V_ce1, "(port)input_V_ce1");
    sc_trace(mVcdFile, input_V_d1, "(port)input_V_d1");
    sc_trace(mVcdFile, input_V_q1, "(port)input_V_q1");
    sc_trace(mVcdFile, input_V_we1, "(port)input_V_we1");
    sc_trace(mVcdFile, outbuf_V_4_address0, "(port)outbuf_V_4_address0");
    sc_trace(mVcdFile, outbuf_V_4_ce0, "(port)outbuf_V_4_ce0");
    sc_trace(mVcdFile, outbuf_V_4_d0, "(port)outbuf_V_4_d0");
    sc_trace(mVcdFile, outbuf_V_4_q0, "(port)outbuf_V_4_q0");
    sc_trace(mVcdFile, outbuf_V_4_we0, "(port)outbuf_V_4_we0");
    sc_trace(mVcdFile, outbuf_V_4_address1, "(port)outbuf_V_4_address1");
    sc_trace(mVcdFile, outbuf_V_4_ce1, "(port)outbuf_V_4_ce1");
    sc_trace(mVcdFile, outbuf_V_4_d1, "(port)outbuf_V_4_d1");
    sc_trace(mVcdFile, outbuf_V_4_q1, "(port)outbuf_V_4_q1");
    sc_trace(mVcdFile, outbuf_V_4_we1, "(port)outbuf_V_4_we1");
    sc_trace(mVcdFile, m_axi_ddr_V_AWVALID, "(port)m_axi_ddr_V_AWVALID");
    sc_trace(mVcdFile, m_axi_ddr_V_AWREADY, "(port)m_axi_ddr_V_AWREADY");
    sc_trace(mVcdFile, m_axi_ddr_V_AWADDR, "(port)m_axi_ddr_V_AWADDR");
    sc_trace(mVcdFile, m_axi_ddr_V_AWID, "(port)m_axi_ddr_V_AWID");
    sc_trace(mVcdFile, m_axi_ddr_V_AWLEN, "(port)m_axi_ddr_V_AWLEN");
    sc_trace(mVcdFile, m_axi_ddr_V_AWSIZE, "(port)m_axi_ddr_V_AWSIZE");
    sc_trace(mVcdFile, m_axi_ddr_V_AWBURST, "(port)m_axi_ddr_V_AWBURST");
    sc_trace(mVcdFile, m_axi_ddr_V_AWLOCK, "(port)m_axi_ddr_V_AWLOCK");
    sc_trace(mVcdFile, m_axi_ddr_V_AWCACHE, "(port)m_axi_ddr_V_AWCACHE");
    sc_trace(mVcdFile, m_axi_ddr_V_AWPROT, "(port)m_axi_ddr_V_AWPROT");
    sc_trace(mVcdFile, m_axi_ddr_V_AWQOS, "(port)m_axi_ddr_V_AWQOS");
    sc_trace(mVcdFile, m_axi_ddr_V_AWREGION, "(port)m_axi_ddr_V_AWREGION");
    sc_trace(mVcdFile, m_axi_ddr_V_AWUSER, "(port)m_axi_ddr_V_AWUSER");
    sc_trace(mVcdFile, m_axi_ddr_V_WVALID, "(port)m_axi_ddr_V_WVALID");
    sc_trace(mVcdFile, m_axi_ddr_V_WREADY, "(port)m_axi_ddr_V_WREADY");
    sc_trace(mVcdFile, m_axi_ddr_V_WDATA, "(port)m_axi_ddr_V_WDATA");
    sc_trace(mVcdFile, m_axi_ddr_V_WSTRB, "(port)m_axi_ddr_V_WSTRB");
    sc_trace(mVcdFile, m_axi_ddr_V_WLAST, "(port)m_axi_ddr_V_WLAST");
    sc_trace(mVcdFile, m_axi_ddr_V_WID, "(port)m_axi_ddr_V_WID");
    sc_trace(mVcdFile, m_axi_ddr_V_WUSER, "(port)m_axi_ddr_V_WUSER");
    sc_trace(mVcdFile, m_axi_ddr_V_ARVALID, "(port)m_axi_ddr_V_ARVALID");
    sc_trace(mVcdFile, m_axi_ddr_V_ARREADY, "(port)m_axi_ddr_V_ARREADY");
    sc_trace(mVcdFile, m_axi_ddr_V_ARADDR, "(port)m_axi_ddr_V_ARADDR");
    sc_trace(mVcdFile, m_axi_ddr_V_ARID, "(port)m_axi_ddr_V_ARID");
    sc_trace(mVcdFile, m_axi_ddr_V_ARLEN, "(port)m_axi_ddr_V_ARLEN");
    sc_trace(mVcdFile, m_axi_ddr_V_ARSIZE, "(port)m_axi_ddr_V_ARSIZE");
    sc_trace(mVcdFile, m_axi_ddr_V_ARBURST, "(port)m_axi_ddr_V_ARBURST");
    sc_trace(mVcdFile, m_axi_ddr_V_ARLOCK, "(port)m_axi_ddr_V_ARLOCK");
    sc_trace(mVcdFile, m_axi_ddr_V_ARCACHE, "(port)m_axi_ddr_V_ARCACHE");
    sc_trace(mVcdFile, m_axi_ddr_V_ARPROT, "(port)m_axi_ddr_V_ARPROT");
    sc_trace(mVcdFile, m_axi_ddr_V_ARQOS, "(port)m_axi_ddr_V_ARQOS");
    sc_trace(mVcdFile, m_axi_ddr_V_ARREGION, "(port)m_axi_ddr_V_ARREGION");
    sc_trace(mVcdFile, m_axi_ddr_V_ARUSER, "(port)m_axi_ddr_V_ARUSER");
    sc_trace(mVcdFile, m_axi_ddr_V_RVALID, "(port)m_axi_ddr_V_RVALID");
    sc_trace(mVcdFile, m_axi_ddr_V_RREADY, "(port)m_axi_ddr_V_RREADY");
    sc_trace(mVcdFile, m_axi_ddr_V_RDATA, "(port)m_axi_ddr_V_RDATA");
    sc_trace(mVcdFile, m_axi_ddr_V_RLAST, "(port)m_axi_ddr_V_RLAST");
    sc_trace(mVcdFile, m_axi_ddr_V_RID, "(port)m_axi_ddr_V_RID");
    sc_trace(mVcdFile, m_axi_ddr_V_RUSER, "(port)m_axi_ddr_V_RUSER");
    sc_trace(mVcdFile, m_axi_ddr_V_RRESP, "(port)m_axi_ddr_V_RRESP");
    sc_trace(mVcdFile, m_axi_ddr_V_BVALID, "(port)m_axi_ddr_V_BVALID");
    sc_trace(mVcdFile, m_axi_ddr_V_BREADY, "(port)m_axi_ddr_V_BREADY");
    sc_trace(mVcdFile, m_axi_ddr_V_BRESP, "(port)m_axi_ddr_V_BRESP");
    sc_trace(mVcdFile, m_axi_ddr_V_BID, "(port)m_axi_ddr_V_BID");
    sc_trace(mVcdFile, m_axi_ddr_V_BUSER, "(port)m_axi_ddr_V_BUSER");
    sc_trace(mVcdFile, OFFSET, "(port)OFFSET");
    sc_trace(mVcdFile, OSIZE, "(port)OSIZE");
    sc_trace(mVcdFile, TO_r, "(port)TO_r");
    sc_trace(mVcdFile, TI, "(port)TI");
    sc_trace(mVcdFile, S, "(port)S");
    sc_trace(mVcdFile, P, "(port)P");
    sc_trace(mVcdFile, K, "(port)K");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, OFFSET_ap_vld, "(port)OFFSET_ap_vld");
    sc_trace(mVcdFile, OSIZE_ap_vld, "(port)OSIZE_ap_vld");
    sc_trace(mVcdFile, TO_r_ap_vld, "(port)TO_r_ap_vld");
    sc_trace(mVcdFile, TI_ap_vld, "(port)TI_ap_vld");
    sc_trace(mVcdFile, S_ap_vld, "(port)S_ap_vld");
    sc_trace(mVcdFile, P_ap_vld, "(port)P_ap_vld");
    sc_trace(mVcdFile, K_ap_vld, "(port)K_ap_vld");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWVALID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWVALID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWADDR, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWADDR");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLEN, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLEN");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWSIZE, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWBURST, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWBURST");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLOCK, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWCACHE, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWPROT, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWPROT");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWQOS, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWQOS");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWREGION, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWREGION");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_AWUSER, "dataflow_in_loop_Con_U0_m_axi_ddr_V_AWUSER");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WVALID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WVALID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WDATA, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WDATA");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WSTRB, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WSTRB");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WLAST, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WLAST");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_WUSER, "dataflow_in_loop_Con_U0_m_axi_ddr_V_WUSER");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARVALID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARVALID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARADDR, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARADDR");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARID, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARID");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLEN, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLEN");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARSIZE, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARBURST, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARBURST");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLOCK, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARCACHE, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARPROT, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARPROT");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARQOS, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARQOS");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARREGION, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARREGION");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_ARUSER, "dataflow_in_loop_Con_U0_m_axi_ddr_V_ARUSER");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_RREADY, "dataflow_in_loop_Con_U0_m_axi_ddr_V_RREADY");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_m_axi_ddr_V_BREADY, "dataflow_in_loop_Con_U0_m_axi_ddr_V_BREADY");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_l_0, "dataflow_in_loop_Con_U0_l_0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_address0, "dataflow_in_loop_Con_U0_input_V_address0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_ce0, "dataflow_in_loop_Con_U0_input_V_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_d0, "dataflow_in_loop_Con_U0_input_V_d0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_we0, "dataflow_in_loop_Con_U0_input_V_we0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_address1, "dataflow_in_loop_Con_U0_input_V_address1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_ce1, "dataflow_in_loop_Con_U0_input_V_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_d1, "dataflow_in_loop_Con_U0_input_V_d1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_input_V_we1, "dataflow_in_loop_Con_U0_input_V_we1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_address0, "dataflow_in_loop_Con_U0_outbuf_V_4_address0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_ce0, "dataflow_in_loop_Con_U0_outbuf_V_4_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_d0, "dataflow_in_loop_Con_U0_outbuf_V_4_d0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_we0, "dataflow_in_loop_Con_U0_outbuf_V_4_we0");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_address1, "dataflow_in_loop_Con_U0_outbuf_V_4_address1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_ce1, "dataflow_in_loop_Con_U0_outbuf_V_4_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_d1, "dataflow_in_loop_Con_U0_outbuf_V_4_d1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_outbuf_V_4_we1, "dataflow_in_loop_Con_U0_outbuf_V_4_we1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_ap_start, "dataflow_in_loop_Con_U0_ap_start");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_ap_done, "dataflow_in_loop_Con_U0_ap_done");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_ap_ready, "dataflow_in_loop_Con_U0_ap_ready");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_ap_idle, "dataflow_in_loop_Con_U0_ap_idle");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_ap_continue, "dataflow_in_loop_Con_U0_ap_continue");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, loop_dataflow_input_count, "loop_dataflow_input_count");
    sc_trace(mVcdFile, loop_dataflow_output_count, "loop_dataflow_output_count");
    sc_trace(mVcdFile, bound_minus_1, "bound_minus_1");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_start_full_n, "dataflow_in_loop_Con_U0_start_full_n");
    sc_trace(mVcdFile, dataflow_in_loop_Con_U0_start_write, "dataflow_in_loop_Con_U0_start_write");
#endif

    }
}

dataflow_parent_loop_1::~dataflow_parent_loop_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete dataflow_in_loop_Con_U0;
}

void dataflow_parent_loop_1::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_ap_var_for_const3() {
    ap_var_for_const3 = ap_const_lv288_lc_1;
}

void dataflow_parent_loop_1::thread_ap_var_for_const4() {
    ap_var_for_const4 = ap_const_lv1536_lc_1;
}

void dataflow_parent_loop_1::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv2_0;
}

void dataflow_parent_loop_1::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv1_0;
}

void dataflow_parent_loop_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_input_count = ap_const_lv21_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_ready.read(), ap_const_logic_1) && 
             !esl_seteq<1,21,21>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = (!loop_dataflow_input_count.read().is_01() || !ap_const_lv21_1.is_01())? sc_lv<21>(): (sc_biguint<21>(loop_dataflow_input_count.read()) + sc_biguint<21>(ap_const_lv21_1));
        } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_ready.read(), ap_const_logic_1) && 
                    esl_seteq<1,21,21>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = ap_const_lv21_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_output_count = ap_const_lv21_0;
    } else {
        if ((esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_continue.read(), ap_const_logic_1) && 
             !esl_seteq<1,21,21>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = (!loop_dataflow_output_count.read().is_01() || !ap_const_lv21_1.is_01())? sc_lv<21>(): (sc_biguint<21>(loop_dataflow_output_count.read()) + sc_biguint<21>(ap_const_lv21_1));
        } else if ((esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_continue.read(), ap_const_logic_1) && 
                    esl_seteq<1,21,21>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = ap_const_lv21_0;
        }
    }
}

void dataflow_parent_loop_1::thread_ap_done() {
    if ((esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,21,21>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dataflow_parent_loop_1::thread_ap_idle() {
    if ((esl_seteq<1,21,21>(loop_dataflow_output_count.read(), ap_const_lv21_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_idle.read(), ap_const_logic_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dataflow_parent_loop_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(dataflow_in_loop_Con_U0_ap_ready.read(), ap_const_logic_1) && 
         esl_seteq<1,21,21>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dataflow_parent_loop_1::thread_ap_sync_continue() {
    ap_sync_continue = ap_continue.read();
}

void dataflow_parent_loop_1::thread_ap_sync_done() {
    ap_sync_done = dataflow_in_loop_Con_U0_ap_done.read();
}

void dataflow_parent_loop_1::thread_ap_sync_ready() {
    ap_sync_ready = dataflow_in_loop_Con_U0_ap_ready.read();
}

void dataflow_parent_loop_1::thread_bound_minus_1() {
    bound_minus_1 = (!mul_ln204_2.read().is_01() || !ap_const_lv21_1.is_01())? sc_lv<21>(): (sc_biguint<21>(mul_ln204_2.read()) - sc_biguint<21>(ap_const_lv21_1));
}

void dataflow_parent_loop_1::thread_dataflow_in_loop_Con_U0_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read()) || 
         !esl_seteq<1,21,21>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
        dataflow_in_loop_Con_U0_ap_continue = ap_const_logic_1;
    } else {
        dataflow_in_loop_Con_U0_ap_continue = ap_const_logic_0;
    }
}

void dataflow_parent_loop_1::thread_dataflow_in_loop_Con_U0_ap_start() {
    dataflow_in_loop_Con_U0_ap_start = ap_start.read();
}

void dataflow_parent_loop_1::thread_dataflow_in_loop_Con_U0_l_0() {
    dataflow_in_loop_Con_U0_l_0 =  (sc_lv<13>) (loop_dataflow_input_count.read());
}

void dataflow_parent_loop_1::thread_dataflow_in_loop_Con_U0_start_full_n() {
    dataflow_in_loop_Con_U0_start_full_n = ap_const_logic_1;
}

void dataflow_parent_loop_1::thread_dataflow_in_loop_Con_U0_start_write() {
    dataflow_in_loop_Con_U0_start_write = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_input_V_address0() {
    input_V_address0 = dataflow_in_loop_Con_U0_input_V_address0.read();
}

void dataflow_parent_loop_1::thread_input_V_address1() {
    input_V_address1 = ap_const_lv15_0;
}

void dataflow_parent_loop_1::thread_input_V_ce0() {
    input_V_ce0 = dataflow_in_loop_Con_U0_input_V_ce0.read();
}

void dataflow_parent_loop_1::thread_input_V_ce1() {
    input_V_ce1 = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_input_V_d0() {
    input_V_d0 = ap_const_lv288_lc_1;
}

void dataflow_parent_loop_1::thread_input_V_d1() {
    input_V_d1 = ap_const_lv288_lc_1;
}

void dataflow_parent_loop_1::thread_input_V_we0() {
    input_V_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_input_V_we1() {
    input_V_we1 = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARADDR() {
    m_axi_ddr_V_ARADDR = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARADDR.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARBURST() {
    m_axi_ddr_V_ARBURST = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARBURST.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARCACHE() {
    m_axi_ddr_V_ARCACHE = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARCACHE.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARID() {
    m_axi_ddr_V_ARID = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARID.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARLEN() {
    m_axi_ddr_V_ARLEN = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLEN.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARLOCK() {
    m_axi_ddr_V_ARLOCK = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARLOCK.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARPROT() {
    m_axi_ddr_V_ARPROT = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARPROT.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARQOS() {
    m_axi_ddr_V_ARQOS = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARQOS.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARREGION() {
    m_axi_ddr_V_ARREGION = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARREGION.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARSIZE() {
    m_axi_ddr_V_ARSIZE = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARSIZE.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARUSER() {
    m_axi_ddr_V_ARUSER = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARUSER.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_ARVALID() {
    m_axi_ddr_V_ARVALID = dataflow_in_loop_Con_U0_m_axi_ddr_V_ARVALID.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWADDR() {
    m_axi_ddr_V_AWADDR = ap_const_lv32_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWBURST() {
    m_axi_ddr_V_AWBURST = ap_const_lv2_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWCACHE() {
    m_axi_ddr_V_AWCACHE = ap_const_lv4_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWID() {
    m_axi_ddr_V_AWID = ap_const_lv1_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWLEN() {
    m_axi_ddr_V_AWLEN = ap_const_lv32_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWLOCK() {
    m_axi_ddr_V_AWLOCK = ap_const_lv2_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWPROT() {
    m_axi_ddr_V_AWPROT = ap_const_lv3_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWQOS() {
    m_axi_ddr_V_AWQOS = ap_const_lv4_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWREGION() {
    m_axi_ddr_V_AWREGION = ap_const_lv4_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWSIZE() {
    m_axi_ddr_V_AWSIZE = ap_const_lv3_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWUSER() {
    m_axi_ddr_V_AWUSER = ap_const_lv1_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_AWVALID() {
    m_axi_ddr_V_AWVALID = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_BREADY() {
    m_axi_ddr_V_BREADY = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_RREADY() {
    m_axi_ddr_V_RREADY = dataflow_in_loop_Con_U0_m_axi_ddr_V_RREADY.read();
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WDATA() {
    m_axi_ddr_V_WDATA = ap_const_lv128_lc_1;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WID() {
    m_axi_ddr_V_WID = ap_const_lv1_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WLAST() {
    m_axi_ddr_V_WLAST = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WSTRB() {
    m_axi_ddr_V_WSTRB = ap_const_lv16_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WUSER() {
    m_axi_ddr_V_WUSER = ap_const_lv1_0;
}

void dataflow_parent_loop_1::thread_m_axi_ddr_V_WVALID() {
    m_axi_ddr_V_WVALID = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_outbuf_V_4_address0() {
    outbuf_V_4_address0 = dataflow_in_loop_Con_U0_outbuf_V_4_address0.read();
}

void dataflow_parent_loop_1::thread_outbuf_V_4_address1() {
    outbuf_V_4_address1 = dataflow_in_loop_Con_U0_outbuf_V_4_address1.read();
}

void dataflow_parent_loop_1::thread_outbuf_V_4_ce0() {
    outbuf_V_4_ce0 = dataflow_in_loop_Con_U0_outbuf_V_4_ce0.read();
}

void dataflow_parent_loop_1::thread_outbuf_V_4_ce1() {
    outbuf_V_4_ce1 = dataflow_in_loop_Con_U0_outbuf_V_4_ce1.read();
}

void dataflow_parent_loop_1::thread_outbuf_V_4_d0() {
    outbuf_V_4_d0 = ap_const_lv1536_lc_1;
}

void dataflow_parent_loop_1::thread_outbuf_V_4_d1() {
    outbuf_V_4_d1 = dataflow_in_loop_Con_U0_outbuf_V_4_d1.read();
}

void dataflow_parent_loop_1::thread_outbuf_V_4_we0() {
    outbuf_V_4_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_1::thread_outbuf_V_4_we1() {
    outbuf_V_4_we1 = dataflow_in_loop_Con_U0_outbuf_V_4_we1.read();
}

}

