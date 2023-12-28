`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 15:45:56
// Design Name: 
// Module Name: BinarytoBcd2_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module BinarytoBcd2_tb();

reg [3:0]in;
wire [9:0]out;


BinarytoBcd2 bcd_tb(in,out);

initial
begin

in<=4'b0000;
#10 in<=4'b0001;
#10 in<=4'b0010;
#10 in<=4'b0100;
#10 in<=4'b1000;
#10 in<=4'b1010;
#10 in<=4'b1100;
#10 in<=4'b1111;


end


endmodule
