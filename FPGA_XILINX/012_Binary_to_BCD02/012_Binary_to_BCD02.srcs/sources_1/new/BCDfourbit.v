`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 02:19:09
// Design Name: 
// Module Name: BCDfourbit
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


module BCDfourbit(
input [3:0]in1,
output [9:0]out
    );
wire [10:0]t;

BCD1bit b1({0,0,0,in1[3]},t[3:0]);
BCD1bit b2({t[2:0],in1[2]},t[7:4]);
BCD1bit b3({0,0,0,t[3]},{out[9],t[10:8]});
BCD1bit b4({t[6:4],in1[1]},out[4:1]);
BCD1bit b5(t[10:7],out[8:5]);

assign out[0]=in1[0];


endmodule
