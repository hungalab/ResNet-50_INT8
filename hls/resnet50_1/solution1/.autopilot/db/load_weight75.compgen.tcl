# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
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
    id 7 \
    name l_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_l_0 \
    op interface \
    ports { l_0 { I 13 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name OFFSET \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_OFFSET \
    op interface \
    ports { OFFSET { I 22 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name OSIZE \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_OSIZE \
    op interface \
    ports { OSIZE { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name TO_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TO_r \
    op interface \
    ports { TO_r { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name TI \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_TI \
    op interface \
    ports { TI { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name S \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_S \
    op interface \
    ports { S { I 2 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
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
    id 14 \
    name K \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_K \
    op interface \
    ports { K { I 2 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name l_0_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_l_0_out \
    op interface \
    ports { l_0_out_din { O 13 vector } l_0_out_full_n { I 1 bit } l_0_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name OSIZE_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_OSIZE_out \
    op interface \
    ports { OSIZE_out_din { O 6 vector } OSIZE_out_full_n { I 1 bit } OSIZE_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name TO_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TO_out \
    op interface \
    ports { TO_out_din { O 5 vector } TO_out_full_n { I 1 bit } TO_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name TI_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TI_out \
    op interface \
    ports { TI_out_din { O 6 vector } TI_out_full_n { I 1 bit } TI_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name S_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_S_out \
    op interface \
    ports { S_out_din { O 2 vector } S_out_full_n { I 1 bit } S_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name P_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_P_out \
    op interface \
    ports { P_out_din { O 1 vector } P_out_full_n { I 1 bit } P_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name K_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_K_out \
    op interface \
    ports { K_out_din { O 2 vector } K_out_full_n { I 1 bit } K_out_write { O 1 bit } } \
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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


