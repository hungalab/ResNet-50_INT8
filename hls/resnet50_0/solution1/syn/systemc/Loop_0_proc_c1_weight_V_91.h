// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_91_H__
#define __Loop_0_proc_c1_weight_V_91_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_91_ram : public sc_core::sc_module {

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


   SC_CTOR(Loop_0_proc_c1_weight_V_91_ram) {
        ram[0] = "0b11111110";
        ram[1] = "0b11111101";
        ram[2] = "0b11110010";
        ram[3] = "0b11101111";
        ram[4] = "0b11111101";
        ram[5] = "0b00001110";
        ram[6] = "0b00010111";
        ram[7] = "0b00000111";
        ram[8] = "0b00001000";
        ram[9] = "0b11110100";
        ram[10] = "0b11011000";
        ram[11] = "0b11001010";
        ram[12] = "0b11011010";
        ram[13] = "0b11110101";
        ram[14] = "0b00000101";
        ram[15] = "0b00001101";
        ram[16] = "0b00000110";
        ram[17] = "0b11101001";
        ram[18] = "0b10111111";
        ram[19] = "0b10101100";
        ram[20] = "0b11000010";
        ram[21] = "0b00000101";
        ram[22] = "0b00010111";
        ram[23] = "0b00100010";
        ram[24] = "0b00100110";
        ram[25] = "0b00001111";
        ram[26] = "0b11110010";
        ram[27] = "0b11011010";
        ram[28] = "0b00000000";
        ram[29] = "0b00011101";
        ram[30] = "0b00101111";
        ram[31] = "0b00110110";
        ram[32] = "0b00110010";
        ram[33] = "0b00101001";
        ram[34] = "0b00001000";
        ram[35] = "0b11101110";
        ram[36] = "0b00000010";
        ram[37] = "0b00010100";
        ram[38] = "0b00101010";
        ram[39] = "0b00101000";
        ram[40] = "0b00010111";
        ram[41] = "0b00000110";
        ram[42] = "0b11101010";
        ram[43] = "0b11100101";
        ram[44] = "0b11100111";
        ram[45] = "0b11111001";
        ram[46] = "0b00001010";
        ram[47] = "0b00010011";
        ram[48] = "0b00000110";


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


SC_MODULE(Loop_0_proc_c1_weight_V_91) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_91_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_91) {
meminst = new Loop_0_proc_c1_weight_V_91_ram("Loop_0_proc_c1_weight_V_91_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_91() {
    delete meminst;
}


};//endmodule
#endif
