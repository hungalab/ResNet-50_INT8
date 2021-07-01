// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xresnet50_0.h"

extern XResnet50_0_Config XResnet50_0_ConfigTable[];

XResnet50_0_Config *XResnet50_0_LookupConfig(u16 DeviceId) {
	XResnet50_0_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XRESNET50_0_NUM_INSTANCES; Index++) {
		if (XResnet50_0_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XResnet50_0_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XResnet50_0_Initialize(XResnet50_0 *InstancePtr, u16 DeviceId) {
	XResnet50_0_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XResnet50_0_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XResnet50_0_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

