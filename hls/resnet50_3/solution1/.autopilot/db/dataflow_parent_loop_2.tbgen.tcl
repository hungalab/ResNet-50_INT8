set moduleName dataflow_parent_loop_2
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dataflow_parent_loop.2}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 1024 regular {array 16 { 1 3 } 1 1 }  }
	{ output_r float 32 regular {array 1000 { 0 } 0 1 }  }
	{ ddr_V int 128 regular {axi_master 0}  }
	{ bias float 32 regular {array 1000 { 1 3 } 1 1 }  }
	{ scale float 32 regular {array 1000 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 1024, "direction" : "READONLY"} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ddr_V", "interface" : "axi_master", "bitwidth" : 128, "direction" : "READONLY"} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "scale", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 87
set portList { 
	{ input_V_address0 sc_out sc_lv 4 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_d0 sc_out sc_lv 1024 signal 0 } 
	{ input_V_q0 sc_in sc_lv 1024 signal 0 } 
	{ input_V_we0 sc_out sc_logic 1 signal 0 } 
	{ input_V_address1 sc_out sc_lv 4 signal 0 } 
	{ input_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ input_V_d1 sc_out sc_lv 1024 signal 0 } 
	{ input_V_q1 sc_in sc_lv 1024 signal 0 } 
	{ input_V_we1 sc_out sc_logic 1 signal 0 } 
	{ output_r_address0 sc_out sc_lv 10 signal 1 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_r_d0 sc_out sc_lv 32 signal 1 } 
	{ output_r_q0 sc_in sc_lv 32 signal 1 } 
	{ output_r_we0 sc_out sc_logic 1 signal 1 } 
	{ m_axi_ddr_V_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_ddr_V_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_AWLEN sc_out sc_lv 32 signal 2 } 
	{ m_axi_ddr_V_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_ddr_V_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_ddr_V_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_WDATA sc_out sc_lv 128 signal 2 } 
	{ m_axi_ddr_V_WSTRB sc_out sc_lv 16 signal 2 } 
	{ m_axi_ddr_V_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_ddr_V_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_ARLEN sc_out sc_lv 32 signal 2 } 
	{ m_axi_ddr_V_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_ddr_V_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_ddr_V_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_ddr_V_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_RDATA sc_in sc_lv 128 signal 2 } 
	{ m_axi_ddr_V_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_ddr_V_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_ddr_V_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_ddr_V_BUSER sc_in sc_lv 1 signal 2 } 
	{ bias_address0 sc_out sc_lv 10 signal 3 } 
	{ bias_ce0 sc_out sc_logic 1 signal 3 } 
	{ bias_d0 sc_out sc_lv 32 signal 3 } 
	{ bias_q0 sc_in sc_lv 32 signal 3 } 
	{ bias_we0 sc_out sc_logic 1 signal 3 } 
	{ bias_address1 sc_out sc_lv 10 signal 3 } 
	{ bias_ce1 sc_out sc_logic 1 signal 3 } 
	{ bias_d1 sc_out sc_lv 32 signal 3 } 
	{ bias_q1 sc_in sc_lv 32 signal 3 } 
	{ bias_we1 sc_out sc_logic 1 signal 3 } 
	{ scale_address0 sc_out sc_lv 10 signal 4 } 
	{ scale_ce0 sc_out sc_logic 1 signal 4 } 
	{ scale_d0 sc_out sc_lv 32 signal 4 } 
	{ scale_q0 sc_in sc_lv 32 signal 4 } 
	{ scale_we0 sc_out sc_logic 1 signal 4 } 
	{ scale_address1 sc_out sc_lv 10 signal 4 } 
	{ scale_ce1 sc_out sc_logic 1 signal 4 } 
	{ scale_d1 sc_out sc_lv 32 signal 4 } 
	{ scale_q1 sc_in sc_lv 32 signal 4 } 
	{ scale_we1 sc_out sc_logic 1 signal 4 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "input_V", "role": "d0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "input_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "we0" }} , 
 	{ "name": "input_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_V", "role": "address1" }} , 
 	{ "name": "input_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce1" }} , 
 	{ "name": "input_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "input_V", "role": "d1" }} , 
 	{ "name": "input_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "input_V", "role": "q1" }} , 
 	{ "name": "input_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "we1" }} , 
 	{ "name": "output_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address0" }} , 
 	{ "name": "output_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce0" }} , 
 	{ "name": "output_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d0" }} , 
 	{ "name": "output_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "q0" }} , 
 	{ "name": "output_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we0" }} , 
 	{ "name": "m_axi_ddr_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_ddr_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_ddr_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_ddr_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWID" }} , 
 	{ "name": "m_axi_ddr_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_ddr_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_ddr_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_ddr_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_ddr_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_ddr_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_ddr_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_ddr_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_ddr_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_ddr_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_ddr_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_ddr_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":128, "type": "signal", "bundle":{"name": "ddr_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_ddr_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ddr_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_ddr_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_ddr_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "WID" }} , 
 	{ "name": "m_axi_ddr_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_ddr_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_ddr_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_ddr_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_ddr_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARID" }} , 
 	{ "name": "m_axi_ddr_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_ddr_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_ddr_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_ddr_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_ddr_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_ddr_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_ddr_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_ddr_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_ddr_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_ddr_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_ddr_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_ddr_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":128, "type": "signal", "bundle":{"name": "ddr_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_ddr_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_ddr_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "RID" }} , 
 	{ "name": "m_axi_ddr_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_ddr_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_ddr_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_ddr_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_ddr_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ddr_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_ddr_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "BID" }} , 
 	{ "name": "m_axi_ddr_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ddr_V", "role": "BUSER" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "d0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "bias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "we0" }} , 
 	{ "name": "bias_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bias", "role": "address1" }} , 
 	{ "name": "bias_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce1" }} , 
 	{ "name": "bias_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "d1" }} , 
 	{ "name": "bias_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q1" }} , 
 	{ "name": "bias_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "we1" }} , 
 	{ "name": "scale_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "scale", "role": "address0" }} , 
 	{ "name": "scale_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "ce0" }} , 
 	{ "name": "scale_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "scale", "role": "d0" }} , 
 	{ "name": "scale_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "scale", "role": "q0" }} , 
 	{ "name": "scale_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "we0" }} , 
 	{ "name": "scale_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "scale", "role": "address1" }} , 
 	{ "name": "scale_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "ce1" }} , 
 	{ "name": "scale_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "scale", "role": "d1" }} , 
 	{ "name": "scale_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "scale", "role": "q1" }} , 
 	{ "name": "scale_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "we1" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dataflow_parent_loop_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "137029", "EstimateLatencyMax" : "137029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "dataflow_in_loop_U0"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "dataflow_in_loop_U0"}],
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "dataflow_in_loop_U0", "Port" : "input_V"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "dataflow_in_loop_U0", "Port" : "output_r"}]},
			{"Name" : "ddr_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "dataflow_in_loop_U0", "Port" : "ddr_V"}]},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "dataflow_in_loop_U0", "Port" : "bias"}]},
			{"Name" : "scale", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "dataflow_in_loop_U0", "Port" : "scale"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0", "Parent" : "0", "Child" : ["2", "3", "4", "72"],
		"CDFG" : "dataflow_in_loop",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "164", "EstimateLatencyMax" : "164",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "3", "Name" : "fc_load_weight_U0"}],
		"OutputProcess" : [
			{"ID" : "4", "Name" : "fc_compute_1_U0"}],
		"Port" : [
			{"Name" : "ddr_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "fc_load_weight_U0", "Port" : "ddr_V"}]},
			{"Name" : "och_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "fc_compute_1_U0", "Port" : "input_V"}]},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "fc_compute_1_U0", "Port" : "bias"}]},
			{"Name" : "scale", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "fc_compute_1_U0", "Port" : "scale"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "fc_compute_1_U0", "Port" : "output_r"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.weight_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_load_weight_U0", "Parent" : "1",
		"CDFG" : "fc_load_weight",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "136", "EstimateLatencyMax" : "136",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "2"},
			{"Name" : "ddr_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ddr_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "ddr_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "och_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "och_0_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "72",
				"BlockSignal" : [
					{"Name" : "och_0_out_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0", "Parent" : "1", "Child" : ["5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71"],
		"CDFG" : "fc_compute_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "2"},
			{"Name" : "input_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "scale", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "och", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "72",
				"BlockSignal" : [
					{"Name" : "och_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_fadd_32ns_32ns_32_4_full_dsp_1_U3532", "Parent" : "4"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_fmul_32ns_32ns_32_2_max_dsp_1_U3533", "Parent" : "4"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_sitofp_32s_32_3_1_U3534", "Parent" : "4"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3535", "Parent" : "4"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3536", "Parent" : "4"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3537", "Parent" : "4"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3538", "Parent" : "4"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3539", "Parent" : "4"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3540", "Parent" : "4"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3541", "Parent" : "4"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3542", "Parent" : "4"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3543", "Parent" : "4"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3544", "Parent" : "4"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3545", "Parent" : "4"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3546", "Parent" : "4"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3547", "Parent" : "4"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3548", "Parent" : "4"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3549", "Parent" : "4"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3550", "Parent" : "4"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3551", "Parent" : "4"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3552", "Parent" : "4"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3553", "Parent" : "4"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3554", "Parent" : "4"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3555", "Parent" : "4"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3556", "Parent" : "4"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3557", "Parent" : "4"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3558", "Parent" : "4"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3559", "Parent" : "4"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3560", "Parent" : "4"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3561", "Parent" : "4"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3562", "Parent" : "4"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3563", "Parent" : "4"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3564", "Parent" : "4"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3565", "Parent" : "4"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3566", "Parent" : "4"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3567", "Parent" : "4"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3568", "Parent" : "4"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3569", "Parent" : "4"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3570", "Parent" : "4"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3571", "Parent" : "4"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3572", "Parent" : "4"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3573", "Parent" : "4"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3574", "Parent" : "4"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3575", "Parent" : "4"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3576", "Parent" : "4"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3577", "Parent" : "4"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3578", "Parent" : "4"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3579", "Parent" : "4"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3580", "Parent" : "4"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3581", "Parent" : "4"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3582", "Parent" : "4"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3583", "Parent" : "4"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3584", "Parent" : "4"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3585", "Parent" : "4"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3586", "Parent" : "4"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3587", "Parent" : "4"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3588", "Parent" : "4"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3589", "Parent" : "4"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3590", "Parent" : "4"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3591", "Parent" : "4"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3592", "Parent" : "4"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3593", "Parent" : "4"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3594", "Parent" : "4"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3595", "Parent" : "4"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3596", "Parent" : "4"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3597", "Parent" : "4"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.fc_compute_1_U0.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3598", "Parent" : "4"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dataflow_in_loop_U0.och_0_c_U", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	dataflow_parent_loop_2 {
		input_V {Type I LastRead 1 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 10}
		ddr_V {Type I LastRead 135 FirstWrite -1}
		bias {Type I LastRead 6 FirstWrite -1}
		scale {Type I LastRead 3 FirstWrite -1}}
	dataflow_in_loop {
		ddr_V {Type I LastRead 135 FirstWrite -1}
		och_0 {Type I LastRead 0 FirstWrite -1}
		input_V {Type I LastRead 1 FirstWrite -1}
		bias {Type I LastRead 6 FirstWrite -1}
		scale {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 10}}
	fc_load_weight {
		weight_V {Type O LastRead -1 FirstWrite 16}
		ddr_V {Type I LastRead 135 FirstWrite -1}
		och_0 {Type I LastRead 0 FirstWrite -1}
		och_0_out {Type O LastRead -1 FirstWrite 0}}
	fc_compute_1 {
		weight_V {Type I LastRead 1 FirstWrite -1}
		input_V {Type I LastRead 1 FirstWrite -1}
		bias {Type I LastRead 6 FirstWrite -1}
		scale {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 10}
		och {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "137029", "Max" : "137029"}
	, {"Name" : "Interval", "Min" : "137029", "Max" : "137029"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 4 }  { input_V_ce0 mem_ce 1 1 }  { input_V_d0 mem_din 1 1024 }  { input_V_q0 mem_dout 0 1024 }  { input_V_we0 mem_we 1 1 }  { input_V_address1 mem_address 1 4 }  { input_V_ce1 mem_ce 1 1 }  { input_V_d1 mem_din 1 1024 }  { input_V_q1 mem_dout 0 1024 }  { input_V_we1 mem_we 1 1 } } }
	output_r { ap_memory {  { output_r_address0 mem_address 1 10 }  { output_r_ce0 mem_ce 1 1 }  { output_r_d0 mem_din 1 32 }  { output_r_q0 mem_dout 0 32 }  { output_r_we0 mem_we 1 1 } } }
	ddr_V { m_axi {  { m_axi_ddr_V_AWVALID VALID 1 1 }  { m_axi_ddr_V_AWREADY READY 0 1 }  { m_axi_ddr_V_AWADDR ADDR 1 32 }  { m_axi_ddr_V_AWID ID 1 1 }  { m_axi_ddr_V_AWLEN LEN 1 32 }  { m_axi_ddr_V_AWSIZE SIZE 1 3 }  { m_axi_ddr_V_AWBURST BURST 1 2 }  { m_axi_ddr_V_AWLOCK LOCK 1 2 }  { m_axi_ddr_V_AWCACHE CACHE 1 4 }  { m_axi_ddr_V_AWPROT PROT 1 3 }  { m_axi_ddr_V_AWQOS QOS 1 4 }  { m_axi_ddr_V_AWREGION REGION 1 4 }  { m_axi_ddr_V_AWUSER USER 1 1 }  { m_axi_ddr_V_WVALID VALID 1 1 }  { m_axi_ddr_V_WREADY READY 0 1 }  { m_axi_ddr_V_WDATA DATA 1 128 }  { m_axi_ddr_V_WSTRB STRB 1 16 }  { m_axi_ddr_V_WLAST LAST 1 1 }  { m_axi_ddr_V_WID ID 1 1 }  { m_axi_ddr_V_WUSER USER 1 1 }  { m_axi_ddr_V_ARVALID VALID 1 1 }  { m_axi_ddr_V_ARREADY READY 0 1 }  { m_axi_ddr_V_ARADDR ADDR 1 32 }  { m_axi_ddr_V_ARID ID 1 1 }  { m_axi_ddr_V_ARLEN LEN 1 32 }  { m_axi_ddr_V_ARSIZE SIZE 1 3 }  { m_axi_ddr_V_ARBURST BURST 1 2 }  { m_axi_ddr_V_ARLOCK LOCK 1 2 }  { m_axi_ddr_V_ARCACHE CACHE 1 4 }  { m_axi_ddr_V_ARPROT PROT 1 3 }  { m_axi_ddr_V_ARQOS QOS 1 4 }  { m_axi_ddr_V_ARREGION REGION 1 4 }  { m_axi_ddr_V_ARUSER USER 1 1 }  { m_axi_ddr_V_RVALID VALID 0 1 }  { m_axi_ddr_V_RREADY READY 1 1 }  { m_axi_ddr_V_RDATA DATA 0 128 }  { m_axi_ddr_V_RLAST LAST 0 1 }  { m_axi_ddr_V_RID ID 0 1 }  { m_axi_ddr_V_RUSER USER 0 1 }  { m_axi_ddr_V_RRESP RESP 0 2 }  { m_axi_ddr_V_BVALID VALID 0 1 }  { m_axi_ddr_V_BREADY READY 1 1 }  { m_axi_ddr_V_BRESP RESP 0 2 }  { m_axi_ddr_V_BID ID 0 1 }  { m_axi_ddr_V_BUSER USER 0 1 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 10 }  { bias_ce0 mem_ce 1 1 }  { bias_d0 mem_din 1 32 }  { bias_q0 mem_dout 0 32 }  { bias_we0 mem_we 1 1 }  { bias_address1 mem_address 1 10 }  { bias_ce1 mem_ce 1 1 }  { bias_d1 mem_din 1 32 }  { bias_q1 mem_dout 0 32 }  { bias_we1 mem_we 1 1 } } }
	scale { ap_memory {  { scale_address0 mem_address 1 10 }  { scale_ce0 mem_ce 1 1 }  { scale_d0 mem_din 1 32 }  { scale_q0 mem_dout 0 32 }  { scale_we0 mem_we 1 1 }  { scale_address1 mem_address 1 10 }  { scale_ce1 mem_ce 1 1 }  { scale_d1 mem_din 1 32 }  { scale_q1 mem_dout 0 32 }  { scale_we1 mem_we 1 1 } } }
}
