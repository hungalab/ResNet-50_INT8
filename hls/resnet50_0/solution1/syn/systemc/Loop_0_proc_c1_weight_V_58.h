// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_58_H__
#define __Loop_0_proc_c1_weight_V_58_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_58_ram : public sc_core::sc_module {

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


   SC_CTOR(Loop_0_proc_c1_weight_V_58_ram) {
        ram[0] = "0b11101110";
        ram[1] = "0b11111010";
        ram[2] = "0b11110101";
        ram[3] = "0b00000011";
        ram[4] = "0b11111110";
        ram[5] = "0b11111101";
        ram[6] = "0b00000010";
        ram[7] = "0b11111001";
        ram[8] = "0b00001101";
        ram[9] = "0b00010000";
        ram[10] = "0b00100000";
        ram[11] = "0b00100001";
        ram[12] = "0b00011101";
        ram[13] = "0b00011010";
        ram[14] = "0b11111001";
        ram[15] = "0b00001100";
        ram[16] = "0b00011001";
        ram[17] = "0b00101111";
        ram[18] = "0b00111001";
        ram[19] = "0b00110100";
        ram[20] = "0b00101111";
        ram[21] = "0b00000001";
        ram[22] = "0b00011001";
        ram[23] = "0b00110000";
        ram[24] = "0b01011101";
        ram[25] = "0b01101000";
        ram[26] = "0b01011010";
        ram[27] = "0b01001101";
        ram[28] = "0b00000000";
        ram[29] = "0b00100000";
        ram[30] = "0b00110110";
        ram[31] = "0b01100101";
        ram[32] = "0b01110100";
        ram[33] = "0b01101101";
        ram[34] = "0b01010101";
        ram[35] = "0b11111101";
        ram[36] = "0b00011011";
        ram[37] = "0b00101111";
        ram[38] = "0b01011010";
        ram[39] = "0b01100101";
        ram[40] = "0b01100010";
        ram[41] = "0b01001100";
        ram[42] = "0b11111110";
        ram[43] = "0b00011000";
        ram[44] = "0b00100101";
        ram[45] = "0b01001000";
        ram[46] = "0b01010010";
        ram[47] = "0b01001010";
        ram[48] = "0b01000011";


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


SC_MODULE(Loop_0_proc_c1_weight_V_58) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_58_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_58) {
meminst = new Loop_0_proc_c1_weight_V_58_ram("Loop_0_proc_c1_weight_V_58_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_58() {
    delete meminst;
}


};//endmodule
#endif
