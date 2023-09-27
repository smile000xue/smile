`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/17 01:44:06
// Design Name: 
// Module Name: BCD_tb
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


module BCD_tb();

reg [3:0] in;
wire [3:0] out;

initial
    in<=4'b0000;
    
always #10 in[0]<={$random}%2;
always #10 in[1]<={$random}%2;
always #10 in[2]<={$random}%2;
always #10 in[3]<={$random}%2;

BCD BCD_tb(
        
        .in(in),
        .out(out)

);

endmodule
