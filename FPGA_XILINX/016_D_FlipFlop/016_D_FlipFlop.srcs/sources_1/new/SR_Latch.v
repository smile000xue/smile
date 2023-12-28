`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/01 01:48:48
// Design Name: 
// Module Name: SR_Latch
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


module SR_Latch(
input set,reset,
output Q1,Q2
    );
wire t1,t2;

assign t1=Q1;
assign t2=Q2;

assign Q1=~(set&t2);
assign Q2=~(t1&reset);
endmodule
