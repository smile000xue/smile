`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 01:29:43
// Design Name: 
// Module Name: multiplier
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


module multiplier(
input [3:0]in1,[2:0]in2,
output [6:0]s    
);

wire [3:0]t1,t2,t3,t4;
wire co;
assign t1[0]=in1[0]&in2[0];
assign t1[1]=in1[1]&in2[0];
assign t1[2]=in1[2]&in2[0];
assign t1[3]=in1[3]&in2[0];
assign t2[0]=in1[0]&in2[1];
assign t2[1]=in1[1]&in2[1];
assign t2[2]=in1[2]&in2[1];
assign t2[3]=in1[3]&in2[1];
assign t3[0]=in1[0]&in2[2];
assign t3[1]=in1[1]&in2[2];
assign t3[2]=in1[2]&in2[2];
assign t3[3]=in1[3]&in2[2];


fourbitadder f1(0,t2,{0,t1[3:1]},t4,co);
fourbitadder f2(0,t3,{co,t4[3:1]},s[5:2],s[6]);

assign s[0]=t1[0];
assign s[1]=t4[0];


endmodule
