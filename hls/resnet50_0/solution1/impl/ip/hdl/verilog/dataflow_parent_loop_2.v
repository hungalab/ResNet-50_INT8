// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dataflow_parent_loop_2 (
        input_V_address0,
        input_V_ce0,
        input_V_d0,
        input_V_q0,
        input_V_we0,
        input_V_address1,
        input_V_ce1,
        input_V_d1,
        input_V_q1,
        input_V_we1,
        output_V_address0,
        output_V_ce0,
        output_V_d0,
        output_V_q0,
        output_V_we0,
        output_V_address1,
        output_V_ce1,
        output_V_d1,
        output_V_q1,
        output_V_we1,
        row_assign,
        ap_clk,
        ap_rst,
        row_assign_ap_vld,
        ap_start,
        ap_done,
        ap_ready,
        ap_idle,
        ap_continue
);


output  [12:0] input_V_address0;
output   input_V_ce0;
output  [215:0] input_V_d0;
input  [215:0] input_V_q0;
output   input_V_we0;
output  [12:0] input_V_address1;
output   input_V_ce1;
output  [215:0] input_V_d1;
input  [215:0] input_V_q1;
output   input_V_we1;
output  [14:0] output_V_address0;
output   output_V_ce0;
output  [287:0] output_V_d0;
input  [287:0] output_V_q0;
output   output_V_we0;
output  [14:0] output_V_address1;
output   output_V_ce1;
output  [287:0] output_V_d1;
input  [287:0] output_V_q1;
output   output_V_we1;
input  [6:0] row_assign;
input   ap_clk;
input   ap_rst;
input   row_assign_ap_vld;
input   ap_start;
output   ap_done;
output   ap_ready;
output   ap_idle;
input   ap_continue;

reg ap_done;
reg ap_ready;
reg ap_idle;

wire   [12:0] dataflow_in_loop_U0_input_V_address0;
wire    dataflow_in_loop_U0_input_V_ce0;
wire   [215:0] dataflow_in_loop_U0_input_V_d0;
wire    dataflow_in_loop_U0_input_V_we0;
wire   [12:0] dataflow_in_loop_U0_input_V_address1;
wire    dataflow_in_loop_U0_input_V_ce1;
wire   [215:0] dataflow_in_loop_U0_input_V_d1;
wire    dataflow_in_loop_U0_input_V_we1;
wire   [14:0] dataflow_in_loop_U0_output_V_address0;
wire    dataflow_in_loop_U0_output_V_ce0;
wire   [287:0] dataflow_in_loop_U0_output_V_d0;
wire    dataflow_in_loop_U0_output_V_we0;
wire   [14:0] dataflow_in_loop_U0_output_V_address1;
wire    dataflow_in_loop_U0_output_V_ce1;
wire   [287:0] dataflow_in_loop_U0_output_V_d1;
wire    dataflow_in_loop_U0_output_V_we1;
wire    dataflow_in_loop_U0_ap_start;
wire    dataflow_in_loop_U0_ap_done;
wire    dataflow_in_loop_U0_ap_ready;
wire    dataflow_in_loop_U0_ap_idle;
reg    dataflow_in_loop_U0_ap_continue;
wire    ap_sync_continue;
wire    ap_sync_done;
wire    ap_sync_ready;
reg   [6:0] loop_dataflow_input_count;
reg   [6:0] loop_dataflow_output_count;
wire   [6:0] bound_minus_1;
wire    dataflow_in_loop_U0_start_full_n;
wire    dataflow_in_loop_U0_start_write;

// power-on initialization
initial begin
#0 loop_dataflow_input_count = 7'd0;
#0 loop_dataflow_output_count = 7'd0;
end

