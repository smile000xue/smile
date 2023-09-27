`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/17 01:09:58
// Design Name: 
// Module Name: decoder3to8_tb
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


module decoder3to8_tb();

reg[2:0]  in;
wire[7:0]  out;

initial
    in=3'b0;
    
always #10 in<={$random} % 8;

decoder3to8 decoder3to8_tb(
    .in(in),
    .out(out)

);


endmodule
