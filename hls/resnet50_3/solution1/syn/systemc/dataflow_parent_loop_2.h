// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dataflow_parent_loop_2_HH_
#define _dataflow_parent_loop_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dataflow_in_loop.h"

namespace ap_rtl {

struct dataflow_parent_loop_2 : public sc_module {
    // Port declarations 87
    sc_out< sc_lv<4> > input_V_address0;
    sc_out< sc_logic > input_V_ce0;
    sc_out< sc_lv<1024> > input_V_d0;
    sc_in< sc_lv<1024> > input_V_q0;
    sc_out< sc_logic > input_V_we0;
    sc_out< sc_lv<4> > input_V_address1;
    sc_out< sc_logic > input_V_ce1;
    sc_out< sc_lv<1024> > input_V_d1;
    sc_in< sc_lv<1024> > input_V_q1;
    sc_out< sc_logic > input_V_we1;
    sc_out< sc_lv<10> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_lv<32> > output_r_d0;
    sc_in< sc_lv<32> > output_r_q0;
    sc_out< sc_logic > output_r_we0;
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
    sc_out< sc_lv<10> > bias_address0;
    sc_out< sc_logic > bias_ce0;
    sc_out< sc_lv<32> > bias_d0;
    sc_in< sc_lv<32> > bias_q0;
    sc_out< sc_logic > bias_we0;
    sc_out< sc_lv<10> > bias_address1;
    sc_out< sc_logic > bias_ce1;
    sc_out< sc_lv<32> > bias_d1;
    sc_in< sc_lv<32> > bias_q1;
    sc_out< sc_logic > bias_we1;
    sc_out< sc_lv<10> > scale_address0;
    sc_out< sc_logic > scale_ce0;
    sc_out< sc_lv<32> > scale_d0;
    sc_in< sc_lv<32> > scale_q0;
    sc_out< sc_logic > scale_we0;
    sc_out< sc_lv<10> > scale_address1;
    sc_out< sc_logic > scale_ce1;
    sc_out< sc_lv<32> > scale_d1;
    sc_in< sc_lv<32> > scale_q1;
    sc_out< sc_logic > scale_we1;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_in< sc_logic > ap_continue;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<1024> > ap_var_for_const3;
    sc_signal< sc_lv<32> > ap_var_for_const4;
    sc_signal< sc_lv<2> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const2;


    // Module declarations
    dataflow_parent_loop_2(sc_module_name name);
    SC_HAS_PROCESS(dataflow_parent_loop_2);

    ~dataflow_parent_loop_2();

    sc_trace_file* mVcdFile;

