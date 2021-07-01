# This script segment is generated automatically by AutoPilot

set id 22
set name resnet50_2_udiv_14ns_4ns_14_18_seq_1
set corename simcore_udiv_seq
set op udiv
set stage_num 18
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 14
set in0_signed 0
set in1_width 4
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 14
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 23
set name resnet50_2_udiv_14ns_2ns_14_18_seq_1
set corename simcore_udiv_seq
set op udiv
set stage_num 18
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 14
set in0_signed 0
set in1_width 2
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 14
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 24
set name resnet50_2_udiv_14ns_10ns_14_18_seq_1
set corename simcore_udiv_seq
set op udiv
set stage_num 18
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 14
set in0_signed 0
set in1_width 10
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 14
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 25
set name resnet50_2_urem_14ns_6ns_7_18_seq_1
set corename simcore_urem_seq
set op urem
set stage_num 18
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 14
set in0_signed 0
set in1_width 6
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 7
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 26
set name resnet50_2_urem_14ns_2ns_3_18_seq_1
set corename simcore_urem_seq
set op urem
set stage_num 18
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 14
set in0_signed 0
set in1_width 2
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 3
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 28
set name resnet50_2_mac_muladd_2ns_4ns_3s_7_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 2
set in0_signed 0
set in1_width 4
set in1_signed 0
set in2_width 3
set in2_signed 1
set out_width 7
set exp i0*i1+i2
set arg_lists {i0 {2 0 +} i1 {4 0 +} m {6 0 +} i2 {3 1 +} p {7 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 31
set name resnet50_2_mac_muladd_6ns_8ns_14ns_15_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 8
set in1_signed 0
set in2_width 14
set in2_signed 0
set out_width 15
set exp i0*i1+i2
set arg_lists {i0 {6 0 +} i1 {8 0 +} m {14 0 +} i2 {14 0 +} p {15 0 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 32
set name resnet50_2_mac_muladd_2ns_11ns_3s_13_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 2
set in0_signed 0
set in1_width 11
set in1_signed 0
set in2_width 3
set in2_signed 1
set out_width 13
set exp i0*i1+i2
set arg_lists {i0 {2 0 +} i1 {11 0 +} m {13 0 +} i2 {3 1 +} p {13 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 33
set name resnet50_2_mac_muladd_6ns_13s_7ns_19_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 13
set in1_signed 1
set in2_width 7
set in2_signed 0
set out_width 19
set exp i0*i1+i2
set arg_lists {i0 {6 0 +} i1 {13 1 +} m {19 1 +} i2 {7 0 +} p {19 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 34
set name resnet50_2_mac_muladd_8ns_27s_35s_36_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 27
set in1_signed 1
set in2_width 35
set in2_signed 1
set out_width 36
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {27 1 +} m {35 1 +} i2 {35 1 +} p {36 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 36
set name resnet50_2_mul_mul_8ns_27s_35_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 27
set in1_signed 1
set out_width 35
set exp i0*i1
set arg_lists {i0 {8 0 +} i1 {27 1 +} p {35 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2093 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 13 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 288 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2094 \
    name outbuf_V_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename outbuf_V_6 \
    op interface \
    ports { outbuf_V_6_address0 { O 12 vector } outbuf_V_6_ce0 { O 1 bit } outbuf_V_6_q0 { I 1536 vector } outbuf_V_6_address1 { O 12 vector } outbuf_V_6_ce1 { O 1 bit } outbuf_V_6_we1 { O 1 bit } outbuf_V_6_d1 { O 1536 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outbuf_V_6'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1069 \
    name weight_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_0_V_read \
    op interface \
    ports { weight_0_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1070 \
    name weight_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1_V_read \
    op interface \
    ports { weight_1_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1071 \
    name weight_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_2_V_read \
    op interface \
    ports { weight_2_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1072 \
    name weight_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_3_V_read \
    op interface \
    ports { weight_3_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1073 \
    name weight_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_4_V_read \
    op interface \
    ports { weight_4_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1074 \
    name weight_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_5_V_read \
    op interface \
    ports { weight_5_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1075 \
    name weight_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_6_V_read \
    op interface \
    ports { weight_6_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1076 \
    name weight_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_7_V_read \
    op interface \
    ports { weight_7_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1077 \
    name weight_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_8_V_read \
    op interface \
    ports { weight_8_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1078 \
    name weight_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_9_V_read \
    op interface \
    ports { weight_9_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1079 \
    name weight_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_10_V_read \
    op interface \
    ports { weight_10_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1080 \
    name weight_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_11_V_read \
    op interface \
    ports { weight_11_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1081 \
    name weight_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_12_V_read \
    op interface \
    ports { weight_12_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1082 \
    name weight_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_13_V_read \
    op interface \
    ports { weight_13_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1083 \
    name weight_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_14_V_read \
    op interface \
    ports { weight_14_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1084 \
    name weight_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_15_V_read \
    op interface \
    ports { weight_15_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1085 \
    name weight_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_16_V_read \
    op interface \
    ports { weight_16_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1086 \
    name weight_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_17_V_read \
    op interface \
    ports { weight_17_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1087 \
    name weight_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_18_V_read \
    op interface \
    ports { weight_18_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1088 \
    name weight_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_19_V_read \
    op interface \
    ports { weight_19_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1089 \
    name weight_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_20_V_read \
    op interface \
    ports { weight_20_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1090 \
    name weight_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_21_V_read \
    op interface \
    ports { weight_21_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1091 \
    name weight_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_22_V_read \
    op interface \
    ports { weight_22_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1092 \
    name weight_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_23_V_read \
    op interface \
    ports { weight_23_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1093 \
    name weight_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_24_V_read \
    op interface \
    ports { weight_24_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1094 \
    name weight_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_25_V_read \
    op interface \
    ports { weight_25_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1095 \
    name weight_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_26_V_read \
    op interface \
    ports { weight_26_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1096 \
    name weight_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_27_V_read \
    op interface \
    ports { weight_27_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1097 \
    name weight_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_28_V_read \
    op interface \
    ports { weight_28_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1098 \
    name weight_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_29_V_read \
    op interface \
    ports { weight_29_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1099 \
    name weight_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_30_V_read \
    op interface \
    ports { weight_30_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1100 \
    name weight_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_31_V_read \
    op interface \
    ports { weight_31_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1101 \
    name weight_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_32_V_read \
    op interface \
    ports { weight_32_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1102 \
    name weight_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_33_V_read \
    op interface \
    ports { weight_33_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1103 \
    name weight_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_34_V_read \
    op interface \
    ports { weight_34_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1104 \
    name weight_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_35_V_read \
    op interface \
    ports { weight_35_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1105 \
    name weight_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_36_V_read \
    op interface \
    ports { weight_36_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1106 \
    name weight_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_37_V_read \
    op interface \
    ports { weight_37_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1107 \
    name weight_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_38_V_read \
    op interface \
    ports { weight_38_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1108 \
    name weight_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_39_V_read \
    op interface \
    ports { weight_39_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1109 \
    name weight_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_40_V_read \
    op interface \
    ports { weight_40_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1110 \
    name weight_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_41_V_read \
    op interface \
    ports { weight_41_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1111 \
    name weight_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_42_V_read \
    op interface \
    ports { weight_42_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1112 \
    name weight_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_43_V_read \
    op interface \
    ports { weight_43_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1113 \
    name weight_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_44_V_read \
    op interface \
    ports { weight_44_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1114 \
    name weight_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_45_V_read \
    op interface \
    ports { weight_45_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1115 \
    name weight_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_46_V_read \
    op interface \
    ports { weight_46_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1116 \
    name weight_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_47_V_read \
    op interface \
    ports { weight_47_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1117 \
    name weight_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_48_V_read \
    op interface \
    ports { weight_48_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1118 \
    name weight_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_49_V_read \
    op interface \
    ports { weight_49_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1119 \
    name weight_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_50_V_read \
    op interface \
    ports { weight_50_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1120 \
    name weight_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_51_V_read \
    op interface \
    ports { weight_51_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1121 \
    name weight_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_52_V_read \
    op interface \
    ports { weight_52_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1122 \
    name weight_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_53_V_read \
    op interface \
    ports { weight_53_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1123 \
    name weight_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_54_V_read \
    op interface \
    ports { weight_54_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1124 \
    name weight_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_55_V_read \
    op interface \
    ports { weight_55_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1125 \
    name weight_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_56_V_read \
    op interface \
    ports { weight_56_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1126 \
    name weight_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_57_V_read \
    op interface \
    ports { weight_57_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1127 \
    name weight_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_58_V_read \
    op interface \
    ports { weight_58_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1128 \
    name weight_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_59_V_read \
    op interface \
    ports { weight_59_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1129 \
    name weight_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_60_V_read \
    op interface \
    ports { weight_60_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1130 \
    name weight_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_61_V_read \
    op interface \
    ports { weight_61_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1131 \
    name weight_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_62_V_read \
    op interface \
    ports { weight_62_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1132 \
    name weight_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_63_V_read \
    op interface \
    ports { weight_63_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1133 \
    name weight_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_64_V_read \
    op interface \
    ports { weight_64_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1134 \
    name weight_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_65_V_read \
    op interface \
    ports { weight_65_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1135 \
    name weight_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_66_V_read \
    op interface \
    ports { weight_66_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1136 \
    name weight_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_67_V_read \
    op interface \
    ports { weight_67_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1137 \
    name weight_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_68_V_read \
    op interface \
    ports { weight_68_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1138 \
    name weight_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_69_V_read \
    op interface \
    ports { weight_69_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1139 \
    name weight_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_70_V_read \
    op interface \
    ports { weight_70_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1140 \
    name weight_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_71_V_read \
    op interface \
    ports { weight_71_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1141 \
    name weight_72_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_72_V_read \
    op interface \
    ports { weight_72_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1142 \
    name weight_73_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_73_V_read \
    op interface \
    ports { weight_73_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1143 \
    name weight_74_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_74_V_read \
    op interface \
    ports { weight_74_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1144 \
    name weight_75_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_75_V_read \
    op interface \
    ports { weight_75_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1145 \
    name weight_76_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_76_V_read \
    op interface \
    ports { weight_76_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1146 \
    name weight_77_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_77_V_read \
    op interface \
    ports { weight_77_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1147 \
    name weight_78_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_78_V_read \
    op interface \
    ports { weight_78_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1148 \
    name weight_79_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_79_V_read \
    op interface \
    ports { weight_79_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1149 \
    name weight_80_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_80_V_read \
    op interface \
    ports { weight_80_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1150 \
    name weight_81_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_81_V_read \
    op interface \
    ports { weight_81_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1151 \
    name weight_82_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_82_V_read \
    op interface \
    ports { weight_82_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1152 \
    name weight_83_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_83_V_read \
    op interface \
    ports { weight_83_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1153 \
    name weight_84_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_84_V_read \
    op interface \
    ports { weight_84_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1154 \
    name weight_85_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_85_V_read \
    op interface \
    ports { weight_85_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1155 \
    name weight_86_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_86_V_read \
    op interface \
    ports { weight_86_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1156 \
    name weight_87_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_87_V_read \
    op interface \
    ports { weight_87_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1157 \
    name weight_88_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_88_V_read \
    op interface \
    ports { weight_88_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1158 \
    name weight_89_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_89_V_read \
    op interface \
    ports { weight_89_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1159 \
    name weight_90_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_90_V_read \
    op interface \
    ports { weight_90_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1160 \
    name weight_91_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_91_V_read \
    op interface \
    ports { weight_91_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1161 \
    name weight_92_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_92_V_read \
    op interface \
    ports { weight_92_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1162 \
    name weight_93_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_93_V_read \
    op interface \
    ports { weight_93_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1163 \
    name weight_94_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_94_V_read \
    op interface \
    ports { weight_94_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1164 \
    name weight_95_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_95_V_read \
    op interface \
    ports { weight_95_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1165 \
    name weight_96_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_96_V_read \
    op interface \
    ports { weight_96_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1166 \
    name weight_97_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_97_V_read \
    op interface \
    ports { weight_97_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1167 \
    name weight_98_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_98_V_read \
    op interface \
    ports { weight_98_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1168 \
    name weight_99_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_99_V_read \
    op interface \
    ports { weight_99_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1169 \
    name weight_100_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_100_V_read \
    op interface \
    ports { weight_100_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1170 \
    name weight_101_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_101_V_read \
    op interface \
    ports { weight_101_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1171 \
    name weight_102_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_102_V_read \
    op interface \
    ports { weight_102_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1172 \
    name weight_103_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_103_V_read \
    op interface \
    ports { weight_103_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1173 \
    name weight_104_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_104_V_read \
    op interface \
    ports { weight_104_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1174 \
    name weight_105_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_105_V_read \
    op interface \
    ports { weight_105_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1175 \
    name weight_106_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_106_V_read \
    op interface \
    ports { weight_106_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1176 \
    name weight_107_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_107_V_read \
    op interface \
    ports { weight_107_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1177 \
    name weight_108_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_108_V_read \
    op interface \
    ports { weight_108_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1178 \
    name weight_109_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_109_V_read \
    op interface \
    ports { weight_109_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1179 \
    name weight_110_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_110_V_read \
    op interface \
    ports { weight_110_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1180 \
    name weight_111_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_111_V_read \
    op interface \
    ports { weight_111_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1181 \
    name weight_112_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_112_V_read \
    op interface \
    ports { weight_112_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1182 \
    name weight_113_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_113_V_read \
    op interface \
    ports { weight_113_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1183 \
    name weight_114_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_114_V_read \
    op interface \
    ports { weight_114_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1184 \
    name weight_115_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_115_V_read \
    op interface \
    ports { weight_115_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1185 \
    name weight_116_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_116_V_read \
    op interface \
    ports { weight_116_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1186 \
    name weight_117_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_117_V_read \
    op interface \
    ports { weight_117_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1187 \
    name weight_118_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_118_V_read \
    op interface \
    ports { weight_118_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1188 \
    name weight_119_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_119_V_read \
    op interface \
    ports { weight_119_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1189 \
    name weight_120_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_120_V_read \
    op interface \
    ports { weight_120_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1190 \
    name weight_121_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_121_V_read \
    op interface \
    ports { weight_121_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1191 \
    name weight_122_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_122_V_read \
    op interface \
    ports { weight_122_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1192 \
    name weight_123_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_123_V_read \
    op interface \
    ports { weight_123_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1193 \
    name weight_124_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_124_V_read \
    op interface \
    ports { weight_124_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1194 \
    name weight_125_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_125_V_read \
    op interface \
    ports { weight_125_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1195 \
    name weight_126_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_126_V_read \
    op interface \
    ports { weight_126_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1196 \
    name weight_127_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_127_V_read \
    op interface \
    ports { weight_127_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1197 \
    name weight_128_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_128_V_read \
    op interface \
    ports { weight_128_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1198 \
    name weight_129_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_129_V_read \
    op interface \
    ports { weight_129_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1199 \
    name weight_130_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_130_V_read \
    op interface \
    ports { weight_130_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1200 \
    name weight_131_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_131_V_read \
    op interface \
    ports { weight_131_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1201 \
    name weight_132_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_132_V_read \
    op interface \
    ports { weight_132_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1202 \
    name weight_133_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_133_V_read \
    op interface \
    ports { weight_133_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1203 \
    name weight_134_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_134_V_read \
    op interface \
    ports { weight_134_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1204 \
    name weight_135_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_135_V_read \
    op interface \
    ports { weight_135_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1205 \
    name weight_136_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_136_V_read \
    op interface \
    ports { weight_136_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1206 \
    name weight_137_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_137_V_read \
    op interface \
    ports { weight_137_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1207 \
    name weight_138_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_138_V_read \
    op interface \
    ports { weight_138_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1208 \
    name weight_139_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_139_V_read \
    op interface \
    ports { weight_139_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1209 \
    name weight_140_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_140_V_read \
    op interface \
    ports { weight_140_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1210 \
    name weight_141_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_141_V_read \
    op interface \
    ports { weight_141_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1211 \
    name weight_142_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_142_V_read \
    op interface \
    ports { weight_142_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1212 \
    name weight_143_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_143_V_read \
    op interface \
    ports { weight_143_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1213 \
    name weight_144_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_144_V_read \
    op interface \
    ports { weight_144_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1214 \
    name weight_145_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_145_V_read \
    op interface \
    ports { weight_145_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1215 \
    name weight_146_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_146_V_read \
    op interface \
    ports { weight_146_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1216 \
    name weight_147_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_147_V_read \
    op interface \
    ports { weight_147_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1217 \
    name weight_148_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_148_V_read \
    op interface \
    ports { weight_148_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1218 \
    name weight_149_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_149_V_read \
    op interface \
    ports { weight_149_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1219 \
    name weight_150_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_150_V_read \
    op interface \
    ports { weight_150_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1220 \
    name weight_151_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_151_V_read \
    op interface \
    ports { weight_151_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1221 \
    name weight_152_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_152_V_read \
    op interface \
    ports { weight_152_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1222 \
    name weight_153_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_153_V_read \
    op interface \
    ports { weight_153_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1223 \
    name weight_154_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_154_V_read \
    op interface \
    ports { weight_154_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1224 \
    name weight_155_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_155_V_read \
    op interface \
    ports { weight_155_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1225 \
    name weight_156_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_156_V_read \
    op interface \
    ports { weight_156_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1226 \
    name weight_157_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_157_V_read \
    op interface \
    ports { weight_157_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1227 \
    name weight_158_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_158_V_read \
    op interface \
    ports { weight_158_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1228 \
    name weight_159_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_159_V_read \
    op interface \
    ports { weight_159_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1229 \
    name weight_160_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_160_V_read \
    op interface \
    ports { weight_160_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1230 \
    name weight_161_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_161_V_read \
    op interface \
    ports { weight_161_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1231 \
    name weight_162_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_162_V_read \
    op interface \
    ports { weight_162_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1232 \
    name weight_163_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_163_V_read \
    op interface \
    ports { weight_163_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1233 \
    name weight_164_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_164_V_read \
    op interface \
    ports { weight_164_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1234 \
    name weight_165_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_165_V_read \
    op interface \
    ports { weight_165_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1235 \
    name weight_166_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_166_V_read \
    op interface \
    ports { weight_166_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1236 \
    name weight_167_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_167_V_read \
    op interface \
    ports { weight_167_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1237 \
    name weight_168_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_168_V_read \
    op interface \
    ports { weight_168_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1238 \
    name weight_169_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_169_V_read \
    op interface \
    ports { weight_169_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1239 \
    name weight_170_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_170_V_read \
    op interface \
    ports { weight_170_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1240 \
    name weight_171_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_171_V_read \
    op interface \
    ports { weight_171_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1241 \
    name weight_172_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_172_V_read \
    op interface \
    ports { weight_172_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1242 \
    name weight_173_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_173_V_read \
    op interface \
    ports { weight_173_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1243 \
    name weight_174_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_174_V_read \
    op interface \
    ports { weight_174_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1244 \
    name weight_175_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_175_V_read \
    op interface \
    ports { weight_175_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1245 \
    name weight_176_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_176_V_read \
    op interface \
    ports { weight_176_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1246 \
    name weight_177_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_177_V_read \
    op interface \
    ports { weight_177_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1247 \
    name weight_178_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_178_V_read \
    op interface \
    ports { weight_178_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1248 \
    name weight_179_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_179_V_read \
    op interface \
    ports { weight_179_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1249 \
    name weight_180_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_180_V_read \
    op interface \
    ports { weight_180_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1250 \
    name weight_181_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_181_V_read \
    op interface \
    ports { weight_181_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1251 \
    name weight_182_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_182_V_read \
    op interface \
    ports { weight_182_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1252 \
    name weight_183_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_183_V_read \
    op interface \
    ports { weight_183_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1253 \
    name weight_184_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_184_V_read \
    op interface \
    ports { weight_184_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1254 \
    name weight_185_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_185_V_read \
    op interface \
    ports { weight_185_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1255 \
    name weight_186_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_186_V_read \
    op interface \
    ports { weight_186_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1256 \
    name weight_187_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_187_V_read \
    op interface \
    ports { weight_187_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1257 \
    name weight_188_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_188_V_read \
    op interface \
    ports { weight_188_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1258 \
    name weight_189_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_189_V_read \
    op interface \
    ports { weight_189_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1259 \
    name weight_190_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_190_V_read \
    op interface \
    ports { weight_190_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1260 \
    name weight_191_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_191_V_read \
    op interface \
    ports { weight_191_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1261 \
    name weight_192_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_192_V_read \
    op interface \
    ports { weight_192_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1262 \
    name weight_193_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_193_V_read \
    op interface \
    ports { weight_193_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1263 \
    name weight_194_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_194_V_read \
    op interface \
    ports { weight_194_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1264 \
    name weight_195_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_195_V_read \
    op interface \
    ports { weight_195_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1265 \
    name weight_196_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_196_V_read \
    op interface \
    ports { weight_196_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1266 \
    name weight_197_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_197_V_read \
    op interface \
    ports { weight_197_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1267 \
    name weight_198_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_198_V_read \
    op interface \
    ports { weight_198_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1268 \
    name weight_199_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_199_V_read \
    op interface \
    ports { weight_199_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1269 \
    name weight_200_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_200_V_read \
    op interface \
    ports { weight_200_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1270 \
    name weight_201_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_201_V_read \
    op interface \
    ports { weight_201_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1271 \
    name weight_202_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_202_V_read \
    op interface \
    ports { weight_202_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1272 \
    name weight_203_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_203_V_read \
    op interface \
    ports { weight_203_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1273 \
    name weight_204_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_204_V_read \
    op interface \
    ports { weight_204_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1274 \
    name weight_205_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_205_V_read \
    op interface \
    ports { weight_205_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1275 \
    name weight_206_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_206_V_read \
    op interface \
    ports { weight_206_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1276 \
    name weight_207_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_207_V_read \
    op interface \
    ports { weight_207_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1277 \
    name weight_208_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_208_V_read \
    op interface \
    ports { weight_208_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1278 \
    name weight_209_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_209_V_read \
    op interface \
    ports { weight_209_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1279 \
    name weight_210_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_210_V_read \
    op interface \
    ports { weight_210_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1280 \
    name weight_211_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_211_V_read \
    op interface \
    ports { weight_211_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1281 \
    name weight_212_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_212_V_read \
    op interface \
    ports { weight_212_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1282 \
    name weight_213_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_213_V_read \
    op interface \
    ports { weight_213_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1283 \
    name weight_214_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_214_V_read \
    op interface \
    ports { weight_214_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1284 \
    name weight_215_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_215_V_read \
    op interface \
    ports { weight_215_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1285 \
    name weight_216_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_216_V_read \
    op interface \
    ports { weight_216_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1286 \
    name weight_217_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_217_V_read \
    op interface \
    ports { weight_217_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1287 \
    name weight_218_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_218_V_read \
    op interface \
    ports { weight_218_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1288 \
    name weight_219_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_219_V_read \
    op interface \
    ports { weight_219_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1289 \
    name weight_220_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_220_V_read \
    op interface \
    ports { weight_220_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1290 \
    name weight_221_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_221_V_read \
    op interface \
    ports { weight_221_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1291 \
    name weight_222_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_222_V_read \
    op interface \
    ports { weight_222_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1292 \
    name weight_223_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_223_V_read \
    op interface \
    ports { weight_223_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1293 \
    name weight_224_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_224_V_read \
    op interface \
    ports { weight_224_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1294 \
    name weight_225_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_225_V_read \
    op interface \
    ports { weight_225_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1295 \
    name weight_226_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_226_V_read \
    op interface \
    ports { weight_226_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1296 \
    name weight_227_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_227_V_read \
    op interface \
    ports { weight_227_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1297 \
    name weight_228_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_228_V_read \
    op interface \
    ports { weight_228_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1298 \
    name weight_229_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_229_V_read \
    op interface \
    ports { weight_229_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1299 \
    name weight_230_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_230_V_read \
    op interface \
    ports { weight_230_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1300 \
    name weight_231_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_231_V_read \
    op interface \
    ports { weight_231_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1301 \
    name weight_232_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_232_V_read \
    op interface \
    ports { weight_232_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1302 \
    name weight_233_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_233_V_read \
    op interface \
    ports { weight_233_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1303 \
    name weight_234_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_234_V_read \
    op interface \
    ports { weight_234_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1304 \
    name weight_235_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_235_V_read \
    op interface \
    ports { weight_235_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1305 \
    name weight_236_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_236_V_read \
    op interface \
    ports { weight_236_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1306 \
    name weight_237_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_237_V_read \
    op interface \
    ports { weight_237_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1307 \
    name weight_238_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_238_V_read \
    op interface \
    ports { weight_238_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1308 \
    name weight_239_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_239_V_read \
    op interface \
    ports { weight_239_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1309 \
    name weight_240_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_240_V_read \
    op interface \
    ports { weight_240_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1310 \
    name weight_241_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_241_V_read \
    op interface \
    ports { weight_241_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1311 \
    name weight_242_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_242_V_read \
    op interface \
    ports { weight_242_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1312 \
    name weight_243_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_243_V_read \
    op interface \
    ports { weight_243_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1313 \
    name weight_244_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_244_V_read \
    op interface \
    ports { weight_244_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1314 \
    name weight_245_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_245_V_read \
    op interface \
    ports { weight_245_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1315 \
    name weight_246_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_246_V_read \
    op interface \
    ports { weight_246_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1316 \
    name weight_247_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_247_V_read \
    op interface \
    ports { weight_247_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1317 \
    name weight_248_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_248_V_read \
    op interface \
    ports { weight_248_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1318 \
    name weight_249_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_249_V_read \
    op interface \
    ports { weight_249_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1319 \
    name weight_250_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_250_V_read \
    op interface \
    ports { weight_250_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1320 \
    name weight_251_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_251_V_read \
    op interface \
    ports { weight_251_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1321 \
    name weight_252_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_252_V_read \
    op interface \
    ports { weight_252_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1322 \
    name weight_253_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_253_V_read \
    op interface \
    ports { weight_253_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1323 \
    name weight_254_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_254_V_read \
    op interface \
    ports { weight_254_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1324 \
    name weight_255_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_255_V_read \
    op interface \
    ports { weight_255_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1325 \
    name weight_256_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_256_V_read \
    op interface \
    ports { weight_256_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1326 \
    name weight_257_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_257_V_read \
    op interface \
    ports { weight_257_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1327 \
    name weight_258_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_258_V_read \
    op interface \
    ports { weight_258_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1328 \
    name weight_259_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_259_V_read \
    op interface \
    ports { weight_259_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1329 \
    name weight_260_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_260_V_read \
    op interface \
    ports { weight_260_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1330 \
    name weight_261_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_261_V_read \
    op interface \
    ports { weight_261_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1331 \
    name weight_262_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_262_V_read \
    op interface \
    ports { weight_262_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1332 \
    name weight_263_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_263_V_read \
    op interface \
    ports { weight_263_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1333 \
    name weight_264_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_264_V_read \
    op interface \
    ports { weight_264_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1334 \
    name weight_265_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_265_V_read \
    op interface \
    ports { weight_265_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1335 \
    name weight_266_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_266_V_read \
    op interface \
    ports { weight_266_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1336 \
    name weight_267_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_267_V_read \
    op interface \
    ports { weight_267_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1337 \
    name weight_268_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_268_V_read \
    op interface \
    ports { weight_268_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1338 \
    name weight_269_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_269_V_read \
    op interface \
    ports { weight_269_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1339 \
    name weight_270_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_270_V_read \
    op interface \
    ports { weight_270_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1340 \
    name weight_271_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_271_V_read \
    op interface \
    ports { weight_271_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1341 \
    name weight_272_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_272_V_read \
    op interface \
    ports { weight_272_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1342 \
    name weight_273_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_273_V_read \
    op interface \
    ports { weight_273_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1343 \
    name weight_274_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_274_V_read \
    op interface \
    ports { weight_274_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1344 \
    name weight_275_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_275_V_read \
    op interface \
    ports { weight_275_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1345 \
    name weight_276_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_276_V_read \
    op interface \
    ports { weight_276_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1346 \
    name weight_277_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_277_V_read \
    op interface \
    ports { weight_277_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1347 \
    name weight_278_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_278_V_read \
    op interface \
    ports { weight_278_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1348 \
    name weight_279_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_279_V_read \
    op interface \
    ports { weight_279_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1349 \
    name weight_280_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_280_V_read \
    op interface \
    ports { weight_280_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1350 \
    name weight_281_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_281_V_read \
    op interface \
    ports { weight_281_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1351 \
    name weight_282_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_282_V_read \
    op interface \
    ports { weight_282_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1352 \
    name weight_283_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_283_V_read \
    op interface \
    ports { weight_283_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1353 \
    name weight_284_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_284_V_read \
    op interface \
    ports { weight_284_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1354 \
    name weight_285_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_285_V_read \
    op interface \
    ports { weight_285_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1355 \
    name weight_286_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_286_V_read \
    op interface \
    ports { weight_286_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1356 \
    name weight_287_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_287_V_read \
    op interface \
    ports { weight_287_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1357 \
    name weight_288_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_288_V_read \
    op interface \
    ports { weight_288_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1358 \
    name weight_289_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_289_V_read \
    op interface \
    ports { weight_289_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1359 \
    name weight_290_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_290_V_read \
    op interface \
    ports { weight_290_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1360 \
    name weight_291_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_291_V_read \
    op interface \
    ports { weight_291_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1361 \
    name weight_292_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_292_V_read \
    op interface \
    ports { weight_292_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1362 \
    name weight_293_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_293_V_read \
    op interface \
    ports { weight_293_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1363 \
    name weight_294_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_294_V_read \
    op interface \
    ports { weight_294_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1364 \
    name weight_295_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_295_V_read \
    op interface \
    ports { weight_295_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1365 \
    name weight_296_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_296_V_read \
    op interface \
    ports { weight_296_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1366 \
    name weight_297_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_297_V_read \
    op interface \
    ports { weight_297_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1367 \
    name weight_298_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_298_V_read \
    op interface \
    ports { weight_298_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1368 \
    name weight_299_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_299_V_read \
    op interface \
    ports { weight_299_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1369 \
    name weight_300_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_300_V_read \
    op interface \
    ports { weight_300_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1370 \
    name weight_301_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_301_V_read \
    op interface \
    ports { weight_301_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1371 \
    name weight_302_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_302_V_read \
    op interface \
    ports { weight_302_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1372 \
    name weight_303_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_303_V_read \
    op interface \
    ports { weight_303_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1373 \
    name weight_304_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_304_V_read \
    op interface \
    ports { weight_304_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1374 \
    name weight_305_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_305_V_read \
    op interface \
    ports { weight_305_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1375 \
    name weight_306_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_306_V_read \
    op interface \
    ports { weight_306_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1376 \
    name weight_307_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_307_V_read \
    op interface \
    ports { weight_307_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1377 \
    name weight_308_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_308_V_read \
    op interface \
    ports { weight_308_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1378 \
    name weight_309_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_309_V_read \
    op interface \
    ports { weight_309_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1379 \
    name weight_310_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_310_V_read \
    op interface \
    ports { weight_310_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1380 \
    name weight_311_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_311_V_read \
    op interface \
    ports { weight_311_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1381 \
    name weight_312_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_312_V_read \
    op interface \
    ports { weight_312_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1382 \
    name weight_313_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_313_V_read \
    op interface \
    ports { weight_313_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1383 \
    name weight_314_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_314_V_read \
    op interface \
    ports { weight_314_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1384 \
    name weight_315_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_315_V_read \
    op interface \
    ports { weight_315_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1385 \
    name weight_316_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_316_V_read \
    op interface \
    ports { weight_316_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1386 \
    name weight_317_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_317_V_read \
    op interface \
    ports { weight_317_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1387 \
    name weight_318_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_318_V_read \
    op interface \
    ports { weight_318_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1388 \
    name weight_319_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_319_V_read \
    op interface \
    ports { weight_319_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1389 \
    name weight_320_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_320_V_read \
    op interface \
    ports { weight_320_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1390 \
    name weight_321_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_321_V_read \
    op interface \
    ports { weight_321_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1391 \
    name weight_322_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_322_V_read \
    op interface \
    ports { weight_322_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1392 \
    name weight_323_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_323_V_read \
    op interface \
    ports { weight_323_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1393 \
    name weight_324_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_324_V_read \
    op interface \
    ports { weight_324_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1394 \
    name weight_325_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_325_V_read \
    op interface \
    ports { weight_325_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1395 \
    name weight_326_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_326_V_read \
    op interface \
    ports { weight_326_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1396 \
    name weight_327_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_327_V_read \
    op interface \
    ports { weight_327_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1397 \
    name weight_328_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_328_V_read \
    op interface \
    ports { weight_328_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1398 \
    name weight_329_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_329_V_read \
    op interface \
    ports { weight_329_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1399 \
    name weight_330_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_330_V_read \
    op interface \
    ports { weight_330_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1400 \
    name weight_331_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_331_V_read \
    op interface \
    ports { weight_331_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1401 \
    name weight_332_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_332_V_read \
    op interface \
    ports { weight_332_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1402 \
    name weight_333_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_333_V_read \
    op interface \
    ports { weight_333_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1403 \
    name weight_334_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_334_V_read \
    op interface \
    ports { weight_334_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1404 \
    name weight_335_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_335_V_read \
    op interface \
    ports { weight_335_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1405 \
    name weight_336_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_336_V_read \
    op interface \
    ports { weight_336_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1406 \
    name weight_337_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_337_V_read \
    op interface \
    ports { weight_337_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1407 \
    name weight_338_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_338_V_read \
    op interface \
    ports { weight_338_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1408 \
    name weight_339_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_339_V_read \
    op interface \
    ports { weight_339_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1409 \
    name weight_340_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_340_V_read \
    op interface \
    ports { weight_340_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1410 \
    name weight_341_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_341_V_read \
    op interface \
    ports { weight_341_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1411 \
    name weight_342_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_342_V_read \
    op interface \
    ports { weight_342_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1412 \
    name weight_343_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_343_V_read \
    op interface \
    ports { weight_343_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1413 \
    name weight_344_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_344_V_read \
    op interface \
    ports { weight_344_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1414 \
    name weight_345_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_345_V_read \
    op interface \
    ports { weight_345_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1415 \
    name weight_346_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_346_V_read \
    op interface \
    ports { weight_346_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1416 \
    name weight_347_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_347_V_read \
    op interface \
    ports { weight_347_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1417 \
    name weight_348_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_348_V_read \
    op interface \
    ports { weight_348_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1418 \
    name weight_349_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_349_V_read \
    op interface \
    ports { weight_349_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1419 \
    name weight_350_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_350_V_read \
    op interface \
    ports { weight_350_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1420 \
    name weight_351_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_351_V_read \
    op interface \
    ports { weight_351_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1421 \
    name weight_352_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_352_V_read \
    op interface \
    ports { weight_352_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1422 \
    name weight_353_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_353_V_read \
    op interface \
    ports { weight_353_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1423 \
    name weight_354_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_354_V_read \
    op interface \
    ports { weight_354_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1424 \
    name weight_355_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_355_V_read \
    op interface \
    ports { weight_355_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1425 \
    name weight_356_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_356_V_read \
    op interface \
    ports { weight_356_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1426 \
    name weight_357_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_357_V_read \
    op interface \
    ports { weight_357_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1427 \
    name weight_358_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_358_V_read \
    op interface \
    ports { weight_358_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1428 \
    name weight_359_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_359_V_read \
    op interface \
    ports { weight_359_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1429 \
    name weight_360_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_360_V_read \
    op interface \
    ports { weight_360_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1430 \
    name weight_361_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_361_V_read \
    op interface \
    ports { weight_361_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1431 \
    name weight_362_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_362_V_read \
    op interface \
    ports { weight_362_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1432 \
    name weight_363_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_363_V_read \
    op interface \
    ports { weight_363_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1433 \
    name weight_364_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_364_V_read \
    op interface \
    ports { weight_364_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1434 \
    name weight_365_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_365_V_read \
    op interface \
    ports { weight_365_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1435 \
    name weight_366_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_366_V_read \
    op interface \
    ports { weight_366_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1436 \
    name weight_367_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_367_V_read \
    op interface \
    ports { weight_367_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1437 \
    name weight_368_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_368_V_read \
    op interface \
    ports { weight_368_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1438 \
    name weight_369_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_369_V_read \
    op interface \
    ports { weight_369_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1439 \
    name weight_370_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_370_V_read \
    op interface \
    ports { weight_370_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1440 \
    name weight_371_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_371_V_read \
    op interface \
    ports { weight_371_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1441 \
    name weight_372_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_372_V_read \
    op interface \
    ports { weight_372_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1442 \
    name weight_373_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_373_V_read \
    op interface \
    ports { weight_373_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1443 \
    name weight_374_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_374_V_read \
    op interface \
    ports { weight_374_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1444 \
    name weight_375_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_375_V_read \
    op interface \
    ports { weight_375_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1445 \
    name weight_376_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_376_V_read \
    op interface \
    ports { weight_376_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1446 \
    name weight_377_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_377_V_read \
    op interface \
    ports { weight_377_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1447 \
    name weight_378_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_378_V_read \
    op interface \
    ports { weight_378_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1448 \
    name weight_379_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_379_V_read \
    op interface \
    ports { weight_379_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1449 \
    name weight_380_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_380_V_read \
    op interface \
    ports { weight_380_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1450 \
    name weight_381_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_381_V_read \
    op interface \
    ports { weight_381_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1451 \
    name weight_382_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_382_V_read \
    op interface \
    ports { weight_382_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1452 \
    name weight_383_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_383_V_read \
    op interface \
    ports { weight_383_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1453 \
    name weight_384_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_384_V_read \
    op interface \
    ports { weight_384_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1454 \
    name weight_385_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_385_V_read \
    op interface \
    ports { weight_385_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1455 \
    name weight_386_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_386_V_read \
    op interface \
    ports { weight_386_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1456 \
    name weight_387_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_387_V_read \
    op interface \
    ports { weight_387_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1457 \
    name weight_388_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_388_V_read \
    op interface \
    ports { weight_388_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1458 \
    name weight_389_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_389_V_read \
    op interface \
    ports { weight_389_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1459 \
    name weight_390_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_390_V_read \
    op interface \
    ports { weight_390_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1460 \
    name weight_391_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_391_V_read \
    op interface \
    ports { weight_391_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1461 \
    name weight_392_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_392_V_read \
    op interface \
    ports { weight_392_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1462 \
    name weight_393_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_393_V_read \
    op interface \
    ports { weight_393_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1463 \
    name weight_394_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_394_V_read \
    op interface \
    ports { weight_394_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1464 \
    name weight_395_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_395_V_read \
    op interface \
    ports { weight_395_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1465 \
    name weight_396_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_396_V_read \
    op interface \
    ports { weight_396_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1466 \
    name weight_397_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_397_V_read \
    op interface \
    ports { weight_397_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1467 \
    name weight_398_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_398_V_read \
    op interface \
    ports { weight_398_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1468 \
    name weight_399_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_399_V_read \
    op interface \
    ports { weight_399_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1469 \
    name weight_400_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_400_V_read \
    op interface \
    ports { weight_400_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1470 \
    name weight_401_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_401_V_read \
    op interface \
    ports { weight_401_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1471 \
    name weight_402_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_402_V_read \
    op interface \
    ports { weight_402_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1472 \
    name weight_403_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_403_V_read \
    op interface \
    ports { weight_403_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1473 \
    name weight_404_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_404_V_read \
    op interface \
    ports { weight_404_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1474 \
    name weight_405_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_405_V_read \
    op interface \
    ports { weight_405_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1475 \
    name weight_406_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_406_V_read \
    op interface \
    ports { weight_406_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1476 \
    name weight_407_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_407_V_read \
    op interface \
    ports { weight_407_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1477 \
    name weight_408_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_408_V_read \
    op interface \
    ports { weight_408_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1478 \
    name weight_409_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_409_V_read \
    op interface \
    ports { weight_409_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1479 \
    name weight_410_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_410_V_read \
    op interface \
    ports { weight_410_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1480 \
    name weight_411_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_411_V_read \
    op interface \
    ports { weight_411_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1481 \
    name weight_412_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_412_V_read \
    op interface \
    ports { weight_412_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1482 \
    name weight_413_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_413_V_read \
    op interface \
    ports { weight_413_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1483 \
    name weight_414_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_414_V_read \
    op interface \
    ports { weight_414_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1484 \
    name weight_415_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_415_V_read \
    op interface \
    ports { weight_415_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1485 \
    name weight_416_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_416_V_read \
    op interface \
    ports { weight_416_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1486 \
    name weight_417_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_417_V_read \
    op interface \
    ports { weight_417_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1487 \
    name weight_418_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_418_V_read \
    op interface \
    ports { weight_418_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1488 \
    name weight_419_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_419_V_read \
    op interface \
    ports { weight_419_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1489 \
    name weight_420_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_420_V_read \
    op interface \
    ports { weight_420_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1490 \
    name weight_421_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_421_V_read \
    op interface \
    ports { weight_421_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1491 \
    name weight_422_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_422_V_read \
    op interface \
    ports { weight_422_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1492 \
    name weight_423_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_423_V_read \
    op interface \
    ports { weight_423_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1493 \
    name weight_424_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_424_V_read \
    op interface \
    ports { weight_424_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1494 \
    name weight_425_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_425_V_read \
    op interface \
    ports { weight_425_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1495 \
    name weight_426_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_426_V_read \
    op interface \
    ports { weight_426_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1496 \
    name weight_427_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_427_V_read \
    op interface \
    ports { weight_427_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1497 \
    name weight_428_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_428_V_read \
    op interface \
    ports { weight_428_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1498 \
    name weight_429_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_429_V_read \
    op interface \
    ports { weight_429_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1499 \
    name weight_430_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_430_V_read \
    op interface \
    ports { weight_430_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1500 \
    name weight_431_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_431_V_read \
    op interface \
    ports { weight_431_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1501 \
    name weight_432_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_432_V_read \
    op interface \
    ports { weight_432_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1502 \
    name weight_433_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_433_V_read \
    op interface \
    ports { weight_433_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1503 \
    name weight_434_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_434_V_read \
    op interface \
    ports { weight_434_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1504 \
    name weight_435_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_435_V_read \
    op interface \
    ports { weight_435_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1505 \
    name weight_436_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_436_V_read \
    op interface \
    ports { weight_436_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1506 \
    name weight_437_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_437_V_read \
    op interface \
    ports { weight_437_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1507 \
    name weight_438_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_438_V_read \
    op interface \
    ports { weight_438_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1508 \
    name weight_439_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_439_V_read \
    op interface \
    ports { weight_439_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1509 \
    name weight_440_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_440_V_read \
    op interface \
    ports { weight_440_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1510 \
    name weight_441_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_441_V_read \
    op interface \
    ports { weight_441_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1511 \
    name weight_442_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_442_V_read \
    op interface \
    ports { weight_442_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1512 \
    name weight_443_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_443_V_read \
    op interface \
    ports { weight_443_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1513 \
    name weight_444_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_444_V_read \
    op interface \
    ports { weight_444_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1514 \
    name weight_445_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_445_V_read \
    op interface \
    ports { weight_445_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1515 \
    name weight_446_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_446_V_read \
    op interface \
    ports { weight_446_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1516 \
    name weight_447_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_447_V_read \
    op interface \
    ports { weight_447_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1517 \
    name weight_448_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_448_V_read \
    op interface \
    ports { weight_448_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1518 \
    name weight_449_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_449_V_read \
    op interface \
    ports { weight_449_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1519 \
    name weight_450_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_450_V_read \
    op interface \
    ports { weight_450_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1520 \
    name weight_451_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_451_V_read \
    op interface \
    ports { weight_451_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1521 \
    name weight_452_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_452_V_read \
    op interface \
    ports { weight_452_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1522 \
    name weight_453_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_453_V_read \
    op interface \
    ports { weight_453_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1523 \
    name weight_454_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_454_V_read \
    op interface \
    ports { weight_454_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1524 \
    name weight_455_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_455_V_read \
    op interface \
    ports { weight_455_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1525 \
    name weight_456_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_456_V_read \
    op interface \
    ports { weight_456_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1526 \
    name weight_457_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_457_V_read \
    op interface \
    ports { weight_457_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1527 \
    name weight_458_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_458_V_read \
    op interface \
    ports { weight_458_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1528 \
    name weight_459_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_459_V_read \
    op interface \
    ports { weight_459_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1529 \
    name weight_460_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_460_V_read \
    op interface \
    ports { weight_460_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1530 \
    name weight_461_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_461_V_read \
    op interface \
    ports { weight_461_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1531 \
    name weight_462_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_462_V_read \
    op interface \
    ports { weight_462_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1532 \
    name weight_463_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_463_V_read \
    op interface \
    ports { weight_463_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1533 \
    name weight_464_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_464_V_read \
    op interface \
    ports { weight_464_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1534 \
    name weight_465_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_465_V_read \
    op interface \
    ports { weight_465_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1535 \
    name weight_466_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_466_V_read \
    op interface \
    ports { weight_466_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1536 \
    name weight_467_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_467_V_read \
    op interface \
    ports { weight_467_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1537 \
    name weight_468_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_468_V_read \
    op interface \
    ports { weight_468_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1538 \
    name weight_469_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_469_V_read \
    op interface \
    ports { weight_469_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1539 \
    name weight_470_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_470_V_read \
    op interface \
    ports { weight_470_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1540 \
    name weight_471_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_471_V_read \
    op interface \
    ports { weight_471_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1541 \
    name weight_472_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_472_V_read \
    op interface \
    ports { weight_472_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1542 \
    name weight_473_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_473_V_read \
    op interface \
    ports { weight_473_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1543 \
    name weight_474_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_474_V_read \
    op interface \
    ports { weight_474_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1544 \
    name weight_475_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_475_V_read \
    op interface \
    ports { weight_475_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1545 \
    name weight_476_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_476_V_read \
    op interface \
    ports { weight_476_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1546 \
    name weight_477_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_477_V_read \
    op interface \
    ports { weight_477_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1547 \
    name weight_478_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_478_V_read \
    op interface \
    ports { weight_478_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1548 \
    name weight_479_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_479_V_read \
    op interface \
    ports { weight_479_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1549 \
    name weight_480_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_480_V_read \
    op interface \
    ports { weight_480_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1550 \
    name weight_481_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_481_V_read \
    op interface \
    ports { weight_481_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1551 \
    name weight_482_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_482_V_read \
    op interface \
    ports { weight_482_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1552 \
    name weight_483_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_483_V_read \
    op interface \
    ports { weight_483_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1553 \
    name weight_484_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_484_V_read \
    op interface \
    ports { weight_484_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1554 \
    name weight_485_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_485_V_read \
    op interface \
    ports { weight_485_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1555 \
    name weight_486_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_486_V_read \
    op interface \
    ports { weight_486_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1556 \
    name weight_487_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_487_V_read \
    op interface \
    ports { weight_487_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1557 \
    name weight_488_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_488_V_read \
    op interface \
    ports { weight_488_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1558 \
    name weight_489_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_489_V_read \
    op interface \
    ports { weight_489_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1559 \
    name weight_490_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_490_V_read \
    op interface \
    ports { weight_490_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1560 \
    name weight_491_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_491_V_read \
    op interface \
    ports { weight_491_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1561 \
    name weight_492_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_492_V_read \
    op interface \
    ports { weight_492_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1562 \
    name weight_493_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_493_V_read \
    op interface \
    ports { weight_493_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1563 \
    name weight_494_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_494_V_read \
    op interface \
    ports { weight_494_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1564 \
    name weight_495_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_495_V_read \
    op interface \
    ports { weight_495_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1565 \
    name weight_496_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_496_V_read \
    op interface \
    ports { weight_496_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1566 \
    name weight_497_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_497_V_read \
    op interface \
    ports { weight_497_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1567 \
    name weight_498_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_498_V_read \
    op interface \
    ports { weight_498_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1568 \
    name weight_499_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_499_V_read \
    op interface \
    ports { weight_499_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1569 \
    name weight_500_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_500_V_read \
    op interface \
    ports { weight_500_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1570 \
    name weight_501_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_501_V_read \
    op interface \
    ports { weight_501_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1571 \
    name weight_502_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_502_V_read \
    op interface \
    ports { weight_502_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1572 \
    name weight_503_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_503_V_read \
    op interface \
    ports { weight_503_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1573 \
    name weight_504_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_504_V_read \
    op interface \
    ports { weight_504_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1574 \
    name weight_505_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_505_V_read \
    op interface \
    ports { weight_505_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1575 \
    name weight_506_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_506_V_read \
    op interface \
    ports { weight_506_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1576 \
    name weight_507_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_507_V_read \
    op interface \
    ports { weight_507_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1577 \
    name weight_508_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_508_V_read \
    op interface \
    ports { weight_508_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1578 \
    name weight_509_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_509_V_read \
    op interface \
    ports { weight_509_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1579 \
    name weight_510_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_510_V_read \
    op interface \
    ports { weight_510_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1580 \
    name weight_511_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_511_V_read \
    op interface \
    ports { weight_511_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1581 \
    name weight_512_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_512_V_read \
    op interface \
    ports { weight_512_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1582 \
    name weight_513_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_513_V_read \
    op interface \
    ports { weight_513_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1583 \
    name weight_514_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_514_V_read \
    op interface \
    ports { weight_514_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1584 \
    name weight_515_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_515_V_read \
    op interface \
    ports { weight_515_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1585 \
    name weight_516_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_516_V_read \
    op interface \
    ports { weight_516_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1586 \
    name weight_517_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_517_V_read \
    op interface \
    ports { weight_517_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1587 \
    name weight_518_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_518_V_read \
    op interface \
    ports { weight_518_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1588 \
    name weight_519_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_519_V_read \
    op interface \
    ports { weight_519_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1589 \
    name weight_520_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_520_V_read \
    op interface \
    ports { weight_520_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1590 \
    name weight_521_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_521_V_read \
    op interface \
    ports { weight_521_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1591 \
    name weight_522_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_522_V_read \
    op interface \
    ports { weight_522_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1592 \
    name weight_523_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_523_V_read \
    op interface \
    ports { weight_523_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1593 \
    name weight_524_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_524_V_read \
    op interface \
    ports { weight_524_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1594 \
    name weight_525_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_525_V_read \
    op interface \
    ports { weight_525_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1595 \
    name weight_526_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_526_V_read \
    op interface \
    ports { weight_526_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1596 \
    name weight_527_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_527_V_read \
    op interface \
    ports { weight_527_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1597 \
    name weight_528_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_528_V_read \
    op interface \
    ports { weight_528_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1598 \
    name weight_529_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_529_V_read \
    op interface \
    ports { weight_529_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1599 \
    name weight_530_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_530_V_read \
    op interface \
    ports { weight_530_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1600 \
    name weight_531_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_531_V_read \
    op interface \
    ports { weight_531_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1601 \
    name weight_532_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_532_V_read \
    op interface \
    ports { weight_532_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1602 \
    name weight_533_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_533_V_read \
    op interface \
    ports { weight_533_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1603 \
    name weight_534_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_534_V_read \
    op interface \
    ports { weight_534_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1604 \
    name weight_535_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_535_V_read \
    op interface \
    ports { weight_535_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1605 \
    name weight_536_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_536_V_read \
    op interface \
    ports { weight_536_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1606 \
    name weight_537_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_537_V_read \
    op interface \
    ports { weight_537_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1607 \
    name weight_538_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_538_V_read \
    op interface \
    ports { weight_538_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1608 \
    name weight_539_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_539_V_read \
    op interface \
    ports { weight_539_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1609 \
    name weight_540_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_540_V_read \
    op interface \
    ports { weight_540_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1610 \
    name weight_541_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_541_V_read \
    op interface \
    ports { weight_541_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1611 \
    name weight_542_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_542_V_read \
    op interface \
    ports { weight_542_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1612 \
    name weight_543_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_543_V_read \
    op interface \
    ports { weight_543_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1613 \
    name weight_544_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_544_V_read \
    op interface \
    ports { weight_544_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1614 \
    name weight_545_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_545_V_read \
    op interface \
    ports { weight_545_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1615 \
    name weight_546_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_546_V_read \
    op interface \
    ports { weight_546_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1616 \
    name weight_547_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_547_V_read \
    op interface \
    ports { weight_547_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1617 \
    name weight_548_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_548_V_read \
    op interface \
    ports { weight_548_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1618 \
    name weight_549_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_549_V_read \
    op interface \
    ports { weight_549_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1619 \
    name weight_550_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_550_V_read \
    op interface \
    ports { weight_550_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1620 \
    name weight_551_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_551_V_read \
    op interface \
    ports { weight_551_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1621 \
    name weight_552_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_552_V_read \
    op interface \
    ports { weight_552_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1622 \
    name weight_553_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_553_V_read \
    op interface \
    ports { weight_553_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1623 \
    name weight_554_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_554_V_read \
    op interface \
    ports { weight_554_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1624 \
    name weight_555_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_555_V_read \
    op interface \
    ports { weight_555_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1625 \
    name weight_556_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_556_V_read \
    op interface \
    ports { weight_556_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1626 \
    name weight_557_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_557_V_read \
    op interface \
    ports { weight_557_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1627 \
    name weight_558_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_558_V_read \
    op interface \
    ports { weight_558_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1628 \
    name weight_559_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_559_V_read \
    op interface \
    ports { weight_559_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1629 \
    name weight_560_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_560_V_read \
    op interface \
    ports { weight_560_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1630 \
    name weight_561_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_561_V_read \
    op interface \
    ports { weight_561_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1631 \
    name weight_562_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_562_V_read \
    op interface \
    ports { weight_562_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1632 \
    name weight_563_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_563_V_read \
    op interface \
    ports { weight_563_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1633 \
    name weight_564_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_564_V_read \
    op interface \
    ports { weight_564_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1634 \
    name weight_565_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_565_V_read \
    op interface \
    ports { weight_565_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1635 \
    name weight_566_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_566_V_read \
    op interface \
    ports { weight_566_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1636 \
    name weight_567_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_567_V_read \
    op interface \
    ports { weight_567_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1637 \
    name weight_568_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_568_V_read \
    op interface \
    ports { weight_568_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1638 \
    name weight_569_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_569_V_read \
    op interface \
    ports { weight_569_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1639 \
    name weight_570_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_570_V_read \
    op interface \
    ports { weight_570_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1640 \
    name weight_571_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_571_V_read \
    op interface \
    ports { weight_571_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1641 \
    name weight_572_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_572_V_read \
    op interface \
    ports { weight_572_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1642 \
    name weight_573_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_573_V_read \
    op interface \
    ports { weight_573_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1643 \
    name weight_574_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_574_V_read \
    op interface \
    ports { weight_574_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1644 \
    name weight_575_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_575_V_read \
    op interface \
    ports { weight_575_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1645 \
    name weight_576_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_576_V_read \
    op interface \
    ports { weight_576_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1646 \
    name weight_577_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_577_V_read \
    op interface \
    ports { weight_577_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1647 \
    name weight_578_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_578_V_read \
    op interface \
    ports { weight_578_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1648 \
    name weight_579_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_579_V_read \
    op interface \
    ports { weight_579_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1649 \
    name weight_580_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_580_V_read \
    op interface \
    ports { weight_580_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1650 \
    name weight_581_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_581_V_read \
    op interface \
    ports { weight_581_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1651 \
    name weight_582_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_582_V_read \
    op interface \
    ports { weight_582_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1652 \
    name weight_583_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_583_V_read \
    op interface \
    ports { weight_583_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1653 \
    name weight_584_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_584_V_read \
    op interface \
    ports { weight_584_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1654 \
    name weight_585_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_585_V_read \
    op interface \
    ports { weight_585_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1655 \
    name weight_586_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_586_V_read \
    op interface \
    ports { weight_586_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1656 \
    name weight_587_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_587_V_read \
    op interface \
    ports { weight_587_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1657 \
    name weight_588_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_588_V_read \
    op interface \
    ports { weight_588_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1658 \
    name weight_589_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_589_V_read \
    op interface \
    ports { weight_589_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1659 \
    name weight_590_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_590_V_read \
    op interface \
    ports { weight_590_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1660 \
    name weight_591_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_591_V_read \
    op interface \
    ports { weight_591_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1661 \
    name weight_592_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_592_V_read \
    op interface \
    ports { weight_592_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1662 \
    name weight_593_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_593_V_read \
    op interface \
    ports { weight_593_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1663 \
    name weight_594_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_594_V_read \
    op interface \
    ports { weight_594_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1664 \
    name weight_595_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_595_V_read \
    op interface \
    ports { weight_595_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1665 \
    name weight_596_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_596_V_read \
    op interface \
    ports { weight_596_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1666 \
    name weight_597_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_597_V_read \
    op interface \
    ports { weight_597_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1667 \
    name weight_598_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_598_V_read \
    op interface \
    ports { weight_598_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1668 \
    name weight_599_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_599_V_read \
    op interface \
    ports { weight_599_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1669 \
    name weight_600_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_600_V_read \
    op interface \
    ports { weight_600_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1670 \
    name weight_601_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_601_V_read \
    op interface \
    ports { weight_601_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1671 \
    name weight_602_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_602_V_read \
    op interface \
    ports { weight_602_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1672 \
    name weight_603_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_603_V_read \
    op interface \
    ports { weight_603_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1673 \
    name weight_604_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_604_V_read \
    op interface \
    ports { weight_604_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1674 \
    name weight_605_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_605_V_read \
    op interface \
    ports { weight_605_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1675 \
    name weight_606_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_606_V_read \
    op interface \
    ports { weight_606_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1676 \
    name weight_607_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_607_V_read \
    op interface \
    ports { weight_607_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1677 \
    name weight_608_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_608_V_read \
    op interface \
    ports { weight_608_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1678 \
    name weight_609_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_609_V_read \
    op interface \
    ports { weight_609_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1679 \
    name weight_610_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_610_V_read \
    op interface \
    ports { weight_610_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1680 \
    name weight_611_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_611_V_read \
    op interface \
    ports { weight_611_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1681 \
    name weight_612_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_612_V_read \
    op interface \
    ports { weight_612_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1682 \
    name weight_613_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_613_V_read \
    op interface \
    ports { weight_613_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1683 \
    name weight_614_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_614_V_read \
    op interface \
    ports { weight_614_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1684 \
    name weight_615_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_615_V_read \
    op interface \
    ports { weight_615_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1685 \
    name weight_616_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_616_V_read \
    op interface \
    ports { weight_616_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1686 \
    name weight_617_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_617_V_read \
    op interface \
    ports { weight_617_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1687 \
    name weight_618_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_618_V_read \
    op interface \
    ports { weight_618_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1688 \
    name weight_619_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_619_V_read \
    op interface \
    ports { weight_619_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1689 \
    name weight_620_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_620_V_read \
    op interface \
    ports { weight_620_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1690 \
    name weight_621_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_621_V_read \
    op interface \
    ports { weight_621_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1691 \
    name weight_622_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_622_V_read \
    op interface \
    ports { weight_622_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1692 \
    name weight_623_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_623_V_read \
    op interface \
    ports { weight_623_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1693 \
    name weight_624_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_624_V_read \
    op interface \
    ports { weight_624_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1694 \
    name weight_625_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_625_V_read \
    op interface \
    ports { weight_625_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1695 \
    name weight_626_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_626_V_read \
    op interface \
    ports { weight_626_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1696 \
    name weight_627_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_627_V_read \
    op interface \
    ports { weight_627_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1697 \
    name weight_628_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_628_V_read \
    op interface \
    ports { weight_628_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1698 \
    name weight_629_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_629_V_read \
    op interface \
    ports { weight_629_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1699 \
    name weight_630_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_630_V_read \
    op interface \
    ports { weight_630_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1700 \
    name weight_631_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_631_V_read \
    op interface \
    ports { weight_631_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1701 \
    name weight_632_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_632_V_read \
    op interface \
    ports { weight_632_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1702 \
    name weight_633_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_633_V_read \
    op interface \
    ports { weight_633_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1703 \
    name weight_634_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_634_V_read \
    op interface \
    ports { weight_634_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1704 \
    name weight_635_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_635_V_read \
    op interface \
    ports { weight_635_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1705 \
    name weight_636_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_636_V_read \
    op interface \
    ports { weight_636_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1706 \
    name weight_637_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_637_V_read \
    op interface \
    ports { weight_637_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1707 \
    name weight_638_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_638_V_read \
    op interface \
    ports { weight_638_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1708 \
    name weight_639_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_639_V_read \
    op interface \
    ports { weight_639_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1709 \
    name weight_640_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_640_V_read \
    op interface \
    ports { weight_640_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1710 \
    name weight_641_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_641_V_read \
    op interface \
    ports { weight_641_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1711 \
    name weight_642_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_642_V_read \
    op interface \
    ports { weight_642_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1712 \
    name weight_643_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_643_V_read \
    op interface \
    ports { weight_643_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1713 \
    name weight_644_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_644_V_read \
    op interface \
    ports { weight_644_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1714 \
    name weight_645_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_645_V_read \
    op interface \
    ports { weight_645_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1715 \
    name weight_646_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_646_V_read \
    op interface \
    ports { weight_646_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1716 \
    name weight_647_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_647_V_read \
    op interface \
    ports { weight_647_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1717 \
    name weight_648_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_648_V_read \
    op interface \
    ports { weight_648_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1718 \
    name weight_649_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_649_V_read \
    op interface \
    ports { weight_649_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1719 \
    name weight_650_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_650_V_read \
    op interface \
    ports { weight_650_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1720 \
    name weight_651_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_651_V_read \
    op interface \
    ports { weight_651_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1721 \
    name weight_652_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_652_V_read \
    op interface \
    ports { weight_652_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1722 \
    name weight_653_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_653_V_read \
    op interface \
    ports { weight_653_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1723 \
    name weight_654_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_654_V_read \
    op interface \
    ports { weight_654_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1724 \
    name weight_655_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_655_V_read \
    op interface \
    ports { weight_655_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1725 \
    name weight_656_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_656_V_read \
    op interface \
    ports { weight_656_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1726 \
    name weight_657_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_657_V_read \
    op interface \
    ports { weight_657_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1727 \
    name weight_658_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_658_V_read \
    op interface \
    ports { weight_658_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1728 \
    name weight_659_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_659_V_read \
    op interface \
    ports { weight_659_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1729 \
    name weight_660_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_660_V_read \
    op interface \
    ports { weight_660_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1730 \
    name weight_661_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_661_V_read \
    op interface \
    ports { weight_661_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1731 \
    name weight_662_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_662_V_read \
    op interface \
    ports { weight_662_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1732 \
    name weight_663_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_663_V_read \
    op interface \
    ports { weight_663_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1733 \
    name weight_664_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_664_V_read \
    op interface \
    ports { weight_664_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1734 \
    name weight_665_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_665_V_read \
    op interface \
    ports { weight_665_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1735 \
    name weight_666_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_666_V_read \
    op interface \
    ports { weight_666_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1736 \
    name weight_667_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_667_V_read \
    op interface \
    ports { weight_667_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1737 \
    name weight_668_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_668_V_read \
    op interface \
    ports { weight_668_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1738 \
    name weight_669_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_669_V_read \
    op interface \
    ports { weight_669_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1739 \
    name weight_670_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_670_V_read \
    op interface \
    ports { weight_670_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1740 \
    name weight_671_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_671_V_read \
    op interface \
    ports { weight_671_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1741 \
    name weight_672_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_672_V_read \
    op interface \
    ports { weight_672_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1742 \
    name weight_673_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_673_V_read \
    op interface \
    ports { weight_673_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1743 \
    name weight_674_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_674_V_read \
    op interface \
    ports { weight_674_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1744 \
    name weight_675_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_675_V_read \
    op interface \
    ports { weight_675_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1745 \
    name weight_676_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_676_V_read \
    op interface \
    ports { weight_676_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1746 \
    name weight_677_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_677_V_read \
    op interface \
    ports { weight_677_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1747 \
    name weight_678_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_678_V_read \
    op interface \
    ports { weight_678_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1748 \
    name weight_679_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_679_V_read \
    op interface \
    ports { weight_679_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1749 \
    name weight_680_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_680_V_read \
    op interface \
    ports { weight_680_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1750 \
    name weight_681_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_681_V_read \
    op interface \
    ports { weight_681_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1751 \
    name weight_682_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_682_V_read \
    op interface \
    ports { weight_682_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1752 \
    name weight_683_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_683_V_read \
    op interface \
    ports { weight_683_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1753 \
    name weight_684_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_684_V_read \
    op interface \
    ports { weight_684_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1754 \
    name weight_685_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_685_V_read \
    op interface \
    ports { weight_685_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1755 \
    name weight_686_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_686_V_read \
    op interface \
    ports { weight_686_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1756 \
    name weight_687_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_687_V_read \
    op interface \
    ports { weight_687_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1757 \
    name weight_688_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_688_V_read \
    op interface \
    ports { weight_688_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1758 \
    name weight_689_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_689_V_read \
    op interface \
    ports { weight_689_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1759 \
    name weight_690_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_690_V_read \
    op interface \
    ports { weight_690_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1760 \
    name weight_691_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_691_V_read \
    op interface \
    ports { weight_691_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1761 \
    name weight_692_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_692_V_read \
    op interface \
    ports { weight_692_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1762 \
    name weight_693_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_693_V_read \
    op interface \
    ports { weight_693_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1763 \
    name weight_694_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_694_V_read \
    op interface \
    ports { weight_694_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1764 \
    name weight_695_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_695_V_read \
    op interface \
    ports { weight_695_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1765 \
    name weight_696_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_696_V_read \
    op interface \
    ports { weight_696_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1766 \
    name weight_697_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_697_V_read \
    op interface \
    ports { weight_697_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1767 \
    name weight_698_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_698_V_read \
    op interface \
    ports { weight_698_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1768 \
    name weight_699_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_699_V_read \
    op interface \
    ports { weight_699_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1769 \
    name weight_700_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_700_V_read \
    op interface \
    ports { weight_700_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1770 \
    name weight_701_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_701_V_read \
    op interface \
    ports { weight_701_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1771 \
    name weight_702_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_702_V_read \
    op interface \
    ports { weight_702_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1772 \
    name weight_703_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_703_V_read \
    op interface \
    ports { weight_703_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1773 \
    name weight_704_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_704_V_read \
    op interface \
    ports { weight_704_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1774 \
    name weight_705_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_705_V_read \
    op interface \
    ports { weight_705_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1775 \
    name weight_706_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_706_V_read \
    op interface \
    ports { weight_706_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1776 \
    name weight_707_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_707_V_read \
    op interface \
    ports { weight_707_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1777 \
    name weight_708_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_708_V_read \
    op interface \
    ports { weight_708_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1778 \
    name weight_709_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_709_V_read \
    op interface \
    ports { weight_709_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1779 \
    name weight_710_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_710_V_read \
    op interface \
    ports { weight_710_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1780 \
    name weight_711_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_711_V_read \
    op interface \
    ports { weight_711_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1781 \
    name weight_712_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_712_V_read \
    op interface \
    ports { weight_712_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1782 \
    name weight_713_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_713_V_read \
    op interface \
    ports { weight_713_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1783 \
    name weight_714_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_714_V_read \
    op interface \
    ports { weight_714_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1784 \
    name weight_715_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_715_V_read \
    op interface \
    ports { weight_715_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1785 \
    name weight_716_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_716_V_read \
    op interface \
    ports { weight_716_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1786 \
    name weight_717_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_717_V_read \
    op interface \
    ports { weight_717_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1787 \
    name weight_718_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_718_V_read \
    op interface \
    ports { weight_718_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1788 \
    name weight_719_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_719_V_read \
    op interface \
    ports { weight_719_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1789 \
    name weight_720_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_720_V_read \
    op interface \
    ports { weight_720_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1790 \
    name weight_721_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_721_V_read \
    op interface \
    ports { weight_721_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1791 \
    name weight_722_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_722_V_read \
    op interface \
    ports { weight_722_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1792 \
    name weight_723_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_723_V_read \
    op interface \
    ports { weight_723_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1793 \
    name weight_724_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_724_V_read \
    op interface \
    ports { weight_724_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1794 \
    name weight_725_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_725_V_read \
    op interface \
    ports { weight_725_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1795 \
    name weight_726_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_726_V_read \
    op interface \
    ports { weight_726_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1796 \
    name weight_727_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_727_V_read \
    op interface \
    ports { weight_727_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1797 \
    name weight_728_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_728_V_read \
    op interface \
    ports { weight_728_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1798 \
    name weight_729_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_729_V_read \
    op interface \
    ports { weight_729_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1799 \
    name weight_730_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_730_V_read \
    op interface \
    ports { weight_730_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1800 \
    name weight_731_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_731_V_read \
    op interface \
    ports { weight_731_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1801 \
    name weight_732_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_732_V_read \
    op interface \
    ports { weight_732_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1802 \
    name weight_733_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_733_V_read \
    op interface \
    ports { weight_733_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1803 \
    name weight_734_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_734_V_read \
    op interface \
    ports { weight_734_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1804 \
    name weight_735_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_735_V_read \
    op interface \
    ports { weight_735_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1805 \
    name weight_736_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_736_V_read \
    op interface \
    ports { weight_736_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1806 \
    name weight_737_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_737_V_read \
    op interface \
    ports { weight_737_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1807 \
    name weight_738_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_738_V_read \
    op interface \
    ports { weight_738_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1808 \
    name weight_739_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_739_V_read \
    op interface \
    ports { weight_739_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1809 \
    name weight_740_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_740_V_read \
    op interface \
    ports { weight_740_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1810 \
    name weight_741_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_741_V_read \
    op interface \
    ports { weight_741_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1811 \
    name weight_742_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_742_V_read \
    op interface \
    ports { weight_742_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1812 \
    name weight_743_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_743_V_read \
    op interface \
    ports { weight_743_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1813 \
    name weight_744_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_744_V_read \
    op interface \
    ports { weight_744_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1814 \
    name weight_745_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_745_V_read \
    op interface \
    ports { weight_745_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1815 \
    name weight_746_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_746_V_read \
    op interface \
    ports { weight_746_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1816 \
    name weight_747_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_747_V_read \
    op interface \
    ports { weight_747_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1817 \
    name weight_748_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_748_V_read \
    op interface \
    ports { weight_748_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1818 \
    name weight_749_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_749_V_read \
    op interface \
    ports { weight_749_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1819 \
    name weight_750_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_750_V_read \
    op interface \
    ports { weight_750_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1820 \
    name weight_751_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_751_V_read \
    op interface \
    ports { weight_751_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1821 \
    name weight_752_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_752_V_read \
    op interface \
    ports { weight_752_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1822 \
    name weight_753_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_753_V_read \
    op interface \
    ports { weight_753_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1823 \
    name weight_754_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_754_V_read \
    op interface \
    ports { weight_754_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1824 \
    name weight_755_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_755_V_read \
    op interface \
    ports { weight_755_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1825 \
    name weight_756_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_756_V_read \
    op interface \
    ports { weight_756_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1826 \
    name weight_757_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_757_V_read \
    op interface \
    ports { weight_757_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1827 \
    name weight_758_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_758_V_read \
    op interface \
    ports { weight_758_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1828 \
    name weight_759_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_759_V_read \
    op interface \
    ports { weight_759_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1829 \
    name weight_760_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_760_V_read \
    op interface \
    ports { weight_760_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1830 \
    name weight_761_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_761_V_read \
    op interface \
    ports { weight_761_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1831 \
    name weight_762_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_762_V_read \
    op interface \
    ports { weight_762_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1832 \
    name weight_763_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_763_V_read \
    op interface \
    ports { weight_763_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1833 \
    name weight_764_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_764_V_read \
    op interface \
    ports { weight_764_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1834 \
    name weight_765_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_765_V_read \
    op interface \
    ports { weight_765_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1835 \
    name weight_766_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_766_V_read \
    op interface \
    ports { weight_766_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1836 \
    name weight_767_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_767_V_read \
    op interface \
    ports { weight_767_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1837 \
    name weight_768_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_768_V_read \
    op interface \
    ports { weight_768_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1838 \
    name weight_769_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_769_V_read \
    op interface \
    ports { weight_769_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1839 \
    name weight_770_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_770_V_read \
    op interface \
    ports { weight_770_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1840 \
    name weight_771_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_771_V_read \
    op interface \
    ports { weight_771_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1841 \
    name weight_772_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_772_V_read \
    op interface \
    ports { weight_772_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1842 \
    name weight_773_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_773_V_read \
    op interface \
    ports { weight_773_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1843 \
    name weight_774_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_774_V_read \
    op interface \
    ports { weight_774_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1844 \
    name weight_775_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_775_V_read \
    op interface \
    ports { weight_775_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1845 \
    name weight_776_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_776_V_read \
    op interface \
    ports { weight_776_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1846 \
    name weight_777_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_777_V_read \
    op interface \
    ports { weight_777_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1847 \
    name weight_778_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_778_V_read \
    op interface \
    ports { weight_778_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1848 \
    name weight_779_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_779_V_read \
    op interface \
    ports { weight_779_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1849 \
    name weight_780_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_780_V_read \
    op interface \
    ports { weight_780_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1850 \
    name weight_781_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_781_V_read \
    op interface \
    ports { weight_781_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1851 \
    name weight_782_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_782_V_read \
    op interface \
    ports { weight_782_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1852 \
    name weight_783_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_783_V_read \
    op interface \
    ports { weight_783_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1853 \
    name weight_784_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_784_V_read \
    op interface \
    ports { weight_784_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1854 \
    name weight_785_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_785_V_read \
    op interface \
    ports { weight_785_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1855 \
    name weight_786_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_786_V_read \
    op interface \
    ports { weight_786_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1856 \
    name weight_787_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_787_V_read \
    op interface \
    ports { weight_787_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1857 \
    name weight_788_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_788_V_read \
    op interface \
    ports { weight_788_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1858 \
    name weight_789_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_789_V_read \
    op interface \
    ports { weight_789_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1859 \
    name weight_790_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_790_V_read \
    op interface \
    ports { weight_790_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1860 \
    name weight_791_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_791_V_read \
    op interface \
    ports { weight_791_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1861 \
    name weight_792_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_792_V_read \
    op interface \
    ports { weight_792_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1862 \
    name weight_793_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_793_V_read \
    op interface \
    ports { weight_793_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1863 \
    name weight_794_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_794_V_read \
    op interface \
    ports { weight_794_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1864 \
    name weight_795_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_795_V_read \
    op interface \
    ports { weight_795_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1865 \
    name weight_796_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_796_V_read \
    op interface \
    ports { weight_796_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1866 \
    name weight_797_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_797_V_read \
    op interface \
    ports { weight_797_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1867 \
    name weight_798_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_798_V_read \
    op interface \
    ports { weight_798_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1868 \
    name weight_799_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_799_V_read \
    op interface \
    ports { weight_799_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1869 \
    name weight_800_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_800_V_read \
    op interface \
    ports { weight_800_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1870 \
    name weight_801_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_801_V_read \
    op interface \
    ports { weight_801_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1871 \
    name weight_802_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_802_V_read \
    op interface \
    ports { weight_802_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1872 \
    name weight_803_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_803_V_read \
    op interface \
    ports { weight_803_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1873 \
    name weight_804_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_804_V_read \
    op interface \
    ports { weight_804_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1874 \
    name weight_805_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_805_V_read \
    op interface \
    ports { weight_805_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1875 \
    name weight_806_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_806_V_read \
    op interface \
    ports { weight_806_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1876 \
    name weight_807_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_807_V_read \
    op interface \
    ports { weight_807_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1877 \
    name weight_808_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_808_V_read \
    op interface \
    ports { weight_808_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1878 \
    name weight_809_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_809_V_read \
    op interface \
    ports { weight_809_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1879 \
    name weight_810_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_810_V_read \
    op interface \
    ports { weight_810_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1880 \
    name weight_811_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_811_V_read \
    op interface \
    ports { weight_811_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1881 \
    name weight_812_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_812_V_read \
    op interface \
    ports { weight_812_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1882 \
    name weight_813_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_813_V_read \
    op interface \
    ports { weight_813_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1883 \
    name weight_814_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_814_V_read \
    op interface \
    ports { weight_814_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1884 \
    name weight_815_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_815_V_read \
    op interface \
    ports { weight_815_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1885 \
    name weight_816_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_816_V_read \
    op interface \
    ports { weight_816_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1886 \
    name weight_817_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_817_V_read \
    op interface \
    ports { weight_817_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1887 \
    name weight_818_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_818_V_read \
    op interface \
    ports { weight_818_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1888 \
    name weight_819_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_819_V_read \
    op interface \
    ports { weight_819_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1889 \
    name weight_820_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_820_V_read \
    op interface \
    ports { weight_820_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1890 \
    name weight_821_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_821_V_read \
    op interface \
    ports { weight_821_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1891 \
    name weight_822_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_822_V_read \
    op interface \
    ports { weight_822_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1892 \
    name weight_823_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_823_V_read \
    op interface \
    ports { weight_823_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1893 \
    name weight_824_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_824_V_read \
    op interface \
    ports { weight_824_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1894 \
    name weight_825_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_825_V_read \
    op interface \
    ports { weight_825_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1895 \
    name weight_826_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_826_V_read \
    op interface \
    ports { weight_826_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1896 \
    name weight_827_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_827_V_read \
    op interface \
    ports { weight_827_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1897 \
    name weight_828_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_828_V_read \
    op interface \
    ports { weight_828_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1898 \
    name weight_829_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_829_V_read \
    op interface \
    ports { weight_829_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1899 \
    name weight_830_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_830_V_read \
    op interface \
    ports { weight_830_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1900 \
    name weight_831_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_831_V_read \
    op interface \
    ports { weight_831_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1901 \
    name weight_832_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_832_V_read \
    op interface \
    ports { weight_832_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1902 \
    name weight_833_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_833_V_read \
    op interface \
    ports { weight_833_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1903 \
    name weight_834_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_834_V_read \
    op interface \
    ports { weight_834_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1904 \
    name weight_835_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_835_V_read \
    op interface \
    ports { weight_835_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1905 \
    name weight_836_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_836_V_read \
    op interface \
    ports { weight_836_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1906 \
    name weight_837_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_837_V_read \
    op interface \
    ports { weight_837_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1907 \
    name weight_838_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_838_V_read \
    op interface \
    ports { weight_838_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1908 \
    name weight_839_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_839_V_read \
    op interface \
    ports { weight_839_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1909 \
    name weight_840_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_840_V_read \
    op interface \
    ports { weight_840_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1910 \
    name weight_841_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_841_V_read \
    op interface \
    ports { weight_841_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1911 \
    name weight_842_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_842_V_read \
    op interface \
    ports { weight_842_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1912 \
    name weight_843_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_843_V_read \
    op interface \
    ports { weight_843_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1913 \
    name weight_844_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_844_V_read \
    op interface \
    ports { weight_844_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1914 \
    name weight_845_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_845_V_read \
    op interface \
    ports { weight_845_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1915 \
    name weight_846_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_846_V_read \
    op interface \
    ports { weight_846_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1916 \
    name weight_847_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_847_V_read \
    op interface \
    ports { weight_847_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1917 \
    name weight_848_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_848_V_read \
    op interface \
    ports { weight_848_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1918 \
    name weight_849_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_849_V_read \
    op interface \
    ports { weight_849_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1919 \
    name weight_850_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_850_V_read \
    op interface \
    ports { weight_850_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1920 \
    name weight_851_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_851_V_read \
    op interface \
    ports { weight_851_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1921 \
    name weight_852_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_852_V_read \
    op interface \
    ports { weight_852_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1922 \
    name weight_853_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_853_V_read \
    op interface \
    ports { weight_853_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1923 \
    name weight_854_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_854_V_read \
    op interface \
    ports { weight_854_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1924 \
    name weight_855_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_855_V_read \
    op interface \
    ports { weight_855_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1925 \
    name weight_856_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_856_V_read \
    op interface \
    ports { weight_856_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1926 \
    name weight_857_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_857_V_read \
    op interface \
    ports { weight_857_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1927 \
    name weight_858_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_858_V_read \
    op interface \
    ports { weight_858_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1928 \
    name weight_859_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_859_V_read \
    op interface \
    ports { weight_859_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1929 \
    name weight_860_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_860_V_read \
    op interface \
    ports { weight_860_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1930 \
    name weight_861_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_861_V_read \
    op interface \
    ports { weight_861_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1931 \
    name weight_862_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_862_V_read \
    op interface \
    ports { weight_862_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1932 \
    name weight_863_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_863_V_read \
    op interface \
    ports { weight_863_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1933 \
    name weight_864_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_864_V_read \
    op interface \
    ports { weight_864_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1934 \
    name weight_865_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_865_V_read \
    op interface \
    ports { weight_865_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1935 \
    name weight_866_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_866_V_read \
    op interface \
    ports { weight_866_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1936 \
    name weight_867_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_867_V_read \
    op interface \
    ports { weight_867_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1937 \
    name weight_868_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_868_V_read \
    op interface \
    ports { weight_868_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1938 \
    name weight_869_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_869_V_read \
    op interface \
    ports { weight_869_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1939 \
    name weight_870_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_870_V_read \
    op interface \
    ports { weight_870_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1940 \
    name weight_871_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_871_V_read \
    op interface \
    ports { weight_871_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1941 \
    name weight_872_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_872_V_read \
    op interface \
    ports { weight_872_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1942 \
    name weight_873_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_873_V_read \
    op interface \
    ports { weight_873_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1943 \
    name weight_874_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_874_V_read \
    op interface \
    ports { weight_874_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1944 \
    name weight_875_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_875_V_read \
    op interface \
    ports { weight_875_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1945 \
    name weight_876_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_876_V_read \
    op interface \
    ports { weight_876_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1946 \
    name weight_877_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_877_V_read \
    op interface \
    ports { weight_877_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1947 \
    name weight_878_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_878_V_read \
    op interface \
    ports { weight_878_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1948 \
    name weight_879_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_879_V_read \
    op interface \
    ports { weight_879_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1949 \
    name weight_880_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_880_V_read \
    op interface \
    ports { weight_880_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1950 \
    name weight_881_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_881_V_read \
    op interface \
    ports { weight_881_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1951 \
    name weight_882_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_882_V_read \
    op interface \
    ports { weight_882_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1952 \
    name weight_883_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_883_V_read \
    op interface \
    ports { weight_883_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1953 \
    name weight_884_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_884_V_read \
    op interface \
    ports { weight_884_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1954 \
    name weight_885_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_885_V_read \
    op interface \
    ports { weight_885_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1955 \
    name weight_886_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_886_V_read \
    op interface \
    ports { weight_886_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1956 \
    name weight_887_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_887_V_read \
    op interface \
    ports { weight_887_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1957 \
    name weight_888_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_888_V_read \
    op interface \
    ports { weight_888_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1958 \
    name weight_889_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_889_V_read \
    op interface \
    ports { weight_889_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1959 \
    name weight_890_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_890_V_read \
    op interface \
    ports { weight_890_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1960 \
    name weight_891_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_891_V_read \
    op interface \
    ports { weight_891_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1961 \
    name weight_892_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_892_V_read \
    op interface \
    ports { weight_892_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1962 \
    name weight_893_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_893_V_read \
    op interface \
    ports { weight_893_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1963 \
    name weight_894_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_894_V_read \
    op interface \
    ports { weight_894_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1964 \
    name weight_895_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_895_V_read \
    op interface \
    ports { weight_895_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1965 \
    name weight_896_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_896_V_read \
    op interface \
    ports { weight_896_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1966 \
    name weight_897_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_897_V_read \
    op interface \
    ports { weight_897_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1967 \
    name weight_898_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_898_V_read \
    op interface \
    ports { weight_898_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1968 \
    name weight_899_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_899_V_read \
    op interface \
    ports { weight_899_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1969 \
    name weight_900_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_900_V_read \
    op interface \
    ports { weight_900_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1970 \
    name weight_901_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_901_V_read \
    op interface \
    ports { weight_901_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1971 \
    name weight_902_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_902_V_read \
    op interface \
    ports { weight_902_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1972 \
    name weight_903_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_903_V_read \
    op interface \
    ports { weight_903_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1973 \
    name weight_904_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_904_V_read \
    op interface \
    ports { weight_904_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1974 \
    name weight_905_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_905_V_read \
    op interface \
    ports { weight_905_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1975 \
    name weight_906_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_906_V_read \
    op interface \
    ports { weight_906_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1976 \
    name weight_907_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_907_V_read \
    op interface \
    ports { weight_907_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1977 \
    name weight_908_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_908_V_read \
    op interface \
    ports { weight_908_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1978 \
    name weight_909_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_909_V_read \
    op interface \
    ports { weight_909_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1979 \
    name weight_910_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_910_V_read \
    op interface \
    ports { weight_910_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1980 \
    name weight_911_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_911_V_read \
    op interface \
    ports { weight_911_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1981 \
    name weight_912_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_912_V_read \
    op interface \
    ports { weight_912_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1982 \
    name weight_913_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_913_V_read \
    op interface \
    ports { weight_913_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1983 \
    name weight_914_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_914_V_read \
    op interface \
    ports { weight_914_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1984 \
    name weight_915_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_915_V_read \
    op interface \
    ports { weight_915_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1985 \
    name weight_916_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_916_V_read \
    op interface \
    ports { weight_916_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1986 \
    name weight_917_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_917_V_read \
    op interface \
    ports { weight_917_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1987 \
    name weight_918_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_918_V_read \
    op interface \
    ports { weight_918_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1988 \
    name weight_919_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_919_V_read \
    op interface \
    ports { weight_919_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1989 \
    name weight_920_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_920_V_read \
    op interface \
    ports { weight_920_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1990 \
    name weight_921_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_921_V_read \
    op interface \
    ports { weight_921_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1991 \
    name weight_922_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_922_V_read \
    op interface \
    ports { weight_922_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1992 \
    name weight_923_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_923_V_read \
    op interface \
    ports { weight_923_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1993 \
    name weight_924_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_924_V_read \
    op interface \
    ports { weight_924_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1994 \
    name weight_925_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_925_V_read \
    op interface \
    ports { weight_925_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1995 \
    name weight_926_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_926_V_read \
    op interface \
    ports { weight_926_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1996 \
    name weight_927_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_927_V_read \
    op interface \
    ports { weight_927_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1997 \
    name weight_928_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_928_V_read \
    op interface \
    ports { weight_928_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1998 \
    name weight_929_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_929_V_read \
    op interface \
    ports { weight_929_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1999 \
    name weight_930_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_930_V_read \
    op interface \
    ports { weight_930_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2000 \
    name weight_931_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_931_V_read \
    op interface \
    ports { weight_931_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2001 \
    name weight_932_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_932_V_read \
    op interface \
    ports { weight_932_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2002 \
    name weight_933_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_933_V_read \
    op interface \
    ports { weight_933_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2003 \
    name weight_934_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_934_V_read \
    op interface \
    ports { weight_934_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2004 \
    name weight_935_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_935_V_read \
    op interface \
    ports { weight_935_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2005 \
    name weight_936_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_936_V_read \
    op interface \
    ports { weight_936_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2006 \
    name weight_937_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_937_V_read \
    op interface \
    ports { weight_937_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2007 \
    name weight_938_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_938_V_read \
    op interface \
    ports { weight_938_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2008 \
    name weight_939_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_939_V_read \
    op interface \
    ports { weight_939_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2009 \
    name weight_940_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_940_V_read \
    op interface \
    ports { weight_940_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2010 \
    name weight_941_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_941_V_read \
    op interface \
    ports { weight_941_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2011 \
    name weight_942_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_942_V_read \
    op interface \
    ports { weight_942_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2012 \
    name weight_943_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_943_V_read \
    op interface \
    ports { weight_943_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2013 \
    name weight_944_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_944_V_read \
    op interface \
    ports { weight_944_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2014 \
    name weight_945_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_945_V_read \
    op interface \
    ports { weight_945_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2015 \
    name weight_946_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_946_V_read \
    op interface \
    ports { weight_946_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2016 \
    name weight_947_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_947_V_read \
    op interface \
    ports { weight_947_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2017 \
    name weight_948_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_948_V_read \
    op interface \
    ports { weight_948_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2018 \
    name weight_949_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_949_V_read \
    op interface \
    ports { weight_949_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2019 \
    name weight_950_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_950_V_read \
    op interface \
    ports { weight_950_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2020 \
    name weight_951_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_951_V_read \
    op interface \
    ports { weight_951_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2021 \
    name weight_952_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_952_V_read \
    op interface \
    ports { weight_952_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2022 \
    name weight_953_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_953_V_read \
    op interface \
    ports { weight_953_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2023 \
    name weight_954_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_954_V_read \
    op interface \
    ports { weight_954_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2024 \
    name weight_955_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_955_V_read \
    op interface \
    ports { weight_955_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2025 \
    name weight_956_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_956_V_read \
    op interface \
    ports { weight_956_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2026 \
    name weight_957_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_957_V_read \
    op interface \
    ports { weight_957_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2027 \
    name weight_958_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_958_V_read \
    op interface \
    ports { weight_958_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2028 \
    name weight_959_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_959_V_read \
    op interface \
    ports { weight_959_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2029 \
    name weight_960_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_960_V_read \
    op interface \
    ports { weight_960_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2030 \
    name weight_961_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_961_V_read \
    op interface \
    ports { weight_961_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2031 \
    name weight_962_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_962_V_read \
    op interface \
    ports { weight_962_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2032 \
    name weight_963_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_963_V_read \
    op interface \
    ports { weight_963_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2033 \
    name weight_964_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_964_V_read \
    op interface \
    ports { weight_964_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2034 \
    name weight_965_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_965_V_read \
    op interface \
    ports { weight_965_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2035 \
    name weight_966_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_966_V_read \
    op interface \
    ports { weight_966_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2036 \
    name weight_967_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_967_V_read \
    op interface \
    ports { weight_967_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2037 \
    name weight_968_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_968_V_read \
    op interface \
    ports { weight_968_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2038 \
    name weight_969_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_969_V_read \
    op interface \
    ports { weight_969_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2039 \
    name weight_970_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_970_V_read \
    op interface \
    ports { weight_970_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2040 \
    name weight_971_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_971_V_read \
    op interface \
    ports { weight_971_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2041 \
    name weight_972_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_972_V_read \
    op interface \
    ports { weight_972_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2042 \
    name weight_973_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_973_V_read \
    op interface \
    ports { weight_973_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2043 \
    name weight_974_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_974_V_read \
    op interface \
    ports { weight_974_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2044 \
    name weight_975_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_975_V_read \
    op interface \
    ports { weight_975_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2045 \
    name weight_976_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_976_V_read \
    op interface \
    ports { weight_976_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2046 \
    name weight_977_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_977_V_read \
    op interface \
    ports { weight_977_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2047 \
    name weight_978_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_978_V_read \
    op interface \
    ports { weight_978_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2048 \
    name weight_979_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_979_V_read \
    op interface \
    ports { weight_979_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2049 \
    name weight_980_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_980_V_read \
    op interface \
    ports { weight_980_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2050 \
    name weight_981_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_981_V_read \
    op interface \
    ports { weight_981_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2051 \
    name weight_982_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_982_V_read \
    op interface \
    ports { weight_982_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2052 \
    name weight_983_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_983_V_read \
    op interface \
    ports { weight_983_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2053 \
    name weight_984_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_984_V_read \
    op interface \
    ports { weight_984_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2054 \
    name weight_985_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_985_V_read \
    op interface \
    ports { weight_985_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2055 \
    name weight_986_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_986_V_read \
    op interface \
    ports { weight_986_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2056 \
    name weight_987_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_987_V_read \
    op interface \
    ports { weight_987_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2057 \
    name weight_988_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_988_V_read \
    op interface \
    ports { weight_988_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2058 \
    name weight_989_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_989_V_read \
    op interface \
    ports { weight_989_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2059 \
    name weight_990_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_990_V_read \
    op interface \
    ports { weight_990_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2060 \
    name weight_991_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_991_V_read \
    op interface \
    ports { weight_991_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2061 \
    name weight_992_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_992_V_read \
    op interface \
    ports { weight_992_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2062 \
    name weight_993_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_993_V_read \
    op interface \
    ports { weight_993_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2063 \
    name weight_994_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_994_V_read \
    op interface \
    ports { weight_994_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2064 \
    name weight_995_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_995_V_read \
    op interface \
    ports { weight_995_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2065 \
    name weight_996_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_996_V_read \
    op interface \
    ports { weight_996_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2066 \
    name weight_997_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_997_V_read \
    op interface \
    ports { weight_997_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2067 \
    name weight_998_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_998_V_read \
    op interface \
    ports { weight_998_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2068 \
    name weight_999_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_999_V_read \
    op interface \
    ports { weight_999_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2069 \
    name weight_1000_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1000_V_read \
    op interface \
    ports { weight_1000_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2070 \
    name weight_1001_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1001_V_read \
    op interface \
    ports { weight_1001_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2071 \
    name weight_1002_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1002_V_read \
    op interface \
    ports { weight_1002_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2072 \
    name weight_1003_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1003_V_read \
    op interface \
    ports { weight_1003_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2073 \
    name weight_1004_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1004_V_read \
    op interface \
    ports { weight_1004_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2074 \
    name weight_1005_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1005_V_read \
    op interface \
    ports { weight_1005_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2075 \
    name weight_1006_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1006_V_read \
    op interface \
    ports { weight_1006_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2076 \
    name weight_1007_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1007_V_read \
    op interface \
    ports { weight_1007_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2077 \
    name weight_1008_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1008_V_read \
    op interface \
    ports { weight_1008_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2078 \
    name weight_1009_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1009_V_read \
    op interface \
    ports { weight_1009_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2079 \
    name weight_1010_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1010_V_read \
    op interface \
    ports { weight_1010_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2080 \
    name weight_1011_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1011_V_read \
    op interface \
    ports { weight_1011_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2081 \
    name weight_1012_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1012_V_read \
    op interface \
    ports { weight_1012_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2082 \
    name weight_1013_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1013_V_read \
    op interface \
    ports { weight_1013_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2083 \
    name weight_1014_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1014_V_read \
    op interface \
    ports { weight_1014_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2084 \
    name weight_1015_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1015_V_read \
    op interface \
    ports { weight_1015_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2085 \
    name weight_1016_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1016_V_read \
    op interface \
    ports { weight_1016_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2086 \
    name weight_1017_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1017_V_read \
    op interface \
    ports { weight_1017_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2087 \
    name weight_1018_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1018_V_read \
    op interface \
    ports { weight_1018_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2088 \
    name weight_1019_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1019_V_read \
    op interface \
    ports { weight_1019_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2089 \
    name weight_1020_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1020_V_read \
    op interface \
    ports { weight_1020_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2090 \
    name weight_1021_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1021_V_read \
    op interface \
    ports { weight_1021_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2091 \
    name weight_1022_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1022_V_read \
    op interface \
    ports { weight_1022_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2092 \
    name weight_1023_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_1023_V_read \
    op interface \
    ports { weight_1023_V_read { I 27 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2095 \
    name OSIZE \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_OSIZE \
    op interface \
    ports { OSIZE_dout { I 4 vector } OSIZE_empty_n { I 1 bit } OSIZE_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2096 \
    name TO_r \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TO_r \
    op interface \
    ports { TO_r_dout { I 6 vector } TO_r_empty_n { I 1 bit } TO_r_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2097 \
    name TI \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TI \
    op interface \
    ports { TI_dout { I 6 vector } TI_empty_n { I 1 bit } TI_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2098 \
    name S \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_S \
    op interface \
    ports { S_dout { I 2 vector } S_empty_n { I 1 bit } S_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2099 \
    name P \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_P \
    op interface \
    ports { P_dout { I 1 vector } P_empty_n { I 1 bit } P_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2100 \
    name l_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_l_0 \
    op interface \
    ports { l_0_dout { I 14 vector } l_0_empty_n { I 1 bit } l_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2101 \
    name K \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_K \
    op interface \
    ports { K_dout { I 2 vector } K_empty_n { I 1 bit } K_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


