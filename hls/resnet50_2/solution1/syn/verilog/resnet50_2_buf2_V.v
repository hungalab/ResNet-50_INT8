// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module resnet50_2_buf2_V_ram (addr0, ce0, q0, addr1, ce1, d1, we1,  clk);

parameter DWIDTH = 288;
parameter AWIDTH = 13;
parameter MEM_SIZE = 6272;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input[AWIDTH-1:0] addr1;
input ce1;
input[DWIDTH-1:0] d1;
input we1;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./resnet50_2_buf2_V_ram.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end


always @(posedge clk)  
begin 
    if (ce1) 
    begin
        if (we1) 
        begin 
            ram[addr1] <= d1; 
        end 
    end
end


endmodule

`timescale 1 ns / 1 ps
module resnet50_2_buf2_V(
    reset,
    clk,
    address0,
    ce0,
    q0,
    address1,
    ce1,
    we1,
    d1);

parameter DataWidth = 32'd288;
parameter AddressRange = 32'd6272;
parameter AddressWidth = 32'd13;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;
input[AddressWidth - 1:0] address1;
input ce1;
input we1;
input[DataWidth - 1:0] d1;



resnet50_2_buf2_V_ram resnet50_2_buf2_V_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ),
    .addr1( address1 ),
    .ce1( ce1 ),
    .we1( we1 ),
    .d1( d1 ));

endmodule
