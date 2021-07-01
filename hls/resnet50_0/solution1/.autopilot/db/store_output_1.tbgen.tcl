set moduleName store_output_1
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
set C_modelName {store_output.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_V int 288 regular {array 25088 { 3 0 } 0 1 }  }
	{ bias int 2048 regular {array 4 { 1 } 1 1 }  }
	{ scale int 2048 regular {array 4 { 1 } 1 1 }  }
	{ TO_r int 3 regular  }
	{ outbuf_V int 1536 regular {array 12544 { 1 0 } 3 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 288, "direction" : "WRITEONLY"} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 2048, "direction" : "READONLY"} , 
 	{ "Name" : "scale", "interface" : "memory", "bitwidth" : 2048, "direction" : "READONLY"} , 
 	{ "Name" : "TO_r", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "outbuf_V", "interface" : "memory", "bitwidth" : 1536, "direction" : "READWRITE", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_V_address1 sc_out sc_lv 15 signal 0 } 
	{ output_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ output_V_we1 sc_out sc_logic 1 signal 0 } 
	{ output_V_d1 sc_out sc_lv 288 signal 0 } 
	{ bias_address0 sc_out sc_lv 2 signal 1 } 
	{ bias_ce0 sc_out sc_logic 1 signal 1 } 
	{ bias_q0 sc_in sc_lv 2048 signal 1 } 
	{ scale_address0 sc_out sc_lv 2 signal 2 } 
	{ scale_ce0 sc_out sc_logic 1 signal 2 } 
	{ scale_q0 sc_in sc_lv 2048 signal 2 } 
	{ TO_r sc_in sc_lv 3 signal 3 } 
	{ outbuf_V_address0 sc_out sc_lv 14 signal 4 } 
	{ outbuf_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ outbuf_V_q0 sc_in sc_lv 1536 signal 4 } 
	{ outbuf_V_address1 sc_out sc_lv 14 signal 4 } 
	{ outbuf_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ outbuf_V_we1 sc_out sc_logic 1 signal 4 } 
	{ outbuf_V_d1 sc_out sc_lv 1536 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "output_V", "role": "address1" }} , 
 	{ "name": "output_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce1" }} , 
 	{ "name": "output_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we1" }} , 
 	{ "name": "output_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "output_V", "role": "d1" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2048, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "scale_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "scale", "role": "address0" }} , 
 	{ "name": "scale_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "ce0" }} , 
 	{ "name": "scale_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2048, "type": "signal", "bundle":{"name": "scale", "role": "q0" }} , 
 	{ "name": "TO_r", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "TO_r", "role": "default" }} , 
 	{ "name": "outbuf_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outbuf_V", "role": "address0" }} , 
 	{ "name": "outbuf_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V", "role": "ce0" }} , 
 	{ "name": "outbuf_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1536, "type": "signal", "bundle":{"name": "outbuf_V", "role": "q0" }} , 
 	{ "name": "outbuf_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outbuf_V", "role": "address1" }} , 
 	{ "name": "outbuf_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V", "role": "ce1" }} , 
 	{ "name": "outbuf_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V", "role": "we1" }} , 
 	{ "name": "outbuf_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":1536, "type": "signal", "bundle":{"name": "outbuf_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "4", "7", "10", "13", "16", "19", "22", "25", "28", "31", "34", "37", "40", "43", "46", "49", "52", "55", "58", "61", "64", "67", "70", "73", "76", "79", "82", "85", "88", "91", "94", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227"],
		"CDFG" : "store_output_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6287", "EstimateLatencyMax" : "25103",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "scale", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "TO_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "outbuf_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_roundf_fu_859", "Port" : "mask_table1"},
					{"ID" : "52", "SubInstance" : "grp_roundf_fu_868", "Port" : "mask_table1"},
					{"ID" : "55", "SubInstance" : "grp_roundf_fu_877", "Port" : "mask_table1"},
					{"ID" : "58", "SubInstance" : "grp_roundf_fu_886", "Port" : "mask_table1"},
					{"ID" : "61", "SubInstance" : "grp_roundf_fu_895", "Port" : "mask_table1"},
					{"ID" : "64", "SubInstance" : "grp_roundf_fu_904", "Port" : "mask_table1"},
					{"ID" : "67", "SubInstance" : "grp_roundf_fu_913", "Port" : "mask_table1"},
					{"ID" : "70", "SubInstance" : "grp_roundf_fu_922", "Port" : "mask_table1"},
					{"ID" : "73", "SubInstance" : "grp_roundf_fu_931", "Port" : "mask_table1"},
					{"ID" : "19", "SubInstance" : "grp_roundf_fu_769", "Port" : "mask_table1"},
					{"ID" : "22", "SubInstance" : "grp_roundf_fu_778", "Port" : "mask_table1"},
					{"ID" : "25", "SubInstance" : "grp_roundf_fu_787", "Port" : "mask_table1"},
					{"ID" : "28", "SubInstance" : "grp_roundf_fu_796", "Port" : "mask_table1"},
					{"ID" : "31", "SubInstance" : "grp_roundf_fu_805", "Port" : "mask_table1"},
					{"ID" : "1", "SubInstance" : "grp_roundf_fu_715", "Port" : "mask_table1"},
					{"ID" : "76", "SubInstance" : "grp_roundf_fu_940", "Port" : "mask_table1"},
					{"ID" : "79", "SubInstance" : "grp_roundf_fu_949", "Port" : "mask_table1"},
					{"ID" : "82", "SubInstance" : "grp_roundf_fu_958", "Port" : "mask_table1"},
					{"ID" : "85", "SubInstance" : "grp_roundf_fu_967", "Port" : "mask_table1"},
					{"ID" : "88", "SubInstance" : "grp_roundf_fu_976", "Port" : "mask_table1"},
					{"ID" : "91", "SubInstance" : "grp_roundf_fu_985", "Port" : "mask_table1"},
					{"ID" : "94", "SubInstance" : "grp_roundf_fu_994", "Port" : "mask_table1"},
					{"ID" : "34", "SubInstance" : "grp_roundf_fu_814", "Port" : "mask_table1"},
					{"ID" : "37", "SubInstance" : "grp_roundf_fu_823", "Port" : "mask_table1"},
					{"ID" : "40", "SubInstance" : "grp_roundf_fu_832", "Port" : "mask_table1"},
					{"ID" : "43", "SubInstance" : "grp_roundf_fu_841", "Port" : "mask_table1"},
					{"ID" : "46", "SubInstance" : "grp_roundf_fu_850", "Port" : "mask_table1"},
					{"ID" : "7", "SubInstance" : "grp_roundf_fu_733", "Port" : "mask_table1"},
					{"ID" : "4", "SubInstance" : "grp_roundf_fu_724", "Port" : "mask_table1"},
					{"ID" : "10", "SubInstance" : "grp_roundf_fu_742", "Port" : "mask_table1"},
					{"ID" : "13", "SubInstance" : "grp_roundf_fu_751", "Port" : "mask_table1"},
					{"ID" : "16", "SubInstance" : "grp_roundf_fu_760", "Port" : "mask_table1"}]},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_roundf_fu_859", "Port" : "one_half_table2"},
					{"ID" : "52", "SubInstance" : "grp_roundf_fu_868", "Port" : "one_half_table2"},
					{"ID" : "55", "SubInstance" : "grp_roundf_fu_877", "Port" : "one_half_table2"},
					{"ID" : "58", "SubInstance" : "grp_roundf_fu_886", "Port" : "one_half_table2"},
					{"ID" : "61", "SubInstance" : "grp_roundf_fu_895", "Port" : "one_half_table2"},
					{"ID" : "64", "SubInstance" : "grp_roundf_fu_904", "Port" : "one_half_table2"},
					{"ID" : "67", "SubInstance" : "grp_roundf_fu_913", "Port" : "one_half_table2"},
					{"ID" : "70", "SubInstance" : "grp_roundf_fu_922", "Port" : "one_half_table2"},
					{"ID" : "73", "SubInstance" : "grp_roundf_fu_931", "Port" : "one_half_table2"},
					{"ID" : "19", "SubInstance" : "grp_roundf_fu_769", "Port" : "one_half_table2"},
					{"ID" : "22", "SubInstance" : "grp_roundf_fu_778", "Port" : "one_half_table2"},
					{"ID" : "25", "SubInstance" : "grp_roundf_fu_787", "Port" : "one_half_table2"},
					{"ID" : "28", "SubInstance" : "grp_roundf_fu_796", "Port" : "one_half_table2"},
					{"ID" : "31", "SubInstance" : "grp_roundf_fu_805", "Port" : "one_half_table2"},
					{"ID" : "1", "SubInstance" : "grp_roundf_fu_715", "Port" : "one_half_table2"},
					{"ID" : "76", "SubInstance" : "grp_roundf_fu_940", "Port" : "one_half_table2"},
					{"ID" : "79", "SubInstance" : "grp_roundf_fu_949", "Port" : "one_half_table2"},
					{"ID" : "82", "SubInstance" : "grp_roundf_fu_958", "Port" : "one_half_table2"},
					{"ID" : "85", "SubInstance" : "grp_roundf_fu_967", "Port" : "one_half_table2"},
					{"ID" : "88", "SubInstance" : "grp_roundf_fu_976", "Port" : "one_half_table2"},
					{"ID" : "91", "SubInstance" : "grp_roundf_fu_985", "Port" : "one_half_table2"},
					{"ID" : "94", "SubInstance" : "grp_roundf_fu_994", "Port" : "one_half_table2"},
					{"ID" : "34", "SubInstance" : "grp_roundf_fu_814", "Port" : "one_half_table2"},
					{"ID" : "37", "SubInstance" : "grp_roundf_fu_823", "Port" : "one_half_table2"},
					{"ID" : "40", "SubInstance" : "grp_roundf_fu_832", "Port" : "one_half_table2"},
					{"ID" : "43", "SubInstance" : "grp_roundf_fu_841", "Port" : "one_half_table2"},
					{"ID" : "46", "SubInstance" : "grp_roundf_fu_850", "Port" : "one_half_table2"},
					{"ID" : "7", "SubInstance" : "grp_roundf_fu_733", "Port" : "one_half_table2"},
					{"ID" : "4", "SubInstance" : "grp_roundf_fu_724", "Port" : "one_half_table2"},
					{"ID" : "10", "SubInstance" : "grp_roundf_fu_742", "Port" : "one_half_table2"},
					{"ID" : "13", "SubInstance" : "grp_roundf_fu_751", "Port" : "one_half_table2"},
					{"ID" : "16", "SubInstance" : "grp_roundf_fu_760", "Port" : "one_half_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_715", "Parent" : "0", "Child" : ["2", "3"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_715.mask_table1_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_715.one_half_table2_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_724", "Parent" : "0", "Child" : ["5", "6"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_724.mask_table1_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_724.one_half_table2_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_733", "Parent" : "0", "Child" : ["8", "9"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_733.mask_table1_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_733.one_half_table2_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_742", "Parent" : "0", "Child" : ["11", "12"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_742.mask_table1_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_742.one_half_table2_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_751", "Parent" : "0", "Child" : ["14", "15"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_751.mask_table1_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_751.one_half_table2_U", "Parent" : "13"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_760", "Parent" : "0", "Child" : ["17", "18"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_760.mask_table1_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_760.one_half_table2_U", "Parent" : "16"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_769", "Parent" : "0", "Child" : ["20", "21"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_769.mask_table1_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_769.one_half_table2_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_778", "Parent" : "0", "Child" : ["23", "24"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_778.mask_table1_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_778.one_half_table2_U", "Parent" : "22"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_787", "Parent" : "0", "Child" : ["26", "27"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_787.mask_table1_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_787.one_half_table2_U", "Parent" : "25"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_796", "Parent" : "0", "Child" : ["29", "30"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_796.mask_table1_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_796.one_half_table2_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_805", "Parent" : "0", "Child" : ["32", "33"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_805.mask_table1_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_805.one_half_table2_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_814", "Parent" : "0", "Child" : ["35", "36"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_814.mask_table1_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_814.one_half_table2_U", "Parent" : "34"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_823", "Parent" : "0", "Child" : ["38", "39"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_823.mask_table1_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_823.one_half_table2_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_832", "Parent" : "0", "Child" : ["41", "42"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_832.mask_table1_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_832.one_half_table2_U", "Parent" : "40"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_841", "Parent" : "0", "Child" : ["44", "45"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_841.mask_table1_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_841.one_half_table2_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_850", "Parent" : "0", "Child" : ["47", "48"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_850.mask_table1_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_850.one_half_table2_U", "Parent" : "46"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_859", "Parent" : "0", "Child" : ["50", "51"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_859.mask_table1_U", "Parent" : "49"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_859.one_half_table2_U", "Parent" : "49"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_868", "Parent" : "0", "Child" : ["53", "54"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_868.mask_table1_U", "Parent" : "52"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_868.one_half_table2_U", "Parent" : "52"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_877", "Parent" : "0", "Child" : ["56", "57"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_877.mask_table1_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_877.one_half_table2_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_886", "Parent" : "0", "Child" : ["59", "60"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_886.mask_table1_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_886.one_half_table2_U", "Parent" : "58"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_895", "Parent" : "0", "Child" : ["62", "63"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_895.mask_table1_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_895.one_half_table2_U", "Parent" : "61"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_904", "Parent" : "0", "Child" : ["65", "66"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_904.mask_table1_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_904.one_half_table2_U", "Parent" : "64"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_913", "Parent" : "0", "Child" : ["68", "69"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_913.mask_table1_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_913.one_half_table2_U", "Parent" : "67"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_922", "Parent" : "0", "Child" : ["71", "72"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_922.mask_table1_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_922.one_half_table2_U", "Parent" : "70"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_931", "Parent" : "0", "Child" : ["74", "75"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_931.mask_table1_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_931.one_half_table2_U", "Parent" : "73"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_940", "Parent" : "0", "Child" : ["77", "78"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_940.mask_table1_U", "Parent" : "76"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_940.one_half_table2_U", "Parent" : "76"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_949", "Parent" : "0", "Child" : ["80", "81"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_949.mask_table1_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_949.one_half_table2_U", "Parent" : "79"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_958", "Parent" : "0", "Child" : ["83", "84"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_958.mask_table1_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_958.one_half_table2_U", "Parent" : "82"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_967", "Parent" : "0", "Child" : ["86", "87"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_967.mask_table1_U", "Parent" : "85"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_967.one_half_table2_U", "Parent" : "85"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_976", "Parent" : "0", "Child" : ["89", "90"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_976.mask_table1_U", "Parent" : "88"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_976.one_half_table2_U", "Parent" : "88"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_985", "Parent" : "0", "Child" : ["92", "93"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_985.mask_table1_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_985.one_half_table2_U", "Parent" : "91"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_994", "Parent" : "0", "Child" : ["95", "96"],
		"CDFG" : "roundf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_994.mask_table1_U", "Parent" : "94"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_994.one_half_table2_U", "Parent" : "94"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3772", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3773", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3774", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3775", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3776", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3777", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3778", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3779", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3780", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3781", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3782", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3783", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3784", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3785", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3786", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3787", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3788", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3789", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3790", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3791", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3792", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3793", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3794", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3795", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3796", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3797", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3798", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3799", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3800", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3801", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3802", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fadd_32ns_32ns_32_4_full_dsp_1_U3803", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3804", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3805", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3806", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3807", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3808", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3809", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3810", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3811", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3812", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3813", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3814", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3815", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3816", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3817", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3818", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3819", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3820", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3821", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3822", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3823", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3824", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3825", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3826", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3827", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3828", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3829", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3830", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3831", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3832", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3833", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3834", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fmul_32ns_32ns_32_2_max_dsp_1_U3835", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3836", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3837", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3838", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3839", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3840", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3841", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3842", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3843", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3844", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3845", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3846", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3847", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3848", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3849", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3850", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3851", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3852", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3853", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3854", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3855", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3856", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3857", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3858", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3859", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3860", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3861", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3862", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3863", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3864", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3865", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3866", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_sitofp_32s_32_3_1_U3867", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3868", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3869", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3870", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3871", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3872", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3873", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3874", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3875", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3876", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3877", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3878", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3879", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3880", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3881", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3882", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3883", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3884", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3885", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3886", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3887", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3888", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3889", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3890", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3891", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3892", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3893", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3894", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3895", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3896", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3897", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3898", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_fcmp_32ns_32ns_1_2_1_U3899", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_mul_mul_6ns_15ns_20_1_1_U3900", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_mac_muladd_3ns_13s_3ns_15_1_1_U3901", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_0_mul_mul_15ns_6ns_20_1_1_U3902", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	store_output_1 {
		output_V {Type O LastRead -1 FirstWrite 15}
		bias {Type I LastRead 1 FirstWrite -1}
		scale {Type I LastRead 1 FirstWrite -1}
		TO_r {Type I LastRead 0 FirstWrite -1}
		outbuf_V {Type IO LastRead 1 FirstWrite 2}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}
	roundf {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		one_half_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6287", "Max" : "25103"}
	, {"Name" : "Interval", "Min" : "6287", "Max" : "25103"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	output_V { ap_memory {  { output_V_address1 MemPortADDR2 1 15 }  { output_V_ce1 MemPortCE2 1 1 }  { output_V_we1 MemPortWE2 1 1 }  { output_V_d1 MemPortDIN2 1 288 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 2 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 2048 } } }
	scale { ap_memory {  { scale_address0 mem_address 1 2 }  { scale_ce0 mem_ce 1 1 }  { scale_q0 mem_dout 0 2048 } } }
	TO_r { ap_none {  { TO_r in_data 0 3 } } }
	outbuf_V { ap_memory {  { outbuf_V_address0 mem_address 1 14 }  { outbuf_V_ce0 mem_ce 1 1 }  { outbuf_V_q0 mem_dout 0 1536 }  { outbuf_V_address1 MemPortADDR2 1 14 }  { outbuf_V_ce1 MemPortCE2 1 1 }  { outbuf_V_we1 MemPortWE2 1 1 }  { outbuf_V_d1 MemPortDIN2 1 1536 } } }
}
