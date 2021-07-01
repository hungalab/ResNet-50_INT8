# This script segment is generated automatically by AutoPilot

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
    id 1 \
    name bias \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename bias \
    op interface \
    ports { bias_address0 { O 5 vector } bias_ce0 { O 1 bit } bias_we0 { O 1 bit } bias_d0 { O 2048 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name scale \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename scale \
    op interface \
    ports { scale_address0 { O 5 vector } scale_ce0 { O 1 bit } scale_we0 { O 1 bit } scale_d0 { O 2048 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'scale'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
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
    id 4 \
    name TO_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TO_r \
    op interface \
    ports { TO_r { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_offset \
    op interface \
    ports { offset { I 21 vector } } \
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


