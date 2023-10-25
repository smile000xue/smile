`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 02:57:11
// Design Name: 
// Module Name: BCDto7Segment
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


module BCDto7Segment(
input [3:0]in,
output reg [6:0]out
);

always@(in)
case(in)
    4'b0000:out<=7'b1111_110;
    4'b0001:out<=7'b0110_000;
    4'b0010:out<=7'b1101_101;
    4'b0011:out<=7'b1111_001;
    4'b0100:out<=7'b0110_011;
    4'b0101:out<=7'b1011_011;
    4'b0110:out<=7'b1011_111;
    4'b0111:out<=7'b1110_010;
    4'b1000:out<=7'b1111_111;
    4'b1001:out<=7'b1111_011;
    default:out<=7'b0000_000;
endcase

endmodule
