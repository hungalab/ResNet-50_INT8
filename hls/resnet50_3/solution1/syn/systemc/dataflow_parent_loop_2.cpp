// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dataflow_parent_loop_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<4> dataflow_parent_loop_2::ap_const_lv4_0 = "0000";
const sc_logic dataflow_parent_loop_2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1024> dataflow_parent_loop_2::ap_const_lv1024_lc_1 = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<10> dataflow_parent_loop_2::ap_const_lv10_0 = "0000000000";
const sc_lv<32> dataflow_parent_loop_2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_logic dataflow_parent_loop_2::ap_const_logic_1 = sc_dt::Log_1;
const bool dataflow_parent_loop_2::ap_const_boolean_1 = true;
const sc_lv<10> dataflow_parent_loop_2::ap_const_lv10_3E8 = "1111101000";
const sc_lv<10> dataflow_parent_loop_2::ap_const_lv10_1 = "1";
const sc_lv<2> dataflow_parent_loop_2::ap_const_lv2_0 = "00";
const sc_lv<2> dataflow_parent_loop_2::ap_const_lv2_1 = "1";
const sc_lv<1> dataflow_parent_loop_2::ap_const_lv1_0 = "0";
const sc_lv<1> dataflow_parent_loop_2::ap_const_lv1_1 = "1";
const sc_lv<1024> dataflow_parent_loop_2::ap_const_lv1024_lc_2 = "1";
const sc_lv<32> dataflow_parent_loop_2::ap_const_lv32_1 = "1";
const sc_lv<3> dataflow_parent_loop_2::ap_const_lv3_0 = "000";
const sc_lv<128> dataflow_parent_loop_2::ap_const_lv128_lc_1 = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<16> dataflow_parent_loop_2::ap_const_lv16_0 = "0000000000000000";

