`timescale 1ns / 1ps
module alu_tb;
reg clk, rst;
reg [4-1:0] data_A, data_B;
reg [3-1:0] opcode;
wire [8-1:0] seg_COM, seg_DATA;

alu segALU(
 data_A,  rst,  clk,
            data_B, 
             opcode, 
            seg_COM,seg_DATA
);
integer i = 0;
initial begin
clk <= 1'b1; rst <= 1'b1;
#25 rst <= 1'b0; data_A <= 4'd3; data_B <= 4'd2; opcode <= 3'b000;
for (i=0; i<6; i=i+1) begin
#80 opcode <= opcode + 3'b001;
end
end
always #5 clk <= ~clk;
endmodule