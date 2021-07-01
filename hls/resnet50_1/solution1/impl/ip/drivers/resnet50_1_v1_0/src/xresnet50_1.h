// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XRESNET50_1_H
#define XRESNET50_1_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xresnet50_1_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XResnet50_1_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XResnet50_1;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XResnet50_1_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XResnet50_1_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XResnet50_1_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XResnet50_1_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XResnet50_1_Initialize(XResnet50_1 *InstancePtr, u16 DeviceId);
XResnet50_1_Config* XResnet50_1_LookupConfig(u16 DeviceId);
int XResnet50_1_CfgInitialize(XResnet50_1 *InstancePtr, XResnet50_1_Config *ConfigPtr);
#else
int XResnet50_1_Initialize(XResnet50_1 *InstancePtr, const char* InstanceName);
int XResnet50_1_Release(XResnet50_1 *InstancePtr);
#endif

void XResnet50_1_Start(XResnet50_1 *InstancePtr);
u32 XResnet50_1_IsDone(XResnet50_1 *InstancePtr);
u32 XResnet50_1_IsIdle(XResnet50_1 *InstancePtr);
u32 XResnet50_1_IsReady(XResnet50_1 *InstancePtr);
void XResnet50_1_EnableAutoRestart(XResnet50_1 *InstancePtr);
void XResnet50_1_DisableAutoRestart(XResnet50_1 *InstancePtr);


void XResnet50_1_InterruptGlobalEnable(XResnet50_1 *InstancePtr);
void XResnet50_1_InterruptGlobalDisable(XResnet50_1 *InstancePtr);
void XResnet50_1_InterruptEnable(XResnet50_1 *InstancePtr, u32 Mask);
void XResnet50_1_InterruptDisable(XResnet50_1 *InstancePtr, u32 Mask);
void XResnet50_1_InterruptClear(XResnet50_1 *InstancePtr, u32 Mask);
u32 XResnet50_1_InterruptGetEnabled(XResnet50_1 *InstancePtr);
u32 XResnet50_1_InterruptGetStatus(XResnet50_1 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
