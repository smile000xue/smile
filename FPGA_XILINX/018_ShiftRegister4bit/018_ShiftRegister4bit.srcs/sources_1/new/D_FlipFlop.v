`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/01 02:08:24
// Design Name: 
// Module Name: D_FlipFlop
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


module Dflipflop(
input clk,D,
output Q,NQ
    );
    
wire t1,t2,t3,t4;
wire clk1,t5;

assign t5=t2;
assign clk1=clk&t5;

SR_Latch s1(t4,clk,t1,t2);
SR_Latch s2(clk1,D,t3,t4);
SR_Latch s3(t2,t3,Q,NQ);


endmodule

