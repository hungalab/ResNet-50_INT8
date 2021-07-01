// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xresnet50_2.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XResnet50_2_CfgInitialize(XResnet50_2 *InstancePtr, XResnet50_2_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XResnet50_2_Start(XResnet50_2 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL) & 0x80;
    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XResnet50_2_IsDone(XResnet50_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XResnet50_2_IsIdle(XResnet50_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XResnet50_2_IsReady(XResnet50_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XResnet50_2_EnableAutoRestart(XResnet50_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XResnet50_2_DisableAutoRestart(XResnet50_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_AP_CTRL, 0);
}

void XResnet50_2_InterruptGlobalEnable(XResnet50_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_GIE, 1);
}

void XResnet50_2_InterruptGlobalDisable(XResnet50_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_GIE, 0);
}

void XResnet50_2_InterruptEnable(XResnet50_2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_IER);
    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_IER, Register | Mask);
}

void XResnet50_2_InterruptDisable(XResnet50_2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_IER);
    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_IER, Register & (~Mask));
}

void XResnet50_2_InterruptClear(XResnet50_2 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_2_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_ISR, Mask);
}

u32 XResnet50_2_InterruptGetEnabled(XResnet50_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_IER);
}

u32 XResnet50_2_InterruptGetStatus(XResnet50_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_2_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_2_AXILITES_ADDR_ISR);
}

