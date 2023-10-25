`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 19:28:04
// Design Name: 
// Module Name: halfadder
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


module halfadder(
input [1:0]in,
output reg[1:0]out
);

always@ (in)
    case(in)
    
    2'b00:out<=2'b00;
    2'b01:out<=2'b01;
    2'b10:out<=2'b01;
    2'b11:out<=2'b10;
    endcase  
    
endmodule