    dataflow_in_loop* dataflow_in_loop_U0;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_AWVALID;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_m_axi_ddr_V_AWADDR;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_AWID;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_m_axi_ddr_V_AWLEN;
    sc_signal< sc_lv<3> > dataflow_in_loop_U0_m_axi_ddr_V_AWSIZE;
    sc_signal< sc_lv<2> > dataflow_in_loop_U0_m_axi_ddr_V_AWBURST;
    sc_signal< sc_lv<2> > dataflow_in_loop_U0_m_axi_ddr_V_AWLOCK;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_AWCACHE;
    sc_signal< sc_lv<3> > dataflow_in_loop_U0_m_axi_ddr_V_AWPROT;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_AWQOS;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_AWREGION;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_AWUSER;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_WVALID;
    sc_signal< sc_lv<128> > dataflow_in_loop_U0_m_axi_ddr_V_WDATA;
    sc_signal< sc_lv<16> > dataflow_in_loop_U0_m_axi_ddr_V_WSTRB;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_WLAST;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_WID;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_WUSER;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_ARVALID;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_m_axi_ddr_V_ARADDR;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_ARID;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_m_axi_ddr_V_ARLEN;
    sc_signal< sc_lv<3> > dataflow_in_loop_U0_m_axi_ddr_V_ARSIZE;
    sc_signal< sc_lv<2> > dataflow_in_loop_U0_m_axi_ddr_V_ARBURST;
    sc_signal< sc_lv<2> > dataflow_in_loop_U0_m_axi_ddr_V_ARLOCK;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_ARCACHE;
    sc_signal< sc_lv<3> > dataflow_in_loop_U0_m_axi_ddr_V_ARPROT;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_ARQOS;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_m_axi_ddr_V_ARREGION;
    sc_signal< sc_lv<1> > dataflow_in_loop_U0_m_axi_ddr_V_ARUSER;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_RREADY;
    sc_signal< sc_logic > dataflow_in_loop_U0_m_axi_ddr_V_BREADY;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_input_V_address0;
    sc_signal< sc_logic > dataflow_in_loop_U0_input_V_ce0;
    sc_signal< sc_lv<1024> > dataflow_in_loop_U0_input_V_d0;
    sc_signal< sc_logic > dataflow_in_loop_U0_input_V_we0;
    sc_signal< sc_lv<4> > dataflow_in_loop_U0_input_V_address1;
    sc_signal< sc_logic > dataflow_in_loop_U0_input_V_ce1;
    sc_signal< sc_lv<1024> > dataflow_in_loop_U0_input_V_d1;
    sc_signal< sc_logic > dataflow_in_loop_U0_input_V_we1;
    sc_signal< sc_lv<10> > dataflow_in_loop_U0_bias_address0;
    sc_signal< sc_logic > dataflow_in_loop_U0_bias_ce0;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_bias_d0;
    sc_signal< sc_logic > dataflow_in_loop_U0_bias_we0;
    sc_signal< sc_lv<10> > dataflow_in_loop_U0_bias_address1;
    sc_signal< sc_logic > dataflow_in_loop_U0_bias_ce1;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_bias_d1;
    sc_signal< sc_logic > dataflow_in_loop_U0_bias_we1;
    sc_signal< sc_lv<10> > dataflow_in_loop_U0_scale_address0;
    sc_signal< sc_logic > dataflow_in_loop_U0_scale_ce0;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_scale_d0;
    sc_signal< sc_logic > dataflow_in_loop_U0_scale_we0;
    sc_signal< sc_lv<10> > dataflow_in_loop_U0_scale_address1;
    sc_signal< sc_logic > dataflow_in_loop_U0_scale_ce1;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_scale_d1;
    sc_signal< sc_logic > dataflow_in_loop_U0_scale_we1;
    sc_signal< sc_lv<10> > dataflow_in_loop_U0_output_r_address0;
    sc_signal< sc_logic > dataflow_in_loop_U0_output_r_ce0;
    sc_signal< sc_lv<32> > dataflow_in_loop_U0_output_r_d0;
    sc_signal< sc_logic > dataflow_in_loop_U0_output_r_we0;
    sc_signal< sc_logic > dataflow_in_loop_U0_ap_start;
    sc_signal< sc_logic > dataflow_in_loop_U0_ap_done;
    sc_signal< sc_logic > dataflow_in_loop_U0_ap_ready;
    sc_signal< sc_logic > dataflow_in_loop_U0_ap_idle;
    sc_signal< sc_logic > dataflow_in_loop_U0_ap_continue;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_lv<10> > loop_dataflow_input_count;
    sc_signal< sc_lv<10> > loop_dataflow_output_count;
    sc_signal< sc_lv<10> > bound_minus_1;
    sc_signal< sc_logic > dataflow_in_loop_U0_start_full_n;
    sc_signal< sc_logic > dataflow_in_loop_U0_start_write;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1024> ap_const_lv1024_lc_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<10> ap_const_lv10_3E8;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1024> ap_const_lv1024_lc_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<16> ap_const_lv16_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_bias_address0();
    void thread_bias_address1();
    void thread_bias_ce0();
    void thread_bias_ce1();
    void thread_bias_d0();
    void thread_bias_d1();
    void thread_bias_we0();
    void thread_bias_we1();
    void thread_bound_minus_1();
    void thread_dataflow_in_loop_U0_ap_continue();
    void thread_dataflow_in_loop_U0_ap_start();
    void thread_dataflow_in_loop_U0_start_full_n();
    void thread_dataflow_in_loop_U0_start_write();
    void thread_input_V_address0();
    void thread_input_V_address1();
    void thread_input_V_ce0();
    void thread_input_V_ce1();
    void thread_input_V_d0();
    void thread_input_V_d1();
    void thread_input_V_we0();
    void thread_input_V_we1();
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
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_scale_address0();
    void thread_scale_address1();
    void thread_scale_ce0();
    void thread_scale_ce1();
    void thread_scale_d0();
    void thread_scale_d1();
    void thread_scale_we0();
    void thread_scale_we1();
};

}

using namespace ap_rtl;

#endif
