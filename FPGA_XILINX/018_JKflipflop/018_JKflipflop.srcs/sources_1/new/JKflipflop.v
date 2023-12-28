`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 19:39:34
// Design Name: 
// Module Name: JKflipflop
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


module JKflipflop(
input J,K,clk,
output Q,NQ
    );
    
wire t1,t2,t3,t4;

assign t1=J&NQ;
assign t2=~K;
assign t3=t2&Q;
assign t4=t3|t1;

Dflipflop d1(~clk,t4,Q,NQ);
    
endmodule
