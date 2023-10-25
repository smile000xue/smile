`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 00:29:38
// Design Name: 
// Module Name: fulladder
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


module fulladder(
input in1,in2,cin,

output s,c
    );

wire [2:0]t;    
    halfadder h1(in1,in2,t[0],t[1]);
    halfadder h2(t[0],cin,s,t[2]);
    assign c=t[1]|t[2];
    
endmodule
