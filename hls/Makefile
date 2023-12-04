SHELL=/bin/bash
VIVADO_HLS_LIB=/home/cad/xilinx/Vivado-2019.1/Vivado/2019.1/include
VIVADO_HLS=/home/cad/xilinx/Vivado-2019.1/Vivado/2019.1/bin/vivado_hls

CFLAGS=-std=c++2a
EXEC_FILE=test

all: test0 test1 test2 test3

test0: resnet50_0.cpp tb_resnet50_0.cpp
	g++ $(CFLAGS) -I $(VIVADO_HLS_LIB) -D DEBUG -o $(EXEC_FILE) $^ 
	./$(EXEC_FILE)
test1: resnet50_1.cpp tb_resnet50_1.cpp
	g++ $(CFLAGS) -I $(VIVADO_HLS_LIB) -D DEBUG -o $(EXEC_FILE) $^ 
	./$(EXEC_FILE)
test2: resnet50_2.cpp tb_resnet50_2.cpp
	g++ $(CFLAGS) -I $(VIVADO_HLS_LIB) -D DEBUG -o $(EXEC_FILE) $^ 
	./$(EXEC_FILE)
test3: resnet50_3.cpp tb_resnet50_3.cpp
	g++ $(CFLAGS) -I $(VIVADO_HLS_LIB) -D DEBUG -o $(EXEC_FILE) $^ 
	./$(EXEC_FILE)

clean:
	rm -f *.o
	rm -f $(EXEC_FILE)
