// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_106_H__
#define __Loop_0_proc_c1_weight_V_106_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_106_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 49;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(Loop_0_proc_c1_weight_V_106_ram) {
        ram[0] = "0b00000110";
        ram[1] = "0b00000001";
        ram[2] = "0b00000011";
        ram[3] = "0b11110111";
        ram[4] = "0b11111011";
        ram[5] = "0b11111101";
        ram[6] = "0b11111100";
        ram[7] = "0b00000001";
        ram[8] = "0b11110110";
        ram[9] = "0b11110110";
        ram[10] = "0b11100111";
        ram[11] = "0b11100110";
        ram[12] = "0b11101011";
        ram[13] = "0b11101011";
        ram[14] = "0b11111111";
        ram[15] = "0b11111000";
        ram[16] = "0b11101111";
        ram[17] = "0b11010101";
        ram[18] = "0b11010001";
        ram[19] = "0b11010011";
        ram[20] = "0b11011011";
        ram[21] = "0b11111011";
        ram[22] = "0b11101000";
        ram[23] = "0b11010111";
        ram[24] = "0b10110010";
        ram[25] = "0b10100011";
        ram[26] = "0b10101101";
        ram[27] = "0b10111011";
        ram[28] = "0b00000000";
        ram[29] = "0b11101010";
        ram[30] = "0b11010110";
        ram[31] = "0b10101001";
        ram[32] = "0b10010100";
        ram[33] = "0b10100100";
        ram[34] = "0b10111000";
        ram[35] = "0b00000010";
        ram[36] = "0b11110001";
        ram[37] = "0b11011001";
        ram[38] = "0b10110010";
        ram[39] = "0b10101001";
        ram[40] = "0b10101110";
        ram[41] = "0b10111101";
        ram[42] = "0b00000011";
        ram[43] = "0b11101110";
        ram[44] = "0b11100010";
        ram[45] = "0b11000001";
        ram[46] = "0b10111001";
        ram[47] = "0b11000000";
        ram[48] = "0b11000011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(Loop_0_proc_c1_weight_V_106) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_106_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_106) {
meminst = new Loop_0_proc_c1_weight_V_106_ram("Loop_0_proc_c1_weight_V_106_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_106() {
    delete meminst;
}


};//endmodule
#endif
