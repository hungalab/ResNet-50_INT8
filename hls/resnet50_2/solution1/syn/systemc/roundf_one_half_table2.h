// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __roundf_one_half_table2_H__
#define __roundf_one_half_table2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct roundf_one_half_table2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 24;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(roundf_one_half_table2_ram) {
        ram[0] = "0b001000000000000000000000";
        ram[1] = "0b000100000000000000000000";
        ram[2] = "0b000010000000000000000000";
        ram[3] = "0b000001000000000000000000";
        ram[4] = "0b000000100000000000000000";
        ram[5] = "0b000000010000000000000000";
        ram[6] = "0b000000001000000000000000";
        ram[7] = "0b000000000100000000000000";
        ram[8] = "0b000000000010000000000000";
        ram[9] = "0b000000000001000000000000";
        ram[10] = "0b000000000000100000000000";
        ram[11] = "0b000000000000010000000000";
        ram[12] = "0b000000000000001000000000";
        ram[13] = "0b000000000000000100000000";
        ram[14] = "0b000000000000000010000000";
        ram[15] = "0b000000000000000001000000";
        ram[16] = "0b000000000000000000100000";
        ram[17] = "0b000000000000000000010000";
        ram[18] = "0b000000000000000000001000";
        ram[19] = "0b000000000000000000000100";
        ram[20] = "0b000000000000000000000010";
        ram[21] = "0b000000000000000000000001";
        for (unsigned i = 22; i < 30 ; i = i + 1) {
            ram[i] = "0b000000000000000000000000";
        }
        ram[30] = "0b100000000000000000000000";
        ram[31] = "0b010000000000000000000000";


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


SC_MODULE(roundf_one_half_table2) {


static const unsigned DataWidth = 24;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


roundf_one_half_table2_ram* meminst;


SC_CTOR(roundf_one_half_table2) {
meminst = new roundf_one_half_table2_ram("roundf_one_half_table2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~roundf_one_half_table2() {
    delete meminst;
}


};//endmodule
#endif
