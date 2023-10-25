`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/25 23:58:39
// Design Name: 
// Module Name: decoder3to8
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


module decoder3to8(
input a,b,c,
output [7:0]o
    );

wire [3:0] t;

decoder2to4 d1(a,b,t);

assign o[0]=t[0]&(~c);
assign o[1]=t[1]&(~c);
assign o[2]=t[2]&(~c);
assign o[3]=t[3]&(~c);
assign o[4]=t[0]&(c);
assign o[5]=t[1]&(c);
assign o[6]=t[2]&(c);
assign o[7]=t[3]&(c);


    
endmodule
