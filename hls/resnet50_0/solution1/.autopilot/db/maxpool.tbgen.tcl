set moduleName maxpool
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {maxpool}
set C_modelType { void 0 }
set C_modelArgList {
	{ buf0_V int 288 regular {array 25088 { 3 0 } 0 1 } {global 1}  }
	{ buf1_V int 288 regular {array 25088 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "buf0_V", "interface" : "memory", "bitwidth" : 288, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "buf1_V", "interface" : "memory", "bitwidth" : 288, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ buf0_V_address1 sc_out sc_lv 15 signal 0 } 
	{ buf0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ buf0_V_we1 sc_out sc_logic 1 signal 0 } 
	{ buf0_V_d1 sc_out sc_lv 288 signal 0 } 
	{ buf1_V_address0 sc_out sc_lv 15 signal 1 } 
	{ buf1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ buf1_V_q0 sc_in sc_lv 288 signal 1 } 
	{ buf1_V_address1 sc_out sc_lv 15 signal 1 } 
	{ buf1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ buf1_V_q1 sc_in sc_lv 288 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "buf0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "buf0_V", "role": "address1" }} , 
 	{ "name": "buf0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf0_V", "role": "ce1" }} , 
 	{ "name": "buf0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf0_V", "role": "we1" }} , 
 	{ "name": "buf0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "buf0_V", "role": "d1" }} , 
 	{ "name": "buf1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "buf1_V", "role": "address0" }} , 
 	{ "name": "buf1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf1_V", "role": "ce0" }} , 
 	{ "name": "buf1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "buf1_V", "role": "q0" }} , 
 	{ "name": "buf1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "buf1_V", "role": "address1" }} , 
 	{ "name": "buf1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf1_V", "role": "ce1" }} , 
 	{ "name": "buf1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "buf1_V", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "maxpool",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "40769", "EstimateLatencyMax" : "40769",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buf0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buf1_V", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	maxpool {
		buf0_V {Type O LastRead -1 FirstWrite 3}
		buf1_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "40769", "Max" : "40769"}
	, {"Name" : "Interval", "Min" : "40769", "Max" : "40769"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	buf0_V { ap_memory {  { buf0_V_address1 MemPortADDR2 1 15 }  { buf0_V_ce1 MemPortCE2 1 1 }  { buf0_V_we1 MemPortWE2 1 1 }  { buf0_V_d1 MemPortDIN2 1 288 } } }
	buf1_V { ap_memory {  { buf1_V_address0 mem_address 1 15 }  { buf1_V_ce0 mem_ce 1 1 }  { buf1_V_q0 mem_dout 0 288 }  { buf1_V_address1 MemPortADDR2 1 15 }  { buf1_V_ce1 MemPortCE2 1 1 }  { buf1_V_q1 MemPortDOUT2 0 288 } } }
}