dataflow_in_loop dataflow_in_loop_U0(
    .row_assign(row_assign),
    .col_assign(loop_dataflow_input_count),
    .input_V_address0(dataflow_in_loop_U0_input_V_address0),
    .input_V_ce0(dataflow_in_loop_U0_input_V_ce0),
    .input_V_d0(dataflow_in_loop_U0_input_V_d0),
    .input_V_q0(input_V_q0),
    .input_V_we0(dataflow_in_loop_U0_input_V_we0),
    .input_V_address1(dataflow_in_loop_U0_input_V_address1),
    .input_V_ce1(dataflow_in_loop_U0_input_V_ce1),
    .input_V_d1(dataflow_in_loop_U0_input_V_d1),
    .input_V_q1(216'd0),
    .input_V_we1(dataflow_in_loop_U0_input_V_we1),
    .output_V_address0(dataflow_in_loop_U0_output_V_address0),
    .output_V_ce0(dataflow_in_loop_U0_output_V_ce0),
    .output_V_d0(dataflow_in_loop_U0_output_V_d0),
    .output_V_q0(288'd0),
    .output_V_we0(dataflow_in_loop_U0_output_V_we0),
    .output_V_address1(dataflow_in_loop_U0_output_V_address1),
    .output_V_ce1(dataflow_in_loop_U0_output_V_ce1),
    .output_V_d1(dataflow_in_loop_U0_output_V_d1),
    .output_V_q1(288'd0),
    .output_V_we1(dataflow_in_loop_U0_output_V_we1),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .row_assign_ap_vld(row_assign_ap_vld),
    .col_assign_ap_vld(1'b0),
    .ap_start(dataflow_in_loop_U0_ap_start),
    .ap_done(dataflow_in_loop_U0_ap_done),
    .ap_ready(dataflow_in_loop_U0_ap_ready),
    .ap_idle(dataflow_in_loop_U0_ap_idle),
    .ap_continue(dataflow_in_loop_U0_ap_continue)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        loop_dataflow_input_count <= 7'd0;
    end else begin
        if ((~(loop_dataflow_input_count == bound_minus_1) & (ap_start == 1'b1) & (dataflow_in_loop_U0_ap_ready == 1'b1))) begin
            loop_dataflow_input_count <= (loop_dataflow_input_count + 7'd1);
        end else if (((loop_dataflow_input_count == bound_minus_1) & (ap_start == 1'b1) & (dataflow_in_loop_U0_ap_ready == 1'b1))) begin
            loop_dataflow_input_count <= 7'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        loop_dataflow_output_count <= 7'd0;
    end else begin
        if ((~(loop_dataflow_output_count == bound_minus_1) & (dataflow_in_loop_U0_ap_continue == 1'b1) & (dataflow_in_loop_U0_ap_done == 1'b1))) begin
            loop_dataflow_output_count <= (loop_dataflow_output_count + 7'd1);
        end else if (((loop_dataflow_output_count == bound_minus_1) & (dataflow_in_loop_U0_ap_continue == 1'b1) & (dataflow_in_loop_U0_ap_done == 1'b1))) begin
            loop_dataflow_output_count <= 7'd0;
        end
    end
end

always @ (*) begin
    if (((loop_dataflow_output_count == bound_minus_1) & (dataflow_in_loop_U0_ap_done == 1'b1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((loop_dataflow_output_count == 7'd0) & (dataflow_in_loop_U0_ap_idle == 1'b1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((loop_dataflow_input_count == bound_minus_1) & (ap_start == 1'b1) & (dataflow_in_loop_U0_ap_ready == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((~(loop_dataflow_output_count == bound_minus_1) | (ap_continue == 1'b1))) begin
        dataflow_in_loop_U0_ap_continue = 1'b1;
    end else begin
        dataflow_in_loop_U0_ap_continue = 1'b0;
    end
end

assign ap_sync_continue = ap_continue;

assign ap_sync_done = dataflow_in_loop_U0_ap_done;

assign ap_sync_ready = dataflow_in_loop_U0_ap_ready;

assign bound_minus_1 = (7'd112 - 7'd1);

assign dataflow_in_loop_U0_ap_start = ap_start;

assign dataflow_in_loop_U0_start_full_n = 1'b1;

assign dataflow_in_loop_U0_start_write = 1'b0;

assign input_V_address0 = dataflow_in_loop_U0_input_V_address0;

assign input_V_address1 = 13'd0;

assign input_V_ce0 = dataflow_in_loop_U0_input_V_ce0;

assign input_V_ce1 = 1'b0;

assign input_V_d0 = 216'd0;

assign input_V_d1 = 216'd0;

assign input_V_we0 = 1'b0;

assign input_V_we1 = 1'b0;

assign output_V_address0 = 15'd0;

assign output_V_address1 = dataflow_in_loop_U0_output_V_address1;

assign output_V_ce0 = 1'b0;

assign output_V_ce1 = dataflow_in_loop_U0_output_V_ce1;

assign output_V_d0 = 288'd0;

assign output_V_d1 = dataflow_in_loop_U0_output_V_d1;

assign output_V_we0 = 1'b0;

assign output_V_we1 = dataflow_in_loop_U0_output_V_we1;

endmodule //dataflow_parent_loop_2
