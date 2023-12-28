`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/10 02:13:41
// Design Name: 
// Module Name: ledrundifferentHZ
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


module ledrundifferentHZ(
input clk,reset,
output [7:0]out
    );
   
ledrun1bit #(.Max(5_000_000)) l0(clk,reset,out[0]);
ledrun1bit #(.Max(5_000_000)) l1(clk,reset,out[1]);
ledrun1bit #(.Max(10_000_00)) l2(clk,reset,out[2]);
ledrun1bit #(.Max(10_000_00)) l3(clk,reset,out[3]);
ledrun1bit #(.Max(20_000_00)) l4(clk,reset,out[4]);
ledrun1bit #(.Max(20_000_00)) l5(clk,reset,out[5]);
ledrun1bit #(.Max(40_000_00)) l6(clk,reset,out[6]);
ledrun1bit #(.Max(40_000_00)) l7(clk,reset,out[7]);
   
endmodule
