// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_0_proc_c1_weight_V_107_H__
#define __Loop_0_proc_c1_weight_V_107_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_0_proc_c1_weight_V_107_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
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


   SC_CTOR(Loop_0_proc_c1_weight_V_107_ram) {
        ram[0] = "0b000000";
        ram[1] = "0b000010";
        ram[2] = "0b000111";
        ram[3] = "0b000011";
        ram[4] = "0b000110";
        ram[5] = "0b000100";
        ram[6] = "0b000100";
        ram[7] = "0b000001";
        ram[8] = "0b111111";
        ram[9] = "0b000010";
        ram[10] = "0b111011";
        ram[11] = "0b111111";
        ram[12] = "0b111110";
        ram[13] = "0b111111";
        ram[14] = "0b111110";
        ram[15] = "0b000011";
        ram[16] = "0b001100";
        ram[17] = "0b111111";
        ram[18] = "0b000101";
        ram[19] = "0b111111";
        ram[20] = "0b000001";
        ram[21] = "0b111100";
        ram[22] = "0b111010";
        ram[23] = "0b111100";
        ram[24] = "0b110001";
        ram[25] = "0b101100";
        ram[26] = "0b101011";
        ram[27] = "0b101110";
        ram[28] = "0b000001";
        ram[29] = "0b111110";
        ram[30] = "0b000100";
        ram[31] = "0b110001";
        ram[32] = "0b101000";
        ram[33] = "0b101111";
        ram[34] = "0b110111";
        ram[35] = "0b000100";
        ram[36] = "0b000011";
        ram[37] = "0b000101";
        ram[38] = "0b110010";
        ram[39] = "0b110001";
        ram[40] = "0b101110";
        ram[41] = "0b111010";
        ram[42] = "0b000100";
        ram[43] = "0b000000";
        ram[44] = "0b000001";
        ram[45] = "0b101101";
        ram[46] = "0b110001";
        ram[47] = "0b110011";
        ram[48] = "0b111001";


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


SC_MODULE(Loop_0_proc_c1_weight_V_107) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 49;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_0_proc_c1_weight_V_107_ram* meminst;


SC_CTOR(Loop_0_proc_c1_weight_V_107) {
meminst = new Loop_0_proc_c1_weight_V_107_ram("Loop_0_proc_c1_weight_V_107_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_0_proc_c1_weight_V_107() {
    delete meminst;
}


};//endmodule
#endif
