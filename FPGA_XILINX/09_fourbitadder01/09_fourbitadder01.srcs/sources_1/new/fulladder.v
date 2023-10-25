`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 19:48:59
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
input in1,in2,in0,
output sum,c
    );
wire t1;
wire t2;
wire t3;

halfadder h1(in1,in2,t1,t2);  
halfadder h2(t1,in0,sum,t3);

assign c=t2|t3;
    
endmodule
