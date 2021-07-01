set moduleName fc_compute_1
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
set C_modelName {fc_compute.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ weight_V int 1024 regular {array 16 { 1 3 } 1 1 }  }
	{ input_V int 1024 regular {array 16 { 1 3 } 1 1 }  }
	{ bias float 32 regular {array 1000 { 1 3 } 1 1 }  }
	{ scale float 32 regular {array 1000 { 1 3 } 1 1 }  }
	{ output_r float 32 regular {array 1000 { 0 } 0 1 }  }
	{ och int 10 regular {fifo 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weight_V", "interface" : "memory", "bitwidth" : 1024, "direction" : "READONLY"} , 
 	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 1024, "direction" : "READONLY"} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "scale", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "och", "interface" : "fifo", "bitwidth" : 10, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ weight_V_address0 sc_out sc_lv 4 signal 0 } 
	{ weight_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ weight_V_q0 sc_in sc_lv 1024 signal 0 } 
	{ input_V_address0 sc_out sc_lv 4 signal 1 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_V_q0 sc_in sc_lv 1024 signal 1 } 
	{ bias_address0 sc_out sc_lv 10 signal 2 } 
	{ bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ bias_q0 sc_in sc_lv 32 signal 2 } 
	{ scale_address0 sc_out sc_lv 10 signal 3 } 
	{ scale_ce0 sc_out sc_logic 1 signal 3 } 
	{ scale_q0 sc_in sc_lv 32 signal 3 } 
	{ output_r_address0 sc_out sc_lv 10 signal 4 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_r_we0 sc_out sc_logic 1 signal 4 } 
	{ output_r_d0 sc_out sc_lv 32 signal 4 } 
	{ och_dout sc_in sc_lv 10 signal 5 } 
	{ och_empty_n sc_in sc_logic 1 signal 5 } 
	{ och_read sc_out sc_logic 1 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "weight_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "address0" }} , 
 	{ "name": "weight_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ce0" }} , 
 	{ "name": "weight_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "weight_V", "role": "q0" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "scale_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "scale", "role": "address0" }} , 
 	{ "name": "scale_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "ce0" }} , 
 	{ "name": "scale_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "scale", "role": "q0" }} , 
 	{ "name": "output_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address0" }} , 
 	{ "name": "output_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce0" }} , 
 	{ "name": "output_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we0" }} , 
 	{ "name": "output_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d0" }} , 
 	{ "name": "och_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "och", "role": "dout" }} , 
 	{ "name": "och_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "och", "role": "empty_n" }} , 
 	{ "name": "och_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "och", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67"],
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
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "scale", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "och", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "och_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_fadd_32ns_32ns_32_4_full_dsp_1_U3532", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_fmul_32ns_32ns_32_2_max_dsp_1_U3533", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_sitofp_32s_32_3_1_U3534", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3535", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3536", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3537", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3538", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3539", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3540", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3541", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3542", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3543", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3544", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3545", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3546", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3547", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3548", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3549", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3550", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3551", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3552", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3553", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3554", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3555", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3556", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3557", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3558", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3559", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3560", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3561", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3562", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3563", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3564", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3565", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3566", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3567", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3568", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3569", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3570", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3571", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3572", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3573", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3574", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3575", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3576", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3577", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3578", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3579", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3580", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3581", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3582", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3583", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3584", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3585", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3586", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3587", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3588", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3589", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3590", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3591", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3592", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3593", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3594", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3595", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3596", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3597", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_3_mac_muladd_8s_8ns_16s_17_1_1_U3598", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fc_compute_1 {
		weight_V {Type I LastRead 1 FirstWrite -1}
		input_V {Type I LastRead 1 FirstWrite -1}
		bias {Type I LastRead 6 FirstWrite -1}
		scale {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 10}
		och {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "27", "Max" : "27"}
	, {"Name" : "Interval", "Min" : "27", "Max" : "27"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	weight_V { ap_memory {  { weight_V_address0 mem_address 1 4 }  { weight_V_ce0 mem_ce 1 1 }  { weight_V_q0 mem_dout 0 1024 } } }
	input_V { ap_stable {  { input_V_address0 mem_address 1 4 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 1024 } } }
	bias { ap_stable {  { bias_address0 mem_address 1 10 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 32 } } }
	scale { ap_stable {  { scale_address0 mem_address 1 10 }  { scale_ce0 mem_ce 1 1 }  { scale_q0 mem_dout 0 32 } } }
	output_r { ap_memory {  { output_r_address0 mem_address 1 10 }  { output_r_ce0 mem_ce 1 1 }  { output_r_we0 mem_we 1 1 }  { output_r_d0 mem_din 1 32 } } }
	och { ap_fifo {  { och_dout fifo_data 0 10 }  { och_empty_n fifo_status 0 1 }  { och_read fifo_update 1 1 } } }
}
