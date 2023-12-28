`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 15:13:03
// Design Name: 
// Module Name: BinarytoBcd
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


module BinarytoBcd(
input [3:0]in,
output reg[3:0]number
);

always@ (in)
    case(in)
    4'b0000:number<=4'b0000;
    4'b0001:number<=4'b0001;
    4'b0010:number<=4'b0010;
    4'b0011:number<=4'b0011;
    4'b0100:number<=4'b0100;
    4'b0101:number<=4'b1000;
    4'b0110:number<=4'b1001;
    4'b0111:number<=4'b1010;
    4'b1000:number<=4'b1011;
    4'b1001:number<=4'b1100;
    default:number<=4'b0000;
    endcase
  

endmodule
