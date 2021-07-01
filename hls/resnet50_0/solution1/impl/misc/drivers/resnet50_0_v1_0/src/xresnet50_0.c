// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xresnet50_0.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XResnet50_0_CfgInitialize(XResnet50_0 *InstancePtr, XResnet50_0_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XResnet50_0_Start(XResnet50_0 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL) & 0x80;
    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XResnet50_0_IsDone(XResnet50_0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XResnet50_0_IsIdle(XResnet50_0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XResnet50_0_IsReady(XResnet50_0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XResnet50_0_EnableAutoRestart(XResnet50_0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XResnet50_0_DisableAutoRestart(XResnet50_0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_AP_CTRL, 0);
}

void XResnet50_0_InterruptGlobalEnable(XResnet50_0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_GIE, 1);
}

void XResnet50_0_InterruptGlobalDisable(XResnet50_0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_GIE, 0);
}

void XResnet50_0_InterruptEnable(XResnet50_0 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_IER);
    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_IER, Register | Mask);
}

void XResnet50_0_InterruptDisable(XResnet50_0 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_IER);
    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_IER, Register & (~Mask));
}

void XResnet50_0_InterruptClear(XResnet50_0 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XResnet50_0_WriteReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_ISR, Mask);
}

u32 XResnet50_0_InterruptGetEnabled(XResnet50_0 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_IER);
}

u32 XResnet50_0_InterruptGetStatus(XResnet50_0 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XResnet50_0_ReadReg(InstancePtr->Axilites_BaseAddress, XRESNET50_0_AXILITES_ADDR_ISR);
}

