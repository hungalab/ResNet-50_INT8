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
	{ outbuf_V_2 int 1536 regular {array 12544 { 1 0 } 3 1 }  }
	{ output_V int 288 regular {array 25088 { 3 0 } 0 1 }  }
	{ bias int 2048 regular {array 16 { 1 } 1 1 }  }
	{ scale int 2048 regular {array 16 { 1 } 1 1 }  }
	{ OSIZE int 6 regular  }
	{ TO_r int 5 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "outbuf_V_2", "interface" : "memory", "bitwidth" : 1536, "direction" : "READWRITE"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 288, "direction" : "WRITEONLY"} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 2048, "direction" : "READONLY"} , 
 	{ "Name" : "scale", "interface" : "memory", "bitwidth" : 2048, "direction" : "READONLY"} , 
 	{ "Name" : "OSIZE", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "TO_r", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ outbuf_V_2_address0 sc_out sc_lv 14 signal 0 } 
	{ outbuf_V_2_ce0 sc_out sc_logic 1 signal 0 } 
	{ outbuf_V_2_q0 sc_in sc_lv 1536 signal 0 } 
	{ outbuf_V_2_address1 sc_out sc_lv 14 signal 0 } 
	{ outbuf_V_2_ce1 sc_out sc_logic 1 signal 0 } 
	{ outbuf_V_2_we1 sc_out sc_logic 1 signal 0 } 
	{ outbuf_V_2_d1 sc_out sc_lv 1536 signal 0 } 
	{ output_V_address1 sc_out sc_lv 15 signal 1 } 
	{ output_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_V_we1 sc_out sc_logic 1 signal 1 } 
	{ output_V_d1 sc_out sc_lv 288 signal 1 } 
	{ bias_address0 sc_out sc_lv 4 signal 2 } 
	{ bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ bias_q0 sc_in sc_lv 2048 signal 2 } 
	{ scale_address0 sc_out sc_lv 4 signal 3 } 
	{ scale_ce0 sc_out sc_logic 1 signal 3 } 
	{ scale_q0 sc_in sc_lv 2048 signal 3 } 
	{ OSIZE sc_in sc_lv 6 signal 4 } 
	{ TO_r sc_in sc_lv 5 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "outbuf_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "address0" }} , 
 	{ "name": "outbuf_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "ce0" }} , 
 	{ "name": "outbuf_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1536, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "q0" }} , 
 	{ "name": "outbuf_V_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "address1" }} , 
 	{ "name": "outbuf_V_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "ce1" }} , 
 	{ "name": "outbuf_V_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "we1" }} , 
 	{ "name": "outbuf_V_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":1536, "type": "signal", "bundle":{"name": "outbuf_V_2", "role": "d1" }} , 
 	{ "name": "output_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "output_V", "role": "address1" }} , 
 	{ "name": "output_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce1" }} , 
 	{ "name": "output_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we1" }} , 
 	{ "name": "output_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":288, "type": "signal", "bundle":{"name": "output_V", "role": "d1" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2048, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "scale_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "scale", "role": "address0" }} , 
 	{ "name": "scale_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "scale", "role": "ce0" }} , 
 	{ "name": "scale_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2048, "type": "signal", "bundle":{"name": "scale", "role": "q0" }} , 
 	{ "name": "OSIZE", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "OSIZE", "role": "default" }} , 
 	{ "name": "TO_r", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "TO_r", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "4", "7", "10", "13", "16", "19", "22", "25", "28", "31", "34", "37", "40", "43", "46", "49", "52", "55", "58", "61", "64", "67", "70", "73", "76", "79", "82", "85", "88", "91", "94", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228"],
		"CDFG" : "store_output_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "407", "EstimateLatencyMax" : "100367",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outbuf_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "scale", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OSIZE", "Type" : "None", "Direction" : "I"},
			{"Name" : "TO_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "grp_roundf_fu_860", "Port" : "mask_table1"},
					{"ID" : "55", "SubInstance" : "grp_roundf_fu_869", "Port" : "mask_table1"},
					{"ID" : "58", "SubInstance" : "grp_roundf_fu_878", "Port" : "mask_table1"},
					{"ID" : "61", "SubInstance" : "grp_roundf_fu_887", "Port" : "mask_table1"},
					{"ID" : "64", "SubInstance" : "grp_roundf_fu_896", "Port" : "mask_table1"},
					{"ID" : "67", "SubInstance" : "grp_roundf_fu_905", "Port" : "mask_table1"},
					{"ID" : "70", "SubInstance" : "grp_roundf_fu_914", "Port" : "mask_table1"},
					{"ID" : "10", "SubInstance" : "grp_roundf_fu_734", "Port" : "mask_table1"},
					{"ID" : "13", "SubInstance" : "grp_roundf_fu_743", "Port" : "mask_table1"},
					{"ID" : "16", "SubInstance" : "grp_roundf_fu_752", "Port" : "mask_table1"},
					{"ID" : "19", "SubInstance" : "grp_roundf_fu_761", "Port" : "mask_table1"},
					{"ID" : "22", "SubInstance" : "grp_roundf_fu_770", "Port" : "mask_table1"},
					{"ID" : "25", "SubInstance" : "grp_roundf_fu_779", "Port" : "mask_table1"},
					{"ID" : "1", "SubInstance" : "grp_roundf_fu_707", "Port" : "mask_table1"},
					{"ID" : "73", "SubInstance" : "grp_roundf_fu_923", "Port" : "mask_table1"},
					{"ID" : "76", "SubInstance" : "grp_roundf_fu_932", "Port" : "mask_table1"},
					{"ID" : "79", "SubInstance" : "grp_roundf_fu_941", "Port" : "mask_table1"},
					{"ID" : "82", "SubInstance" : "grp_roundf_fu_950", "Port" : "mask_table1"},
					{"ID" : "85", "SubInstance" : "grp_roundf_fu_959", "Port" : "mask_table1"},
					{"ID" : "88", "SubInstance" : "grp_roundf_fu_968", "Port" : "mask_table1"},
					{"ID" : "91", "SubInstance" : "grp_roundf_fu_977", "Port" : "mask_table1"},
					{"ID" : "94", "SubInstance" : "grp_roundf_fu_986", "Port" : "mask_table1"},
					{"ID" : "4", "SubInstance" : "grp_roundf_fu_716", "Port" : "mask_table1"},
					{"ID" : "7", "SubInstance" : "grp_roundf_fu_725", "Port" : "mask_table1"},
					{"ID" : "28", "SubInstance" : "grp_roundf_fu_788", "Port" : "mask_table1"},
					{"ID" : "31", "SubInstance" : "grp_roundf_fu_797", "Port" : "mask_table1"},
					{"ID" : "34", "SubInstance" : "grp_roundf_fu_806", "Port" : "mask_table1"},
					{"ID" : "37", "SubInstance" : "grp_roundf_fu_815", "Port" : "mask_table1"},
					{"ID" : "40", "SubInstance" : "grp_roundf_fu_824", "Port" : "mask_table1"},
					{"ID" : "43", "SubInstance" : "grp_roundf_fu_833", "Port" : "mask_table1"},
					{"ID" : "46", "SubInstance" : "grp_roundf_fu_842", "Port" : "mask_table1"},
					{"ID" : "49", "SubInstance" : "grp_roundf_fu_851", "Port" : "mask_table1"}]},
			{"Name" : "one_half_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "grp_roundf_fu_860", "Port" : "one_half_table2"},
					{"ID" : "55", "SubInstance" : "grp_roundf_fu_869", "Port" : "one_half_table2"},
					{"ID" : "58", "SubInstance" : "grp_roundf_fu_878", "Port" : "one_half_table2"},
					{"ID" : "61", "SubInstance" : "grp_roundf_fu_887", "Port" : "one_half_table2"},
					{"ID" : "64", "SubInstance" : "grp_roundf_fu_896", "Port" : "one_half_table2"},
					{"ID" : "67", "SubInstance" : "grp_roundf_fu_905", "Port" : "one_half_table2"},
					{"ID" : "70", "SubInstance" : "grp_roundf_fu_914", "Port" : "one_half_table2"},
					{"ID" : "10", "SubInstance" : "grp_roundf_fu_734", "Port" : "one_half_table2"},
					{"ID" : "13", "SubInstance" : "grp_roundf_fu_743", "Port" : "one_half_table2"},
					{"ID" : "16", "SubInstance" : "grp_roundf_fu_752", "Port" : "one_half_table2"},
					{"ID" : "19", "SubInstance" : "grp_roundf_fu_761", "Port" : "one_half_table2"},
					{"ID" : "22", "SubInstance" : "grp_roundf_fu_770", "Port" : "one_half_table2"},
					{"ID" : "25", "SubInstance" : "grp_roundf_fu_779", "Port" : "one_half_table2"},
					{"ID" : "1", "SubInstance" : "grp_roundf_fu_707", "Port" : "one_half_table2"},
					{"ID" : "73", "SubInstance" : "grp_roundf_fu_923", "Port" : "one_half_table2"},
					{"ID" : "76", "SubInstance" : "grp_roundf_fu_932", "Port" : "one_half_table2"},
					{"ID" : "79", "SubInstance" : "grp_roundf_fu_941", "Port" : "one_half_table2"},
					{"ID" : "82", "SubInstance" : "grp_roundf_fu_950", "Port" : "one_half_table2"},
					{"ID" : "85", "SubInstance" : "grp_roundf_fu_959", "Port" : "one_half_table2"},
					{"ID" : "88", "SubInstance" : "grp_roundf_fu_968", "Port" : "one_half_table2"},
					{"ID" : "91", "SubInstance" : "grp_roundf_fu_977", "Port" : "one_half_table2"},
					{"ID" : "94", "SubInstance" : "grp_roundf_fu_986", "Port" : "one_half_table2"},
					{"ID" : "4", "SubInstance" : "grp_roundf_fu_716", "Port" : "one_half_table2"},
					{"ID" : "7", "SubInstance" : "grp_roundf_fu_725", "Port" : "one_half_table2"},
					{"ID" : "28", "SubInstance" : "grp_roundf_fu_788", "Port" : "one_half_table2"},
					{"ID" : "31", "SubInstance" : "grp_roundf_fu_797", "Port" : "one_half_table2"},
					{"ID" : "34", "SubInstance" : "grp_roundf_fu_806", "Port" : "one_half_table2"},
					{"ID" : "37", "SubInstance" : "grp_roundf_fu_815", "Port" : "one_half_table2"},
					{"ID" : "40", "SubInstance" : "grp_roundf_fu_824", "Port" : "one_half_table2"},
					{"ID" : "43", "SubInstance" : "grp_roundf_fu_833", "Port" : "one_half_table2"},
					{"ID" : "46", "SubInstance" : "grp_roundf_fu_842", "Port" : "one_half_table2"},
					{"ID" : "49", "SubInstance" : "grp_roundf_fu_851", "Port" : "one_half_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_707", "Parent" : "0", "Child" : ["2", "3"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_707.mask_table1_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_707.one_half_table2_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_716", "Parent" : "0", "Child" : ["5", "6"],
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
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_716.mask_table1_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_716.one_half_table2_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_725", "Parent" : "0", "Child" : ["8", "9"],
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_725.mask_table1_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_725.one_half_table2_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_734", "Parent" : "0", "Child" : ["11", "12"],
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
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_734.mask_table1_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_734.one_half_table2_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_743", "Parent" : "0", "Child" : ["14", "15"],
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_743.mask_table1_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_743.one_half_table2_U", "Parent" : "13"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_752", "Parent" : "0", "Child" : ["17", "18"],
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
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_752.mask_table1_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_752.one_half_table2_U", "Parent" : "16"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_761", "Parent" : "0", "Child" : ["20", "21"],
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_761.mask_table1_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_761.one_half_table2_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_770", "Parent" : "0", "Child" : ["23", "24"],
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
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_770.mask_table1_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_770.one_half_table2_U", "Parent" : "22"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_779", "Parent" : "0", "Child" : ["26", "27"],
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
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_779.mask_table1_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_779.one_half_table2_U", "Parent" : "25"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_788", "Parent" : "0", "Child" : ["29", "30"],
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
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_788.mask_table1_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_788.one_half_table2_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_797", "Parent" : "0", "Child" : ["32", "33"],
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
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_797.mask_table1_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_797.one_half_table2_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_806", "Parent" : "0", "Child" : ["35", "36"],
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
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_806.mask_table1_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_806.one_half_table2_U", "Parent" : "34"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_815", "Parent" : "0", "Child" : ["38", "39"],
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
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_815.mask_table1_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_815.one_half_table2_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_824", "Parent" : "0", "Child" : ["41", "42"],
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
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_824.mask_table1_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_824.one_half_table2_U", "Parent" : "40"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_833", "Parent" : "0", "Child" : ["44", "45"],
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
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_833.mask_table1_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_833.one_half_table2_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_842", "Parent" : "0", "Child" : ["47", "48"],
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
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_842.mask_table1_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_842.one_half_table2_U", "Parent" : "46"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_851", "Parent" : "0", "Child" : ["50", "51"],
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
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_851.mask_table1_U", "Parent" : "49"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_851.one_half_table2_U", "Parent" : "49"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_860", "Parent" : "0", "Child" : ["53", "54"],
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
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_860.mask_table1_U", "Parent" : "52"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_860.one_half_table2_U", "Parent" : "52"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_869", "Parent" : "0", "Child" : ["56", "57"],
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
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_869.mask_table1_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_869.one_half_table2_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_878", "Parent" : "0", "Child" : ["59", "60"],
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
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_878.mask_table1_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_878.one_half_table2_U", "Parent" : "58"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_887", "Parent" : "0", "Child" : ["62", "63"],
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
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_887.mask_table1_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_887.one_half_table2_U", "Parent" : "61"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_896", "Parent" : "0", "Child" : ["65", "66"],
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
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_896.mask_table1_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_896.one_half_table2_U", "Parent" : "64"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_905", "Parent" : "0", "Child" : ["68", "69"],
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
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_905.mask_table1_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_905.one_half_table2_U", "Parent" : "67"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_914", "Parent" : "0", "Child" : ["71", "72"],
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
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_914.mask_table1_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_914.one_half_table2_U", "Parent" : "70"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_923", "Parent" : "0", "Child" : ["74", "75"],
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
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_923.mask_table1_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_923.one_half_table2_U", "Parent" : "73"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_932", "Parent" : "0", "Child" : ["77", "78"],
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
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_932.mask_table1_U", "Parent" : "76"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_932.one_half_table2_U", "Parent" : "76"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_941", "Parent" : "0", "Child" : ["80", "81"],
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
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_941.mask_table1_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_941.one_half_table2_U", "Parent" : "79"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_950", "Parent" : "0", "Child" : ["83", "84"],
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
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_950.mask_table1_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_950.one_half_table2_U", "Parent" : "82"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_959", "Parent" : "0", "Child" : ["86", "87"],
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
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_959.mask_table1_U", "Parent" : "85"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_959.one_half_table2_U", "Parent" : "85"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_968", "Parent" : "0", "Child" : ["89", "90"],
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
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_968.mask_table1_U", "Parent" : "88"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_968.one_half_table2_U", "Parent" : "88"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_977", "Parent" : "0", "Child" : ["92", "93"],
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
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_977.mask_table1_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_977.one_half_table2_U", "Parent" : "91"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_986", "Parent" : "0", "Child" : ["95", "96"],
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
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_986.mask_table1_U", "Parent" : "94"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_roundf_fu_986.one_half_table2_U", "Parent" : "94"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3159", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3160", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3161", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3162", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3163", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3164", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3165", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3166", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3167", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3168", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3169", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3170", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3171", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3172", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3173", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3174", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3175", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3176", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3177", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3178", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3179", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3180", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3181", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3182", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3183", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3184", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3185", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3186", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3187", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3188", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3189", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fadd_32ns_32ns_32_4_full_dsp_1_U3190", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3191", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3192", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3193", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3194", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3195", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3196", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3197", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3198", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3199", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3200", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3201", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3202", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3203", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3204", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3205", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3206", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3207", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3208", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3209", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3210", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3211", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3212", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3213", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3214", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3215", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3216", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3217", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3218", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3219", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3220", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3221", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fmul_32ns_32ns_32_2_max_dsp_1_U3222", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3223", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3224", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3225", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3226", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3227", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3228", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3229", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3230", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3231", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3232", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3233", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3234", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3235", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3236", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3237", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3238", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3239", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3240", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3241", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3242", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3243", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3244", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3245", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3246", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3247", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3248", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3249", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3250", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3251", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3252", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3253", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_sitofp_32s_32_3_1_U3254", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3255", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3256", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3257", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3258", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3259", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3260", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3261", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3262", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3263", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3264", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3265", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3266", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3267", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3268", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3269", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3270", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3271", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3272", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3273", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3274", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3275", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3276", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3277", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3278", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3279", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3280", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3281", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3282", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3283", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3284", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3285", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_fcmp_32ns_32ns_1_2_1_U3286", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_mul_mul_11ns_6ns_17_1_1_U3287", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_mul_mul_6ns_11ns_16_1_1_U3288", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_mac_muladd_5ns_12ns_5ns_16_1_1_U3289", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.resnet50_1_mul_mul_11ns_6ns_16_1_1_U3290", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	store_output_1 {
		outbuf_V_2 {Type IO LastRead 1 FirstWrite 2}
		output_V {Type O LastRead -1 FirstWrite 15}
		bias {Type I LastRead 1 FirstWrite -1}
		scale {Type I LastRead 1 FirstWrite -1}
		OSIZE {Type I LastRead 0 FirstWrite -1}
		TO_r {Type I LastRead 0 FirstWrite -1}
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
	{"Name" : "Latency", "Min" : "407", "Max" : "100367"}
	, {"Name" : "Interval", "Min" : "407", "Max" : "100367"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	outbuf_V_2 { ap_memory {  { outbuf_V_2_address0 mem_address 1 14 }  { outbuf_V_2_ce0 mem_ce 1 1 }  { outbuf_V_2_q0 mem_dout 0 1536 }  { outbuf_V_2_address1 MemPortADDR2 1 14 }  { outbuf_V_2_ce1 MemPortCE2 1 1 }  { outbuf_V_2_we1 MemPortWE2 1 1 }  { outbuf_V_2_d1 MemPortDIN2 1 1536 } } }
	output_V { ap_memory {  { output_V_address1 MemPortADDR2 1 15 }  { output_V_ce1 MemPortCE2 1 1 }  { output_V_we1 MemPortWE2 1 1 }  { output_V_d1 MemPortDIN2 1 288 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 4 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 2048 } } }
	scale { ap_memory {  { scale_address0 mem_address 1 4 }  { scale_ce0 mem_ce 1 1 }  { scale_q0 mem_dout 0 2048 } } }
	OSIZE { ap_none {  { OSIZE in_data 0 6 } } }
	TO_r { ap_none {  { TO_r in_data 0 5 } } }
}
