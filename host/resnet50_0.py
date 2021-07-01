#! /usr/bin/python3.6
# -*- coding: utf-8 -*-

import time
import numpy as np
import subprocess
import struct
import sys
import pynq.lib.dma
import mcubecluster
from pynq import Overlay
from pynq import MMIO
from pynq import allocate
from hls import *
import random
import math


IMAGESIZE = 224 * 224 * 3

OFFSET_INPUT  = 0x100000
OFFSET_SIZE = 0x10
OFFSET_OUTPUT = 0x100

def float_to_int(n):
	return int.from_bytes(struct.pack('>f', n), 'big')

def read_params(fname, array, size):
	for line in open(fname).readlines():
		bdata=struct.pack('>f',float(line))
		idata = int.from_bytes(bdata,'big')
		array.append(idata)

# FPGA bit files: base and experimental version
BIT_FILE = "../overlays/resnet50_0.bit"

print("downloading {}".format(BIT_FILE))
ovl= Overlay(BIT_FILE)

print("ovl.ip_dict.keys() = ",ovl.ip_dict.keys())
# AXI-Lite register access
regs = ovl.ip_dict["axi32regs_0/S_AXI"]
base_addr = regs["phys_addr"]
addr_range = regs["addr_range"]
mmio_axi32 = MMIO(base_addr, addr_range)
mcubecluster.aurora_reset(mmio_axi32)

# DDR4 MMIO
ddr4 = ovl.ddr4_0.mmio
ddr4_array = ddr4.array    # numpy array of uint32
print("size = {} words".format(ddr4_array.size))

# AXI-Lite hls access
regs = ovl.ip_dict["resnet50_0_0"]
base_addr_snd = regs["phys_addr"]
addr_range_snd = regs["addr_range"]
print("snd:base_addr = 0x{:X}".format(base_addr_snd))
print("snd:addr_range = {}".format(addr_range_snd))
mmio_hls = MMIO(base_addr_snd, addr_range_snd)

n = mmio_axi32.read(OFFSET_ID_VERSION)
print("ID_VERSION = 0x{:X}".format(n))
bid = mmio_axi32.read(OFFSET_STATUS)
print("Board ID = 0x{:X}".format(bid))
mmio_axi32.write(OFFSET_LED,0x80|bid)

time.sleep(1)

mmio_axi32.write(OFFSET_EXT_ADDR,0xfff8)
mmio_axi32.write(OFFSET_EXT_DATA,0x2)
mcubecluster.settbl(mmio_axi32)

# set ddr data
ddr = np.loadtxt('../params/ddr0.txt', dtype='uint32')
ddr4_array[0: len(ddr)] = ddr
print('DDRSIZE: ' + str(len(ddr)*2))


# DMA 

dma = ovl.axi_dma_0
tx_buffer2 = allocate(shape=(IMAGESIZE,), dtype=np.uint32)
tx_buffer2[:] = range(IMAGESIZE)


while 1 :
    print("================Board ID = 0x{:X}=============".format(bid))
    mcubecluster.moninf(mmio_axi32)
    mcubecluster.monpktc(0,mmio_axi32)
    print('\nMODE   1times:0  1000times:1  quit:else')
    mode = int(input())

    if mode == 0:
        image = []
        imagenum = int(input('Select Image Num: '))
        filename = '../../Imagenet_txt/1000/' + str(imagenum) + '.txt'             #INPUT
        #read_params(filename, image, IMAGESIZE)
        #tx_buffer2[0 : IMAGESIZE] = image

        image = np.loadtxt(filename, dtype='float32')
        f = np.vectorize(float_to_int)
        image = f(image)
        image = image.reshape((224, 224, 3))
        image = image.transpose(2, 0, 1)
        tx_buffer2[0 : IMAGESIZE] = np.ravel(image)

        mmio_hls.write(OFFSET_SIZE, IMAGESIZE)   
        mmio_hls.write(HLS_CNTRL, 1)

        start = time.perf_counter()
        dma.sendchannel.transfer(tx_buffer2)
        dma.sendchannel.wait()
        
        while 1:
            status = mmio_hls.read(HLS_CNTRL)
            if((status&0x2) == 0x2)	: break
        end = time.perf_counter()
        print('EXECUTION TIME: ' + str(end-start) + ' (sec)')

    elif mode == 1:
        totaltime = 0
        for index in range(1000):
            image = []
            filename = '../../Imagenet_txt/1000/' + str(index) + '.txt'
            read_params(filename, image, IMAGESIZE)
            tx_buffer2[0 : IMAGESIZE] = image

            start = time.perf_counter()
            mmio_hls.write(OFFSET_SIZE, IMAGESIZE)
            mmio_hls.write(HLS_CNTRL, 1)

            dma.sendchannel.transfer(tx_buffer2)
            dma.sendchannel.wait()

            while 1:
                status = mmio_hls.read(HLS_CNTRL)
                if((status&0x2) == 0x2)	: break
            end = time.perf_counter()
            totaltime += end - start
        print('execution time(average): ' + str(totaltime/1000) + ' (sec)')

    elif mode == 2:
        filename = '../../Imagenet_txt/1000/0.txt'
        image1 = np.loadtxt(filename, dtype='float32')
        f = np.vectorize(float_to_int)
        image1 = f(image1)
        image1 = image1.reshape((224, 224, 3))
        image1 = np.ravel(image1.transpose(2, 0, 1))

        filename = '../../Imagenet_txt/1000/1.txt'
        image2 = np.loadtxt(filename, dtype='float32')
        f = np.vectorize(float_to_int)
        image2 = f(image2)
        image2 = image2.reshape((224, 224, 3))
        image2 = np.ravel(image2.transpose(2, 0, 1))

        count = 0
        while True:
            start = time.perf_counter()

            if count % 2 == 0:
                tx_buffer2[0 : IMAGESIZE] = image1
            else:
                tx_buffer2[0 : IMAGESIZE] = image2

            mmio_hls.write(OFFSET_SIZE, IMAGESIZE)   
            mmio_hls.write(HLS_CNTRL, 1)
            dma.sendchannel.transfer(tx_buffer2)
            dma.sendchannel.wait()

            while True:
                if time.perf_counter() - start >= 0.0143:
                    count += 1
                    break

    else:
        mcubecluster.moninf(mmio_axi32)
        mcubecluster.monpktc(0,mmio_axi32)
        break
        