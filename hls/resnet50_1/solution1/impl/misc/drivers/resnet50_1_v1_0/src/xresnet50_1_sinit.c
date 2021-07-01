// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xresnet50_1.h"

extern XResnet50_1_Config XResnet50_1_ConfigTable[];

XResnet50_1_Config *XResnet50_1_LookupConfig(u16 DeviceId) {
	XResnet50_1_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XRESNET50_1_NUM_INSTANCES; Index++) {
		if (XResnet50_1_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XResnet50_1_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XResnet50_1_Initialize(XResnet50_1 *InstancePtr, u16 DeviceId) {
	XResnet50_1_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XResnet50_1_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XResnet50_1_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

