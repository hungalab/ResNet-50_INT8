// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XRESNET50_3_H
#define XRESNET50_3_H

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
#include "xresnet50_3_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XResnet50_3_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XResnet50_3;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XResnet50_3_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XResnet50_3_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XResnet50_3_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XResnet50_3_ReadReg(BaseAddress, RegOffset) \
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
int XResnet50_3_Initialize(XResnet50_3 *InstancePtr, u16 DeviceId);
XResnet50_3_Config* XResnet50_3_LookupConfig(u16 DeviceId);
int XResnet50_3_CfgInitialize(XResnet50_3 *InstancePtr, XResnet50_3_Config *ConfigPtr);
#else
int XResnet50_3_Initialize(XResnet50_3 *InstancePtr, const char* InstanceName);
int XResnet50_3_Release(XResnet50_3 *InstancePtr);
#endif

void XResnet50_3_Start(XResnet50_3 *InstancePtr);
u32 XResnet50_3_IsDone(XResnet50_3 *InstancePtr);
u32 XResnet50_3_IsIdle(XResnet50_3 *InstancePtr);
u32 XResnet50_3_IsReady(XResnet50_3 *InstancePtr);
void XResnet50_3_EnableAutoRestart(XResnet50_3 *InstancePtr);
void XResnet50_3_DisableAutoRestart(XResnet50_3 *InstancePtr);

u32 XResnet50_3_Get_output_r_BaseAddress(XResnet50_3 *InstancePtr);
u32 XResnet50_3_Get_output_r_HighAddress(XResnet50_3 *InstancePtr);
u32 XResnet50_3_Get_output_r_TotalBytes(XResnet50_3 *InstancePtr);
u32 XResnet50_3_Get_output_r_BitWidth(XResnet50_3 *InstancePtr);
u32 XResnet50_3_Get_output_r_Depth(XResnet50_3 *InstancePtr);
u32 XResnet50_3_Write_output_r_Words(XResnet50_3 *InstancePtr, int offset, int *data, int length);
u32 XResnet50_3_Read_output_r_Words(XResnet50_3 *InstancePtr, int offset, int *data, int length);
u32 XResnet50_3_Write_output_r_Bytes(XResnet50_3 *InstancePtr, int offset, char *data, int length);
u32 XResnet50_3_Read_output_r_Bytes(XResnet50_3 *InstancePtr, int offset, char *data, int length);

void XResnet50_3_InterruptGlobalEnable(XResnet50_3 *InstancePtr);
void XResnet50_3_InterruptGlobalDisable(XResnet50_3 *InstancePtr);
void XResnet50_3_InterruptEnable(XResnet50_3 *InstancePtr, u32 Mask);
void XResnet50_3_InterruptDisable(XResnet50_3 *InstancePtr, u32 Mask);
void XResnet50_3_InterruptClear(XResnet50_3 *InstancePtr, u32 Mask);
u32 XResnet50_3_InterruptGetEnabled(XResnet50_3 *InstancePtr);
u32 XResnet50_3_InterruptGetStatus(XResnet50_3 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
