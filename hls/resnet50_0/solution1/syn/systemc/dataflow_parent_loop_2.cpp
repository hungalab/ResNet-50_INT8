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

const sc_lv<13> dataflow_parent_loop_2::ap_const_lv13_0 = "0000000000000";
const sc_logic dataflow_parent_loop_2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<216> dataflow_parent_loop_2::ap_const_lv216_lc_1 = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<15> dataflow_parent_loop_2::ap_const_lv15_0 = "000000000000000";
const sc_lv<288> dataflow_parent_loop_2::ap_const_lv288_lc_1 = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_logic dataflow_parent_loop_2::ap_const_logic_1 = sc_dt::Log_1;
const bool dataflow_parent_loop_2::ap_const_boolean_1 = true;
const sc_lv<7> dataflow_parent_loop_2::ap_const_lv7_70 = "1110000";
const sc_lv<7> dataflow_parent_loop_2::ap_const_lv7_0 = "0000000";
const sc_lv<7> dataflow_parent_loop_2::ap_const_lv7_1 = "1";
const sc_lv<216> dataflow_parent_loop_2::ap_const_lv216_lc_2 = "1";
const sc_lv<288> dataflow_parent_loop_2::ap_const_lv288_lc_2 = "1";

dataflow_parent_loop_2::dataflow_parent_loop_2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    dataflow_in_loop_U0 = new dataflow_in_loop("dataflow_in_loop_U0");
    dataflow_in_loop_U0->row_assign(row_assign);
    dataflow_in_loop_U0->col_assign(loop_dataflow_input_count);
    dataflow_in_loop_U0->input_V_address0(dataflow_in_loop_U0_input_V_address0);
    dataflow_in_loop_U0->input_V_ce0(dataflow_in_loop_U0_input_V_ce0);
    dataflow_in_loop_U0->input_V_d0(dataflow_in_loop_U0_input_V_d0);
    dataflow_in_loop_U0->input_V_q0(input_V_q0);
    dataflow_in_loop_U0->input_V_we0(dataflow_in_loop_U0_input_V_we0);
    dataflow_in_loop_U0->input_V_address1(dataflow_in_loop_U0_input_V_address1);
    dataflow_in_loop_U0->input_V_ce1(dataflow_in_loop_U0_input_V_ce1);
    dataflow_in_loop_U0->input_V_d1(dataflow_in_loop_U0_input_V_d1);
    dataflow_in_loop_U0->input_V_q1(ap_var_for_const0);
    dataflow_in_loop_U0->input_V_we1(dataflow_in_loop_U0_input_V_we1);
    dataflow_in_loop_U0->output_V_address0(dataflow_in_loop_U0_output_V_address0);
    dataflow_in_loop_U0->output_V_ce0(dataflow_in_loop_U0_output_V_ce0);
    dataflow_in_loop_U0->output_V_d0(dataflow_in_loop_U0_output_V_d0);
    dataflow_in_loop_U0->output_V_q0(ap_var_for_const1);
    dataflow_in_loop_U0->output_V_we0(dataflow_in_loop_U0_output_V_we0);
    dataflow_in_loop_U0->output_V_address1(dataflow_in_loop_U0_output_V_address1);
    dataflow_in_loop_U0->output_V_ce1(dataflow_in_loop_U0_output_V_ce1);
    dataflow_in_loop_U0->output_V_d1(dataflow_in_loop_U0_output_V_d1);
    dataflow_in_loop_U0->output_V_q1(ap_var_for_const1);
    dataflow_in_loop_U0->output_V_we1(dataflow_in_loop_U0_output_V_we1);
    dataflow_in_loop_U0->ap_clk(ap_clk);
    dataflow_in_loop_U0->ap_rst(ap_rst);
    dataflow_in_loop_U0->row_assign_ap_vld(row_assign_ap_vld);
    dataflow_in_loop_U0->col_assign_ap_vld(ap_var_for_const2);
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

    SC_METHOD(thread_output_V_address0);

    SC_METHOD(thread_output_V_address1);
    sensitive << ( dataflow_in_loop_U0_output_V_address1 );

    SC_METHOD(thread_output_V_ce0);

    SC_METHOD(thread_output_V_ce1);
    sensitive << ( dataflow_in_loop_U0_output_V_ce1 );

    SC_METHOD(thread_output_V_d0);

    SC_METHOD(thread_output_V_d1);
    sensitive << ( dataflow_in_loop_U0_output_V_d1 );

    SC_METHOD(thread_output_V_we0);

    SC_METHOD(thread_output_V_we1);
    sensitive << ( dataflow_in_loop_U0_output_V_we1 );

    SC_THREAD(thread_ap_var_for_const2);

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    loop_dataflow_input_count = "0000000";
    loop_dataflow_output_count = "0000000";
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
    sc_trace(mVcdFile, output_V_address0, "(port)output_V_address0");
    sc_trace(mVcdFile, output_V_ce0, "(port)output_V_ce0");
    sc_trace(mVcdFile, output_V_d0, "(port)output_V_d0");
    sc_trace(mVcdFile, output_V_q0, "(port)output_V_q0");
    sc_trace(mVcdFile, output_V_we0, "(port)output_V_we0");
    sc_trace(mVcdFile, output_V_address1, "(port)output_V_address1");
    sc_trace(mVcdFile, output_V_ce1, "(port)output_V_ce1");
    sc_trace(mVcdFile, output_V_d1, "(port)output_V_d1");
    sc_trace(mVcdFile, output_V_q1, "(port)output_V_q1");
    sc_trace(mVcdFile, output_V_we1, "(port)output_V_we1");
    sc_trace(mVcdFile, row_assign, "(port)row_assign");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, row_assign_ap_vld, "(port)row_assign_ap_vld");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_address0, "dataflow_in_loop_U0_input_V_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_ce0, "dataflow_in_loop_U0_input_V_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_d0, "dataflow_in_loop_U0_input_V_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_we0, "dataflow_in_loop_U0_input_V_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_address1, "dataflow_in_loop_U0_input_V_address1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_ce1, "dataflow_in_loop_U0_input_V_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_d1, "dataflow_in_loop_U0_input_V_d1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_input_V_we1, "dataflow_in_loop_U0_input_V_we1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_address0, "dataflow_in_loop_U0_output_V_address0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_ce0, "dataflow_in_loop_U0_output_V_ce0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_d0, "dataflow_in_loop_U0_output_V_d0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_we0, "dataflow_in_loop_U0_output_V_we0");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_address1, "dataflow_in_loop_U0_output_V_address1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_ce1, "dataflow_in_loop_U0_output_V_ce1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_d1, "dataflow_in_loop_U0_output_V_d1");
    sc_trace(mVcdFile, dataflow_in_loop_U0_output_V_we1, "dataflow_in_loop_U0_output_V_we1");
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

