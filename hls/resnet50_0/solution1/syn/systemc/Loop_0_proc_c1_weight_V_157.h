// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_157_H__
#define __Loop_0_proc_c1_weight_V_157_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_157_ram : public sc_core::sc_module {

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


   SC_CTOR(Loop_0_proc_c1_weight_V_157_ram) {
        ram[0] = "0b00000110";
        ram[1] = "0b11111111";
        ram[2] = "0b11111011";
        ram[3] = "0b00000001";
        ram[4] = "0b00000000";
        ram[5] = "0b11111111";
        ram[6] = "0b11111111";
        ram[7] = "0b00001011";
        ram[8] = "0b00001100";
        ram[9] = "0b00000000";
        ram[10] = "0b11111110";
        ram[11] = "0b11100110";
        ram[12] = "0b11111010";
        ram[13] = "0b00001111";
        ram[14] = "0b00000011";
        ram[15] = "0b00000110";
        ram[16] = "0b11111011";
        ram[17] = "0b11000010";
        ram[18] = "0b10000000";
        ram[19] = "0b10101000";
        ram[20] = "0b00000110";
        ram[21] = "0b00000110";
        ram[22] = "0b00000001";
        ram[23] = "0b00000001";
        ram[24] = "0b10111111";
        ram[25] = "0b10000010";
        ram[26] = "0b10011100";
        ram[27] = "0b11111110";
        ram[28] = "0b00000100";
        ram[29] = "0b11111010";
        ram[30] = "0b00001011";
        ram[31] = "0b00000010";
        ram[32] = "0b11100100";
        ram[33] = "0b11101110";
        ram[34] = "0b00010000";
        ram[35] = "0b00000101";
        ram[36] = "0b11111101";
        ram[37] = "0b00000001";
        ram[38] = "0b00001110";
        ram[39] = "0b00001111";
        ram[40] = "0b00010000";
        ram[41] = "0b00001010";
        ram[42] = "0b00000111";
        ram[43] = "0b00000000";
        ram[44] = "0b11111101";
        ram[45] = "0b00000010";
        ram[46] = "0b00000101";
        ram[47] = "0b00001000";
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


SC_MODULE(Loop_0_proc_c1_weight_V_157) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_157_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_157) {
meminst = new Loop_0_proc_c1_weight_V_157_ram("Loop_0_proc_c1_weight_V_157_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_157() {
    delete meminst;
}


};//endmodule
#endif
