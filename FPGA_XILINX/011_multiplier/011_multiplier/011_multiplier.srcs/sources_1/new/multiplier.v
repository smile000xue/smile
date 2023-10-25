`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 20:55:15
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
input [2:0]A,
input [3:0]B,
output [5:0]S,
output cout
);

wire [5:0]m1;
wire [5:0]m2;
wire [5:0]m3;
wire [5:0]S1;
wire count1;

assign m1[0]=A[0]&B[0];
assign m1[1]=A[0]&B[1];
assign m1[2]=A[0]&B[2];
assign m1[3]=A[0]&B[3];
assign m1[4]=0;
assign m1[5]=0;

assign m2[1]=A[1]&B[0];
assign m2[2]=A[1]&B[1];
assign m2[3]=A[1]&B[2];
assign m2[4]=A[1]&B[3];
assign m2[0]=0;
assign m2[5]=0;

assign m3[2]=A[2]&B[0];
assign m3[3]=A[2]&B[1];
assign m3[4]=A[2]&B[2];
assign m3[5]=A[2]&B[3];
assign m3[1]=0;
assign m3[0]=0;

sixbitadder mul1(m1,m2,0,S1,count1);
sixbitadder mul2(S1,m3,count1,S,cout);



endmodule
