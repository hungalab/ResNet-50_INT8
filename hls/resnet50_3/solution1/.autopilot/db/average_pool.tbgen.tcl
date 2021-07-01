set moduleName average_pool
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
set C_modelName {average_pool}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 288 regular {array 3136 { 1 3 } 1 1 }  }
	{ output_V int 1024 regular {array 16 { 3 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 288, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 1024, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 12 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 288 signal 0 } 
	{ output_V_address1 sc_out sc_lv 4 signal 1 } 
	{ output_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_V_we1 sc_out sc_lv 128 signal 1 } 
	{ output_V_d1 sc_out sc_lv 1024 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "output_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_V", "role": "address1" }} , 
 	{ "name": "output_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce1" }} , 
 	{ "name": "output_V_we1", "direction": "out", "datatype": "sc_lv", "bitwidth":128, "type": "signal", "bundle":{"name": "output_V", "role": "we1" }} , 
 	{ "name": "output_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "output_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "average_pool",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8414", "EstimateLatencyMax" : "8414",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mask_table1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.one_half_table2_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buf_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_fptrunc_64ns_32_2_1_U3519", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_ddiv_64ns_64ns_64_17_1_U3520", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_sitodp_32s_64_4_1_U3521", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	average_pool {
		input_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 30}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8414", "Max" : "8414"}
	, {"Name" : "Interval", "Min" : "8414", "Max" : "8414"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 12 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 288 } } }
	output_V { ap_memory {  { output_V_address1 MemPortADDR2 1 4 }  { output_V_ce1 MemPortCE2 1 1 }  { output_V_we1 MemPortWE2 1 128 }  { output_V_d1 MemPortDIN2 1 1024 } } }
}
