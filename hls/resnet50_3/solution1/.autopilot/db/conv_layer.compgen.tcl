# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 3279
set hasByteEnable 0
set MemName conv_layer_bias
set CoreName ap_simcore_mem
set PortList { 2 }
set DataWd 2048
set AddrRange 32
set AddrWd 5
set impl_style ultra
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM_1P_URAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 3280
set hasByteEnable 0
set MemName conv_layer_scale
set CoreName ap_simcore_mem
set PortList { 2 }
set DataWd 2048
set AddrRange 32
set AddrWd 5
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM_1P_BRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
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
    id 3281 \
    name input_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_V \
    op interface \
    ports { input_V_address0 { O 12 vector } input_V_ce0 { O 1 bit } input_V_q0 { I 288 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3282 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address1 { O 12 vector } output_V_ce1 { O 1 bit } output_V_we1 { O 1 bit } output_V_d1 { O 288 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3283 \
    name outbuf_V_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename outbuf_V_4 \
    op interface \
    ports { outbuf_V_4_address0 { O 11 vector } outbuf_V_4_ce0 { O 1 bit } outbuf_V_4_q0 { I 1536 vector } outbuf_V_4_address1 { O 11 vector } outbuf_V_4_ce1 { O 1 bit } outbuf_V_4_we1 { O 1 bit } outbuf_V_4_d1 { O 1536 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outbuf_V_4'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3284 \
    name ddr_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ddr_V \
    op interface \
    ports { m_axi_ddr_V_AWVALID { O 1 bit } m_axi_ddr_V_AWREADY { I 1 bit } m_axi_ddr_V_AWADDR { O 32 vector } m_axi_ddr_V_AWID { O 1 vector } m_axi_ddr_V_AWLEN { O 32 vector } m_axi_ddr_V_AWSIZE { O 3 vector } m_axi_ddr_V_AWBURST { O 2 vector } m_axi_ddr_V_AWLOCK { O 2 vector } m_axi_ddr_V_AWCACHE { O 4 vector } m_axi_ddr_V_AWPROT { O 3 vector } m_axi_ddr_V_AWQOS { O 4 vector } m_axi_ddr_V_AWREGION { O 4 vector } m_axi_ddr_V_AWUSER { O 1 vector } m_axi_ddr_V_WVALID { O 1 bit } m_axi_ddr_V_WREADY { I 1 bit } m_axi_ddr_V_WDATA { O 128 vector } m_axi_ddr_V_WSTRB { O 16 vector } m_axi_ddr_V_WLAST { O 1 bit } m_axi_ddr_V_WID { O 1 vector } m_axi_ddr_V_WUSER { O 1 vector } m_axi_ddr_V_ARVALID { O 1 bit } m_axi_ddr_V_ARREADY { I 1 bit } m_axi_ddr_V_ARADDR { O 32 vector } m_axi_ddr_V_ARID { O 1 vector } m_axi_ddr_V_ARLEN { O 32 vector } m_axi_ddr_V_ARSIZE { O 3 vector } m_axi_ddr_V_ARBURST { O 2 vector } m_axi_ddr_V_ARLOCK { O 2 vector } m_axi_ddr_V_ARCACHE { O 4 vector } m_axi_ddr_V_ARPROT { O 3 vector } m_axi_ddr_V_ARQOS { O 4 vector } m_axi_ddr_V_ARREGION { O 4 vector } m_axi_ddr_V_ARUSER { O 1 vector } m_axi_ddr_V_RVALID { I 1 bit } m_axi_ddr_V_RREADY { O 1 bit } m_axi_ddr_V_RDATA { I 128 vector } m_axi_ddr_V_RLAST { I 1 bit } m_axi_ddr_V_RID { I 1 vector } m_axi_ddr_V_RUSER { I 1 vector } m_axi_ddr_V_RRESP { I 2 vector } m_axi_ddr_V_BVALID { I 1 bit } m_axi_ddr_V_BREADY { O 1 bit } m_axi_ddr_V_BRESP { I 2 vector } m_axi_ddr_V_BID { I 1 vector } m_axi_ddr_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3285 \
    name TO_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TO_r \
    op interface \
    ports { TO_r { I 7 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3286 \
    name TI \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TI \
    op interface \
    ports { TI { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3287 \
    name K \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_K \
    op interface \
    ports { K { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3288 \
    name P \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_P \
    op interface \
    ports { P { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3289 \
    name OFFSET \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_OFFSET \
    op interface \
    ports { OFFSET { I 24 vector } } \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
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