dataflow_parent_loop_2::dataflow_parent_loop_2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    dataflow_in_loop_U0 = new dataflow_in_loop("dataflow_in_loop_U0");
    dataflow_in_loop_U0->ap_clk(ap_clk);
    dataflow_in_loop_U0->ap_rst(ap_rst);
    dataflow_in_loop_U0->m_axi_ddr_V_AWVALID(dataflow_in_loop_U0_m_axi_ddr_V_AWVALID);
    dataflow_in_loop_U0->m_axi_ddr_V_AWREADY(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_ddr_V_AWADDR(dataflow_in_loop_U0_m_axi_ddr_V_AWADDR);
    dataflow_in_loop_U0->m_axi_ddr_V_AWID(dataflow_in_loop_U0_m_axi_ddr_V_AWID);
    dataflow_in_loop_U0->m_axi_ddr_V_AWLEN(dataflow_in_loop_U0_m_axi_ddr_V_AWLEN);
    dataflow_in_loop_U0->m_axi_ddr_V_AWSIZE(dataflow_in_loop_U0_m_axi_ddr_V_AWSIZE);
    dataflow_in_loop_U0->m_axi_ddr_V_AWBURST(dataflow_in_loop_U0_m_axi_ddr_V_AWBURST);
    dataflow_in_loop_U0->m_axi_ddr_V_AWLOCK(dataflow_in_loop_U0_m_axi_ddr_V_AWLOCK);
    dataflow_in_loop_U0->m_axi_ddr_V_AWCACHE(dataflow_in_loop_U0_m_axi_ddr_V_AWCACHE);
    dataflow_in_loop_U0->m_axi_ddr_V_AWPROT(dataflow_in_loop_U0_m_axi_ddr_V_AWPROT);
    dataflow_in_loop_U0->m_axi_ddr_V_AWQOS(dataflow_in_loop_U0_m_axi_ddr_V_AWQOS);
    dataflow_in_loop_U0->m_axi_ddr_V_AWREGION(dataflow_in_loop_U0_m_axi_ddr_V_AWREGION);
    dataflow_in_loop_U0->m_axi_ddr_V_AWUSER(dataflow_in_loop_U0_m_axi_ddr_V_AWUSER);
    dataflow_in_loop_U0->m_axi_ddr_V_WVALID(dataflow_in_loop_U0_m_axi_ddr_V_WVALID);
    dataflow_in_loop_U0->m_axi_ddr_V_WREADY(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_ddr_V_WDATA(dataflow_in_loop_U0_m_axi_ddr_V_WDATA);
    dataflow_in_loop_U0->m_axi_ddr_V_WSTRB(dataflow_in_loop_U0_m_axi_ddr_V_WSTRB);
    dataflow_in_loop_U0->m_axi_ddr_V_WLAST(dataflow_in_loop_U0_m_axi_ddr_V_WLAST);
    dataflow_in_loop_U0->m_axi_ddr_V_WID(dataflow_in_loop_U0_m_axi_ddr_V_WID);
    dataflow_in_loop_U0->m_axi_ddr_V_WUSER(dataflow_in_loop_U0_m_axi_ddr_V_WUSER);
    dataflow_in_loop_U0->m_axi_ddr_V_ARVALID(dataflow_in_loop_U0_m_axi_ddr_V_ARVALID);
    dataflow_in_loop_U0->m_axi_ddr_V_ARREADY(m_axi_ddr_V_ARREADY);
    dataflow_in_loop_U0->m_axi_ddr_V_ARADDR(dataflow_in_loop_U0_m_axi_ddr_V_ARADDR);
    dataflow_in_loop_U0->m_axi_ddr_V_ARID(dataflow_in_loop_U0_m_axi_ddr_V_ARID);
    dataflow_in_loop_U0->m_axi_ddr_V_ARLEN(dataflow_in_loop_U0_m_axi_ddr_V_ARLEN);
    dataflow_in_loop_U0->m_axi_ddr_V_ARSIZE(dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE);
    dataflow_in_loop_U0->m_axi_ddr_V_ARBURST(dataflow_in_loop_U0_m_axi_ddr_V_ARBURST);
    dataflow_in_loop_U0->m_axi_ddr_V_ARLOCK(dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK);
    dataflow_in_loop_U0->m_axi_ddr_V_ARCACHE(dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE);
    dataflow_in_loop_U0->m_axi_ddr_V_ARPROT(dataflow_in_loop_U0_m_axi_ddr_V_ARPROT);
    dataflow_in_loop_U0->m_axi_ddr_V_ARQOS(dataflow_in_loop_U0_m_axi_ddr_V_ARQOS);
    dataflow_in_loop_U0->m_axi_ddr_V_ARREGION(dataflow_in_loop_U0_m_axi_ddr_V_ARREGION);
    dataflow_in_loop_U0->m_axi_ddr_V_ARUSER(dataflow_in_loop_U0_m_axi_ddr_V_ARUSER);
    dataflow_in_loop_U0->m_axi_ddr_V_RVALID(m_axi_ddr_V_RVALID);
    dataflow_in_loop_U0->m_axi_ddr_V_RREADY(dataflow_in_loop_U0_m_axi_ddr_V_RREADY);
    dataflow_in_loop_U0->m_axi_ddr_V_RDATA(m_axi_ddr_V_RDATA);
    dataflow_in_loop_U0->m_axi_ddr_V_RLAST(m_axi_ddr_V_RLAST);
    dataflow_in_loop_U0->m_axi_ddr_V_RID(m_axi_ddr_V_RID);
    dataflow_in_loop_U0->m_axi_ddr_V_RUSER(m_axi_ddr_V_RUSER);
    dataflow_in_loop_U0->m_axi_ddr_V_RRESP(m_axi_ddr_V_RRESP);
    dataflow_in_loop_U0->m_axi_ddr_V_BVALID(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_ddr_V_BREADY(dataflow_in_loop_U0_m_axi_ddr_V_BREADY);
    dataflow_in_loop_U0->m_axi_ddr_V_BRESP(ap_var_for_const1);
    dataflow_in_loop_U0->m_axi_ddr_V_BID(ap_var_for_const2);
    dataflow_in_loop_U0->m_axi_ddr_V_BUSER(ap_var_for_const2);
    dataflow_in_loop_U0->och_0(loop_dataflow_input_count);
    dataflow_in_loop_U0->input_V_address0(dataflow_in_loop_U0_input_V_address0);
    dataflow_in_loop_U0->input_V_ce0(dataflow_in_loop_U0_input_V_ce0);
    dataflow_in_loop_U0->input_V_d0(dataflow_in_loop_U0_input_V_d0);
    dataflow_in_loop_U0->input_V_q0(input_V_q0);
    dataflow_in_loop_U0->input_V_we0(dataflow_in_loop_U0_input_V_we0);
    dataflow_in_loop_U0->input_V_address1(dataflow_in_loop_U0_input_V_address1);
    dataflow_in_loop_U0->input_V_ce1(dataflow_in_loop_U0_input_V_ce1);
    dataflow_in_loop_U0->input_V_d1(dataflow_in_loop_U0_input_V_d1);
    dataflow_in_loop_U0->input_V_q1(ap_var_for_const3);
    dataflow_in_loop_U0->input_V_we1(dataflow_in_loop_U0_input_V_we1);
    dataflow_in_loop_U0->bias_address0(dataflow_in_loop_U0_bias_address0);
    dataflow_in_loop_U0->bias_ce0(dataflow_in_loop_U0_bias_ce0);
    dataflow_in_loop_U0->bias_d0(dataflow_in_loop_U0_bias_d0);
    dataflow_in_loop_U0->bias_q0(bias_q0);
    dataflow_in_loop_U0->bias_we0(dataflow_in_loop_U0_bias_we0);
    dataflow_in_loop_U0->bias_address1(dataflow_in_loop_U0_bias_address1);
    dataflow_in_loop_U0->bias_ce1(dataflow_in_loop_U0_bias_ce1);
    dataflow_in_loop_U0->bias_d1(dataflow_in_loop_U0_bias_d1);
    dataflow_in_loop_U0->bias_q1(ap_var_for_const4);
    dataflow_in_loop_U0->bias_we1(dataflow_in_loop_U0_bias_we1);
    dataflow_in_loop_U0->scale_address0(dataflow_in_loop_U0_scale_address0);
    dataflow_in_loop_U0->scale_ce0(dataflow_in_loop_U0_scale_ce0);
    dataflow_in_loop_U0->scale_d0(dataflow_in_loop_U0_scale_d0);
    dataflow_in_loop_U0->scale_q0(scale_q0);
    dataflow_in_loop_U0->scale_we0(dataflow_in_loop_U0_scale_we0);
    dataflow_in_loop_U0->scale_address1(dataflow_in_loop_U0_scale_address1);
    dataflow_in_loop_U0->scale_ce1(dataflow_in_loop_U0_scale_ce1);
    dataflow_in_loop_U0->scale_d1(dataflow_in_loop_U0_scale_d1);
    dataflow_in_loop_U0->scale_q1(ap_var_for_const4);
    dataflow_in_loop_U0->scale_we1(dataflow_in_loop_U0_scale_we1);
    dataflow_in_loop_U0->output_r_address0(dataflow_in_loop_U0_output_r_address0);
    dataflow_in_loop_U0->output_r_ce0(dataflow_in_loop_U0_output_r_ce0);
    dataflow_in_loop_U0->output_r_d0(dataflow_in_loop_U0_output_r_d0);
    dataflow_in_loop_U0->output_r_q0(ap_var_for_const4);
    dataflow_in_loop_U0->output_r_we0(dataflow_in_loop_U0_output_r_we0);
    dataflow_in_loop_U0->och_0_ap_vld(ap_var_for_const0);
    dataflow_in_loop_U0->ap_start(dataflow_in_loop_U0_ap_start);
    dataflow_in_loop_U0->ap_done(dataflow_in_loop_U0_ap_done);
    dataflow_in_loop_U0->ap_ready(dataflow_in_loop_U0_ap_ready);
    dataflow_in_loop_U0->ap_idle(dataflow_in_loop_U0_ap_idle);
    dataflow_in_loop_U0->ap_continue(dataflow_in_loop_U0_ap_continue);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( dataflow_in_loop_U0_ap_done );
    sensitive << ( loop_dataflow_output_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( dataflow_in_loop_U0_ap_idle );
    sensitive << ( ap_start );
    sensitive << ( loop_dataflow_output_count );

    SC_METHOD(thread_ap_ready);
    sensitive << ( dataflow_in_loop_U0_ap_ready );
    sensitive << ( ap_start );
    sensitive << ( loop_dataflow_input_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_ap_sync_continue);
    sensitive << ( ap_continue );

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( dataflow_in_loop_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( dataflow_in_loop_U0_ap_ready );

    SC_METHOD(thread_bias_address0);
    sensitive << ( dataflow_in_loop_U0_bias_address0 );

    SC_METHOD(thread_bias_address1);

    SC_METHOD(thread_bias_ce0);
    sensitive << ( dataflow_in_loop_U0_bias_ce0 );

    SC_METHOD(thread_bias_ce1);

    SC_METHOD(thread_bias_d0);

    SC_METHOD(thread_bias_d1);

    SC_METHOD(thread_bias_we0);

    SC_METHOD(thread_bias_we1);

    SC_METHOD(thread_bound_minus_1);

    SC_METHOD(thread_dataflow_in_loop_U0_ap_continue);
    sensitive << ( ap_continue );
    sensitive << ( loop_dataflow_output_count );
    sensitive << ( bound_minus_1 );

    SC_METHOD(thread_dataflow_in_loop_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_dataflow_in_loop_U0_start_full_n);

    SC_METHOD(thread_dataflow_in_loop_U0_start_write);

    SC_METHOD(thread_input_V_address0);
    sensitive << ( dataflow_in_loop_U0_input_V_address0 );

    SC_METHOD(thread_input_V_address1);

    SC_METHOD(thread_input_V_ce0);
    sensitive << ( dataflow_in_loop_U0_input_V_ce0 );

    SC_METHOD(thread_input_V_ce1);

    SC_METHOD(thread_input_V_d0);

    SC_METHOD(thread_input_V_d1);

    SC_METHOD(thread_input_V_we0);

    SC_METHOD(thread_input_V_we1);

    SC_METHOD(thread_m_axi_ddr_V_ARADDR);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARADDR );

    SC_METHOD(thread_m_axi_ddr_V_ARBURST);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARBURST );

    SC_METHOD(thread_m_axi_ddr_V_ARCACHE);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE );

    SC_METHOD(thread_m_axi_ddr_V_ARID);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARID );

    SC_METHOD(thread_m_axi_ddr_V_ARLEN);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARLEN );

    SC_METHOD(thread_m_axi_ddr_V_ARLOCK);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK );

    SC_METHOD(thread_m_axi_ddr_V_ARPROT);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARPROT );

    SC_METHOD(thread_m_axi_ddr_V_ARQOS);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARQOS );

    SC_METHOD(thread_m_axi_ddr_V_ARREGION);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARREGION );

    SC_METHOD(thread_m_axi_ddr_V_ARSIZE);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE );

    SC_METHOD(thread_m_axi_ddr_V_ARUSER);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARUSER );

    SC_METHOD(thread_m_axi_ddr_V_ARVALID);
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_ARVALID );

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
    sensitive << ( dataflow_in_loop_U0_m_axi_ddr_V_RREADY );

    SC_METHOD(thread_m_axi_ddr_V_WDATA);

    SC_METHOD(thread_m_axi_ddr_V_WID);

    SC_METHOD(thread_m_axi_ddr_V_WLAST);

    SC_METHOD(thread_m_axi_ddr_V_WSTRB);

    SC_METHOD(thread_m_axi_ddr_V_WUSER);

    SC_METHOD(thread_m_axi_ddr_V_WVALID);

    SC_METHOD(thread_output_r_address0);
    sensitive << ( dataflow_in_loop_U0_output_r_address0 );

    SC_METHOD(thread_output_r_ce0);
    sensitive << ( dataflow_in_loop_U0_output_r_ce0 );

    SC_METHOD(thread_output_r_d0);
    sensitive << ( dataflow_in_loop_U0_output_r_d0 );

    SC_METHOD(thread_output_r_we0);
    sensitive << ( dataflow_in_loop_U0_output_r_we0 );

    SC_METHOD(thread_scale_address0);
    sensitive << ( dataflow_in_loop_U0_scale_address0 );

    SC_METHOD(thread_scale_address1);

    SC_METHOD(thread_scale_ce0);
    sensitive << ( dataflow_in_loop_U0_scale_ce0 );

    SC_METHOD(thread_scale_ce1);

    SC_METHOD(thread_scale_d0);

    SC_METHOD(thread_scale_d1);

    SC_METHOD(thread_scale_we0);

    SC_METHOD(thread_scale_we1);

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const3);

    SC_THREAD(thread_ap_var_for_const4);

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const2);

    loop_dataflow_input_count = "0000000000";
    loop_dataflow_output_count = "0000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dataflow_parent_loop_2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
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
    sc_trace(mVcdFile, output_r_address0, "(port)output_r_address0");
    sc_trace(mVcdFile, output_r_ce0, "(port)output_r_ce0");
    sc_trace(mVcdFile, output_r_d0, "(port)output_r_d0");
    sc_trace(mVcdFile, output_r_q0, "(port)output_r_q0");
    sc_trace(mVcdFile, output_r_we0, "(port)output_r_we0");
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
    sc_trace(mVcdFile, bias_address0, "(port)bias_address0");
    sc_trace(mVcdFile, bias_ce0, "(port)bias_ce0");
    sc_trace(mVcdFile, bias_d0, "(port)bias_d0");
    sc_trace(mVcdFile, bias_q0, "(port)bias_q0");
    sc_trace(mVcdFile, bias_we0, "(port)bias_we0");
    sc_trace(mVcdFile, bias_address1, "(port)bias_address1");
    sc_trace(mVcdFile, bias_ce1, "(port)bias_ce1");
    sc_trace(mVcdFile, bias_d1, "(port)bias_d1");
    sc_trace(mVcdFile, bias_q1, "(port)bias_q1");
    sc_trace(mVcdFile, bias_we1, "(port)bias_we1");
    sc_trace(mVcdFile, scale_address0, "(port)scale_address0");
    sc_trace(mVcdFile, scale_ce0, "(port)scale_ce0");
    sc_trace(mVcdFile, scale_d0, "(port)scale_d0");
    sc_trace(mVcdFile, scale_q0, "(port)scale_q0");
    sc_trace(mVcdFile, scale_we0, "(port)scale_we0");
    sc_trace(mVcdFile, scale_address1, "(port)scale_address1");
    sc_trace(mVcdFile, scale_ce1, "(port)scale_ce1");
    sc_trace(mVcdFile, scale_d1, "(port)scale_d1");
    sc_trace(mVcdFile, scale_q1, "(port)scale_q1");
    sc_trace(mVcdFile, scale_we1, "(port)scale_we1");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWVALID, "dataflow_in_loop_U0_m_axi_ddr_V_AWVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWADDR, "dataflow_in_loop_U0_m_axi_ddr_V_AWADDR");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWID, "dataflow_in_loop_U0_m_axi_ddr_V_AWID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWLEN, "dataflow_in_loop_U0_m_axi_ddr_V_AWLEN");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWSIZE, "dataflow_in_loop_U0_m_axi_ddr_V_AWSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWBURST, "dataflow_in_loop_U0_m_axi_ddr_V_AWBURST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWLOCK, "dataflow_in_loop_U0_m_axi_ddr_V_AWLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWCACHE, "dataflow_in_loop_U0_m_axi_ddr_V_AWCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWPROT, "dataflow_in_loop_U0_m_axi_ddr_V_AWPROT");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWQOS, "dataflow_in_loop_U0_m_axi_ddr_V_AWQOS");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWREGION, "dataflow_in_loop_U0_m_axi_ddr_V_AWREGION");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_AWUSER, "dataflow_in_loop_U0_m_axi_ddr_V_AWUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WVALID, "dataflow_in_loop_U0_m_axi_ddr_V_WVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WDATA, "dataflow_in_loop_U0_m_axi_ddr_V_WDATA");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WSTRB, "dataflow_in_loop_U0_m_axi_ddr_V_WSTRB");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WLAST, "dataflow_in_loop_U0_m_axi_ddr_V_WLAST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WID, "dataflow_in_loop_U0_m_axi_ddr_V_WID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_WUSER, "dataflow_in_loop_U0_m_axi_ddr_V_WUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARVALID, "dataflow_in_loop_U0_m_axi_ddr_V_ARVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARADDR, "dataflow_in_loop_U0_m_axi_ddr_V_ARADDR");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARID, "dataflow_in_loop_U0_m_axi_ddr_V_ARID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARLEN, "dataflow_in_loop_U0_m_axi_ddr_V_ARLEN");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE, "dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARBURST, "dataflow_in_loop_U0_m_axi_ddr_V_ARBURST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK, "dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE, "dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARPROT, "dataflow_in_loop_U0_m_axi_ddr_V_ARPROT");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARQOS, "dataflow_in_loop_U0_m_axi_ddr_V_ARQOS");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARREGION, "dataflow_in_loop_U0_m_axi_ddr_V_ARREGION");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_ARUSER, "dataflow_in_loop_U0_m_axi_ddr_V_ARUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_RREADY, "dataflow_in_loop_U0_m_axi_ddr_V_RREADY");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_ddr_V_BREADY, "dataflow_in_loop_U0_m_axi_ddr_V_BREADY");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_address0, "dataflow_in_loop_U0_input_V_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_ce0, "dataflow_in_loop_U0_input_V_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_d0, "dataflow_in_loop_U0_input_V_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_we0, "dataflow_in_loop_U0_input_V_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_address1, "dataflow_in_loop_U0_input_V_address1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_ce1, "dataflow_in_loop_U0_input_V_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_d1, "dataflow_in_loop_U0_input_V_d1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_we1, "dataflow_in_loop_U0_input_V_we1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_address0, "dataflow_in_loop_U0_bias_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_ce0, "dataflow_in_loop_U0_bias_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_d0, "dataflow_in_loop_U0_bias_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_we0, "dataflow_in_loop_U0_bias_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_address1, "dataflow_in_loop_U0_bias_address1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_ce1, "dataflow_in_loop_U0_bias_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_d1, "dataflow_in_loop_U0_bias_d1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_bias_we1, "dataflow_in_loop_U0_bias_we1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_address0, "dataflow_in_loop_U0_scale_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_ce0, "dataflow_in_loop_U0_scale_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_d0, "dataflow_in_loop_U0_scale_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_we0, "dataflow_in_loop_U0_scale_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_address1, "dataflow_in_loop_U0_scale_address1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_ce1, "dataflow_in_loop_U0_scale_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_d1, "dataflow_in_loop_U0_scale_d1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_scale_we1, "dataflow_in_loop_U0_scale_we1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_r_address0, "dataflow_in_loop_U0_output_r_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_r_ce0, "dataflow_in_loop_U0_output_r_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_r_d0, "dataflow_in_loop_U0_output_r_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_r_we0, "dataflow_in_loop_U0_output_r_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_start, "dataflow_in_loop_U0_ap_start");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_done, "dataflow_in_loop_U0_ap_done");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_ready, "dataflow_in_loop_U0_ap_ready");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_idle, "dataflow_in_loop_U0_ap_idle");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_continue, "dataflow_in_loop_U0_ap_continue");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, loop_dataflow_input_count, "loop_dataflow_input_count");
    sc_trace(mVcdFile, loop_dataflow_output_count, "loop_dataflow_output_count");
    sc_trace(mVcdFile, bound_minus_1, "bound_minus_1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_start_full_n, "dataflow_in_loop_U0_start_full_n");
    sc_trace(mVcdFile, dataflow_in_loop_U0_start_write, "dataflow_in_loop_U0_start_write");
#endif

    }
}

