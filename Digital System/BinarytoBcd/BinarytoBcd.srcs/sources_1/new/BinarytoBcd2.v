`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 15:30:33
// Design Name: 
// Module Name: BinarytoBcd2
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


module BinarytoBcd2(
input [3:0]in,
output [9:0]out
    );
    
wire [10:0]T;


supply0 gnd;
assign out[0]=in[0];

BinarytoBcd bcd1({gnd,gnd,gnd,in[3]},T[3:0]);
BinarytoBcd bcd2({T[2:0],in[2]},T[7:4]);
BinarytoBcd bcd3({T[6:4],in[1]},out[4:1]);
BinarytoBcd bcd4({gnd,gnd,gnd,T[3]},{out[9],T[10:8]});
BinarytoBcd bcd5(T[10:7],out[8:5]);
    
    
endmodule
