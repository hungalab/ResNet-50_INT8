// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x0000 : Control signals
//          bit 0  - ap_start (Read/Write/COH)
//          bit 1  - ap_done (Read/COR)
//          bit 2  - ap_idle (Read)
//          bit 3  - ap_ready (Read)
//          bit 7  - auto_restart (Read/Write)
//          others - reserved
// 0x0004 : Global Interrupt Enable Register
//          bit 0  - Global Interrupt Enable (Read/Write)
//          others - reserved
// 0x0008 : IP Interrupt Enable Register (Read/Write)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x000c : IP Interrupt Status Register (Read/TOW)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x1000 ~
// 0x1fff : Memory 'output_r' (1000 * 32b)
//          Word n : bit [31:0] - output_r[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XRESNET50_3_AXILITES_ADDR_AP_CTRL       0x0000
#define XRESNET50_3_AXILITES_ADDR_GIE           0x0004
#define XRESNET50_3_AXILITES_ADDR_IER           0x0008
#define XRESNET50_3_AXILITES_ADDR_ISR           0x000c
#define XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE 0x1000
#define XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH 0x1fff
#define XRESNET50_3_AXILITES_WIDTH_OUTPUT_R     32
#define XRESNET50_3_AXILITES_DEPTH_OUTPUT_R     1000