dataflow_parent_loop_2::~dataflow_parent_loop_2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete dataflow_in_loop_U0;
}

void dataflow_parent_loop_2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_ap_var_for_const3() {
    ap_var_for_const3 = ap_const_lv1024_lc_1;
}

void dataflow_parent_loop_2::thread_ap_var_for_const4() {
    ap_var_for_const4 = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv2_0;
}

void dataflow_parent_loop_2::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv1_0;
}

void dataflow_parent_loop_2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_input_count = ap_const_lv10_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1) && 
             !esl_seteq<1,10,10>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = (!loop_dataflow_input_count.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(loop_dataflow_input_count.read()) + sc_biguint<10>(ap_const_lv10_1));
        } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1) && 
                    esl_seteq<1,10,10>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = ap_const_lv10_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_output_count = ap_const_lv10_0;
    } else {
        if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_continue.read(), ap_const_logic_1) && 
             !esl_seteq<1,10,10>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = (!loop_dataflow_output_count.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(loop_dataflow_output_count.read()) + sc_biguint<10>(ap_const_lv10_1));
        } else if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_continue.read(), ap_const_logic_1) && 
                    esl_seteq<1,10,10>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = ap_const_lv10_0;
        }
    }
}

void dataflow_parent_loop_2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,10,10>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dataflow_parent_loop_2::thread_ap_idle() {
    if ((esl_seteq<1,10,10>(ap_const_lv10_0, loop_dataflow_output_count.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_idle.read(), ap_const_logic_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dataflow_parent_loop_2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1) && 
         esl_seteq<1,10,10>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dataflow_parent_loop_2::thread_ap_sync_continue() {
    ap_sync_continue = ap_continue.read();
}

void dataflow_parent_loop_2::thread_ap_sync_done() {
    ap_sync_done = dataflow_in_loop_U0_ap_done.read();
}

void dataflow_parent_loop_2::thread_ap_sync_ready() {
    ap_sync_ready = dataflow_in_loop_U0_ap_ready.read();
}

void dataflow_parent_loop_2::thread_bias_address0() {
    bias_address0 = dataflow_in_loop_U0_bias_address0.read();
}

void dataflow_parent_loop_2::thread_bias_address1() {
    bias_address1 = ap_const_lv10_0;
}

void dataflow_parent_loop_2::thread_bias_ce0() {
    bias_ce0 = dataflow_in_loop_U0_bias_ce0.read();
}

void dataflow_parent_loop_2::thread_bias_ce1() {
    bias_ce1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_bias_d0() {
    bias_d0 = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_bias_d1() {
    bias_d1 = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_bias_we0() {
    bias_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_bias_we1() {
    bias_we1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_bound_minus_1() {
    bound_minus_1 = (!ap_const_lv10_3E8.is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_3E8) - sc_biguint<10>(ap_const_lv10_1));
}

void dataflow_parent_loop_2::thread_dataflow_in_loop_U0_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read()) || 
         !esl_seteq<1,10,10>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
        dataflow_in_loop_U0_ap_continue = ap_const_logic_1;
    } else {
        dataflow_in_loop_U0_ap_continue = ap_const_logic_0;
    }
}

void dataflow_parent_loop_2::thread_dataflow_in_loop_U0_ap_start() {
    dataflow_in_loop_U0_ap_start = ap_start.read();
}

void dataflow_parent_loop_2::thread_dataflow_in_loop_U0_start_full_n() {
    dataflow_in_loop_U0_start_full_n = ap_const_logic_1;
}

void dataflow_parent_loop_2::thread_dataflow_in_loop_U0_start_write() {
    dataflow_in_loop_U0_start_write = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_input_V_address0() {
    input_V_address0 = dataflow_in_loop_U0_input_V_address0.read();
}

void dataflow_parent_loop_2::thread_input_V_address1() {
    input_V_address1 = ap_const_lv4_0;
}

void dataflow_parent_loop_2::thread_input_V_ce0() {
    input_V_ce0 = dataflow_in_loop_U0_input_V_ce0.read();
}

void dataflow_parent_loop_2::thread_input_V_ce1() {
    input_V_ce1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_input_V_d0() {
    input_V_d0 = ap_const_lv1024_lc_1;
}

void dataflow_parent_loop_2::thread_input_V_d1() {
    input_V_d1 = ap_const_lv1024_lc_1;
}

void dataflow_parent_loop_2::thread_input_V_we0() {
    input_V_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_input_V_we1() {
    input_V_we1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARADDR() {
    m_axi_ddr_V_ARADDR = dataflow_in_loop_U0_m_axi_ddr_V_ARADDR.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARBURST() {
    m_axi_ddr_V_ARBURST = dataflow_in_loop_U0_m_axi_ddr_V_ARBURST.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARCACHE() {
    m_axi_ddr_V_ARCACHE = dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARID() {
    m_axi_ddr_V_ARID = dataflow_in_loop_U0_m_axi_ddr_V_ARID.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARLEN() {
    m_axi_ddr_V_ARLEN = dataflow_in_loop_U0_m_axi_ddr_V_ARLEN.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARLOCK() {
    m_axi_ddr_V_ARLOCK = dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARPROT() {
    m_axi_ddr_V_ARPROT = dataflow_in_loop_U0_m_axi_ddr_V_ARPROT.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARQOS() {
    m_axi_ddr_V_ARQOS = dataflow_in_loop_U0_m_axi_ddr_V_ARQOS.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARREGION() {
    m_axi_ddr_V_ARREGION = dataflow_in_loop_U0_m_axi_ddr_V_ARREGION.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARSIZE() {
    m_axi_ddr_V_ARSIZE = dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARUSER() {
    m_axi_ddr_V_ARUSER = dataflow_in_loop_U0_m_axi_ddr_V_ARUSER.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_ARVALID() {
    m_axi_ddr_V_ARVALID = dataflow_in_loop_U0_m_axi_ddr_V_ARVALID.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWADDR() {
    m_axi_ddr_V_AWADDR = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWBURST() {
    m_axi_ddr_V_AWBURST = ap_const_lv2_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWCACHE() {
    m_axi_ddr_V_AWCACHE = ap_const_lv4_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWID() {
    m_axi_ddr_V_AWID = ap_const_lv1_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWLEN() {
    m_axi_ddr_V_AWLEN = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWLOCK() {
    m_axi_ddr_V_AWLOCK = ap_const_lv2_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWPROT() {
    m_axi_ddr_V_AWPROT = ap_const_lv3_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWQOS() {
    m_axi_ddr_V_AWQOS = ap_const_lv4_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWREGION() {
    m_axi_ddr_V_AWREGION = ap_const_lv4_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWSIZE() {
    m_axi_ddr_V_AWSIZE = ap_const_lv3_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWUSER() {
    m_axi_ddr_V_AWUSER = ap_const_lv1_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_AWVALID() {
    m_axi_ddr_V_AWVALID = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_BREADY() {
    m_axi_ddr_V_BREADY = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_RREADY() {
    m_axi_ddr_V_RREADY = dataflow_in_loop_U0_m_axi_ddr_V_RREADY.read();
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WDATA() {
    m_axi_ddr_V_WDATA = ap_const_lv128_lc_1;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WID() {
    m_axi_ddr_V_WID = ap_const_lv1_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WLAST() {
    m_axi_ddr_V_WLAST = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WSTRB() {
    m_axi_ddr_V_WSTRB = ap_const_lv16_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WUSER() {
    m_axi_ddr_V_WUSER = ap_const_lv1_0;
}

void dataflow_parent_loop_2::thread_m_axi_ddr_V_WVALID() {
    m_axi_ddr_V_WVALID = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_output_r_address0() {
    output_r_address0 = dataflow_in_loop_U0_output_r_address0.read();
}

void dataflow_parent_loop_2::thread_output_r_ce0() {
    output_r_ce0 = dataflow_in_loop_U0_output_r_ce0.read();
}

void dataflow_parent_loop_2::thread_output_r_d0() {
    output_r_d0 = dataflow_in_loop_U0_output_r_d0.read();
}

void dataflow_parent_loop_2::thread_output_r_we0() {
    output_r_we0 = dataflow_in_loop_U0_output_r_we0.read();
}

void dataflow_parent_loop_2::thread_scale_address0() {
    scale_address0 = dataflow_in_loop_U0_scale_address0.read();
}

void dataflow_parent_loop_2::thread_scale_address1() {
    scale_address1 = ap_const_lv10_0;
}

void dataflow_parent_loop_2::thread_scale_ce0() {
    scale_ce0 = dataflow_in_loop_U0_scale_ce0.read();
}

void dataflow_parent_loop_2::thread_scale_ce1() {
    scale_ce1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_scale_d0() {
    scale_d0 = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_scale_d1() {
    scale_d1 = ap_const_lv32_0;
}

void dataflow_parent_loop_2::thread_scale_we0() {
    scale_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_scale_we1() {
    scale_we1 = ap_const_logic_0;
}

}

