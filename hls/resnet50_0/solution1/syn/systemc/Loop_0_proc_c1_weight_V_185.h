// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_185_H__
#define __Loop_0_proc_c1_weight_V_185_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_185_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
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


   SC_CTOR(Loop_0_proc_c1_weight_V_185_ram) {
        ram[0] = "0b0000000";
        ram[1] = "0b0000101";
        ram[2] = "0b0000011";
        ram[3] = "0b1110100";
        ram[4] = "0b1110111";
        ram[5] = "0b0000010";
        ram[6] = "0b0000011";
        ram[7] = "0b1111010";
        ram[8] = "0b0010001";
        ram[9] = "0b0001111";
        ram[10] = "0b1100100";
        ram[11] = "0b1110100";
        ram[12] = "0b0010001";
        ram[13] = "0b0000011";
        ram[14] = "0b1110110";
        ram[15] = "0b0011100";
        ram[16] = "0b0010010";
        ram[17] = "0b1001011";
        ram[18] = "0b1110000";
        ram[19] = "0b0011110";
        ram[20] = "0b1111111";
        ram[21] = "0b1111001";
        ram[22] = "0b0100011";
        ram[23] = "0b0000001";
        ram[24] = "0b1000001";
        ram[25] = "0b0000000";
        ram[26] = "0b0100111";
        ram[27] = "0b1111110";
        ram[28] = "0b1111111";
        ram[29] = "0b0011011";
        ram[30] = "0b1110101";
        ram[31] = "0b1010011";
        ram[32] = "0b0001001";
        ram[33] = "0b0011100";
        ram[34] = "0b1111010";
        ram[35] = "0b1111111";
        ram[36] = "0b0001111";
        ram[37] = "0b1110101";
        ram[38] = "0b1101100";
        ram[39] = "0b0001001";
        ram[40] = "0b0001111";
        ram[41] = "0b1110110";
        ram[42] = "0b0000001";
        ram[43] = "0b0000111";
        ram[44] = "0b1110110";
        ram[45] = "0b1111011";
        ram[46] = "0b0001010";
        ram[47] = "0b0000111";
        ram[48] = "0b1111001";


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


SC_MODULE(Loop_0_proc_c1_weight_V_185) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_185_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_185) {
meminst = new Loop_0_proc_c1_weight_V_185_ram("Loop_0_proc_c1_weight_V_185_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_185() {
    delete meminst;
}


};//endmodule
#endif
