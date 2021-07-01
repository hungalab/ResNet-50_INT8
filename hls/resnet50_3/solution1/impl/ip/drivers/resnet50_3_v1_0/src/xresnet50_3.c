// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xresnet50_3.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XResnet50_3_CfgInitialize(XResnet50_3 *InstancePtr, XResnet50_3_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XResnet50_3_Start(XResnet50_3 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL) & 0x80;
    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XResnet50_3_IsDone(XResnet50_3 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XResnet50_3_IsIdle(XResnet50_3 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XResnet50_3_IsReady(XResnet50_3 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XResnet50_3_EnableAutoRestart(XResnet50_3 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XResnet50_3_DisableAutoRestart(XResnet50_3 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XResnet50_3_Get_output_r_BaseAddress(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE);
}

u32 XResnet50_3_Get_output_r_HighAddress(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH);
}

u32 XResnet50_3_Get_output_r_TotalBytes(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH - XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + 1);
}

u32 XResnet50_3_Get_output_r_BitWidth(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XRESNET50_3_AXILITES_WIDTH_OUTPUT_R;
}

u32 XResnet50_3_Get_output_r_Depth(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XRESNET50_3_AXILITES_DEPTH_OUTPUT_R;
}

u32 XResnet50_3_Write_output_r_Words(XResnet50_3 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH - XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XResnet50_3_Read_output_r_Words(XResnet50_3 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH - XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + (offset + i)*4);
    }
    return length;
}

u32 XResnet50_3_Write_output_r_Bytes(XResnet50_3 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH - XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XResnet50_3_Read_output_r_Bytes(XResnet50_3 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XRESNET50_3_AXILITES_ADDR_OUTPUT_R_HIGH - XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XRESNET50_3_AXILITES_ADDR_OUTPUT_R_BASE + offset + i);
    }
    return length;
}

void XResnet50_3_InterruptGlobalEnable(XResnet50_3 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_GIE, 1);
}

void XResnet50_3_InterruptGlobalDisable(XResnet50_3 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_GIE, 0);
}

void XResnet50_3_InterruptEnable(XResnet50_3 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_IER);
    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_IER, Register | Mask);
}

void XResnet50_3_InterruptDisable(XResnet50_3 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_IER);
    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_IER, Register & (~Mask));
}

void XResnet50_3_InterruptClear(XResnet50_3 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_3_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_ISR, Mask);
}

u32 XResnet50_3_InterruptGetEnabled(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_IER);
}

u32 XResnet50_3_InterruptGetStatus(XResnet50_3 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_3_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_3_AXILITES_ADDR_ISR);
}