void dataflow_parent_loop_2::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_lv216_lc_1;
}

void dataflow_parent_loop_2::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv288_lc_1;
}

void dataflow_parent_loop_2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_input_count = ap_const_lv7_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1) && 
             !esl_seteq<1,7,7>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = (!loop_dataflow_input_count.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(loop_dataflow_input_count.read()) + sc_biguint<7>(ap_const_lv7_1));
        } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1) && 
                    esl_seteq<1,7,7>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
            loop_dataflow_input_count = ap_const_lv7_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_output_count = ap_const_lv7_0;
    } else {
        if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_continue.read(), ap_const_logic_1) && 
             !esl_seteq<1,7,7>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = (!loop_dataflow_output_count.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(loop_dataflow_output_count.read()) + sc_biguint<7>(ap_const_lv7_1));
        } else if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_continue.read(), ap_const_logic_1) && 
                    esl_seteq<1,7,7>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
            loop_dataflow_output_count = ap_const_lv7_0;
        }
    }
}

void dataflow_parent_loop_2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,7,7>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dataflow_parent_loop_2::thread_ap_idle() {
    if ((esl_seteq<1,7,7>(loop_dataflow_output_count.read(), ap_const_lv7_0) && 
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
         esl_seteq<1,7,7>(loop_dataflow_input_count.read(), bound_minus_1.read()))) {
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

void dataflow_parent_loop_2::thread_bound_minus_1() {
    bound_minus_1 = (!ap_const_lv7_70.is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_70) - sc_biguint<7>(ap_const_lv7_1));
}

void dataflow_parent_loop_2::thread_dataflow_in_loop_U0_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read()) || 
         !esl_seteq<1,7,7>(loop_dataflow_output_count.read(), bound_minus_1.read()))) {
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
    input_V_address1 = ap_const_lv13_0;
}

void dataflow_parent_loop_2::thread_input_V_ce0() {
    input_V_ce0 = dataflow_in_loop_U0_input_V_ce0.read();
}

void dataflow_parent_loop_2::thread_input_V_ce1() {
    input_V_ce1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_input_V_d0() {
    input_V_d0 = ap_const_lv216_lc_1;
}

void dataflow_parent_loop_2::thread_input_V_d1() {
    input_V_d1 = ap_const_lv216_lc_1;
}

void dataflow_parent_loop_2::thread_input_V_we0() {
    input_V_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_input_V_we1() {
    input_V_we1 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_output_V_address0() {
    output_V_address0 = ap_const_lv15_0;
}

void dataflow_parent_loop_2::thread_output_V_address1() {
    output_V_address1 = dataflow_in_loop_U0_output_V_address1.read();
}

void dataflow_parent_loop_2::thread_output_V_ce0() {
    output_V_ce0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_output_V_ce1() {
    output_V_ce1 = dataflow_in_loop_U0_output_V_ce1.read();
}

void dataflow_parent_loop_2::thread_output_V_d0() {
    output_V_d0 = ap_const_lv288_lc_1;
}

void dataflow_parent_loop_2::thread_output_V_d1() {
    output_V_d1 = dataflow_in_loop_U0_output_V_d1.read();
}

void dataflow_parent_loop_2::thread_output_V_we0() {
    output_V_we0 = ap_const_logic_0;
}

void dataflow_parent_loop_2::thread_output_V_we1() {
    output_V_we1 = dataflow_in_loop_U0_output_V_we1.read();
}

}

