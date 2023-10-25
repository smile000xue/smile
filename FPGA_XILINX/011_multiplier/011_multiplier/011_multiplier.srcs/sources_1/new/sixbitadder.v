`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 01:12:46
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


module sixbitadder(

input [5:0]A,
input [5:0]B,
input cin,
output [5:0]S,
output cout
    );

wire C[4:0];
    
full_adder F0(A[0],B[0],cin,C[0],S[0]);
full_adder F1(A[1],B[1],C[0],C[1],S[1]);
full_adder F2(A[2],B[2],C[1],C[2],S[2]);
full_adder F3(A[3],B[3],C[2],C[3],S[3]);
full_adder F4(A[4],B[4],C[3],C[4],S[4]);
full_adder F5(A[5],B[5],C[4],cout,S[5]);
    
    
    
    
endmodule
