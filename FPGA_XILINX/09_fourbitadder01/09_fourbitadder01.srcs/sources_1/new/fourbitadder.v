`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 20:39:58
// Design Name: 
// Module Name: fourbitadder
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


module fourbitadder(
input [3:0]in1,[3:0]in2,in0,
output [3:0]out,[3:0]c
    );
    
fulladder f1(in1[0],in2[0],in0,out[0],c[0]);
fulladder f2(in1[1],in2[1],c[0],out[1],c[1]);
fulladder f3(in1[2],in2[2],c[1],out[2],c[2]);
fulladder f4(in1[3],in2[3],c[2],out[3],c[3]);



endmodule