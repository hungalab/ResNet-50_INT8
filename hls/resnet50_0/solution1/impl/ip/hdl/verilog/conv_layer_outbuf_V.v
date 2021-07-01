// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module conv_layer_outbuf_V_ram (addr0, ce0, q0, addr1, ce1, d1, we1,  clk);

parameter DWIDTH = 1536;
parameter AWIDTH = 14;
parameter MEM_SIZE = 12544;

input[AWIDTH-1:0] addr0;
input ce0;
output wire[DWIDTH-1:0] q0;
input[AWIDTH-1:0] addr1;
input ce1;
input[DWIDTH-1:0] d1;
input we1;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];
wire [AWIDTH-1:0] addr0_t0; 
reg [AWIDTH-1:0] addr0_t1; 
reg [DWIDTH-1:0] q0_t0;
reg [DWIDTH-1:0] q0_t1;
wire [AWIDTH-1:0] addr1_t0; 
reg [AWIDTH-1:0] addr1_t1; 
wire [DWIDTH-1:0] d1_t0; 
wire we1_t0; 
reg [DWIDTH-1:0] d1_t1; 
reg we1_t1; 

initial begin
    $readmemh("./conv_layer_outbuf_V_ram.dat", ram);
end

assign addr0_t0 = addr0;
assign q0 = q0_t1;
assign addr1_t0 = addr1;
assign d1_t0 = d1;
assign we1_t0 = we1;

always @(posedge clk)  
begin
    if (ce0) 
    begin
        addr0_t1 <= addr0_t0; 
        q0_t1 <= q0_t0;
    end
    if (ce1) 
    begin
        addr1_t1 <= addr1_t0; 
        d1_t1 <= d1_t0;
        we1_t1 <= we1_t0;
    end
end


always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0_t0 <= ram[addr0_t1];
    end
end


always @(posedge clk)  
begin 
    if (ce1) 
    begin
        if (we1_t1) 
        begin 
            ram[addr1_t1] <= d1_t1; 
        end 
    end
end


endmodule

`timescale 1 ns / 1 ps
module conv_layer_outbuf_V(
    reset,
    clk,
    address0,
    ce0,
    q0,
    address1,
    ce1,
    we1,
    d1);

parameter DataWidth = 32'd1536;
parameter AddressRange = 32'd12544;
parameter AddressWidth = 32'd14;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;
input[AddressWidth - 1:0] address1;
input ce1;
input we1;
input[DataWidth - 1:0] d1;



conv_layer_outbuf_V_ram conv_layer_outbuf_V_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ),
    .addr1( address1 ),
    .ce1( ce1 ),
    .we1( we1 ),
    .d1( d1 ));

endmodule

