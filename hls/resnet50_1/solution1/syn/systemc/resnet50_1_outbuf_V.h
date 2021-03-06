// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __resnet50_1_outbuf_V_H__
#define __resnet50_1_outbuf_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct resnet50_1_outbuf_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1536;
  static const unsigned AddressRange = 12544;
  static const unsigned AddressWidth = 14;

//latency = 3
//input_reg = 2
//output_reg = 1
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_in<sc_logic> we1;
sc_core::sc_in<sc_lv<DataWidth> > d1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


sc_core::sc_signal<sc_lv<AddressWidth> > addr0_t0; 
sc_core::sc_signal<sc_logic> ce0_t0; 
sc_core::sc_signal<sc_lv<AddressWidth> > addr0_t1; 
sc_core::sc_signal<sc_logic> ce0_t1; 
sc_core::sc_signal<sc_lv<DataWidth> > q0_t0;
sc_core::sc_signal<sc_lv<DataWidth> > q0_t1;
sc_core::sc_signal<sc_lv<AddressWidth> > addr1_t0; 
sc_core::sc_signal<sc_logic> ce1_t0; 
sc_core::sc_signal<sc_lv<AddressWidth> > addr1_t1; 
sc_core::sc_signal<sc_logic> ce1_t1; 
sc_core::sc_signal<sc_lv<DataWidth> > d1_t0; 
sc_core::sc_signal<sc_logic> we1_t0; 
sc_core::sc_signal<sc_lv<DataWidth> > d1_t1; 
sc_core::sc_signal<sc_logic> we1_t1; 
   SC_CTOR(resnet50_1_outbuf_V_ram) {
        for (unsigned i = 0; i < 12544; i = i + 1) {
            ram[i] = 0;
        }
SC_METHOD(prc_comb_0);
  sensitive<<address0<<ce0;
  sensitive<<q0_t1;
SC_METHOD(prc_comb_1);
  sensitive<<address1<<ce1;
  sensitive<<d1<<we1;

SC_METHOD(prc_seq);
  sensitive<<clk.pos(); 


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();
   }

void prc_comb_0() {
  addr0_t0 = address0.read();
  ce0_t0 = ce0.read();
  q0 = q0_t1.read();
}
void prc_comb_1() {
  addr1_t0 = address1.read();
  ce1_t0 = ce1.read();
  d1_t0 = d1.read();
  we1_t0 = we1.read();
}

void prc_seq() { 
    addr0_t1 = addr0_t0.read(); 
    ce0_t1 = ce0_t0.read(); 
    q0_t1 = q0_t0.read();
    addr1_t1 = addr1_t0.read(); 
    ce1_t1 = ce1_t0.read(); 
    d1_t1 = d1_t0.read();
    we1_t1 = we1_t0.read();
}

void prc_write_0()
{
    if (ce0_t1.read() == sc_dt::Log_1) 
    {
            if(addr0_t1.read().is_01() && addr0_t1.read().to_uint()<AddressRange)
              q0_t0 = ram[addr0_t1.read().to_uint()];
            else
              q0_t0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1_t1.read() == sc_dt::Log_1) 
    {
        if (we1_t1.read() == sc_dt::Log_1) 
        {
           if(addr1_t1.read().is_01() && addr1_t1.read().to_uint()<AddressRange)
           {
              ram[addr1_t1.read().to_uint()] = d1_t1.read(); 
           }
        }
    }
}


}; //endmodule


SC_MODULE(resnet50_1_outbuf_V) {


static const unsigned DataWidth = 1536;
static const unsigned AddressRange = 12544;
static const unsigned AddressWidth = 14;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_in<sc_logic> we1;
sc_core::sc_in<sc_lv<DataWidth> > d1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


resnet50_1_outbuf_V_ram* meminst;


SC_CTOR(resnet50_1_outbuf_V) {
meminst = new resnet50_1_outbuf_V_ram("resnet50_1_outbuf_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->we1(we1);
meminst->d1(d1);

meminst->reset(reset);
meminst->clk(clk);
}
~resnet50_1_outbuf_V() {
    delete meminst;
}


};//endmodule
#endif
