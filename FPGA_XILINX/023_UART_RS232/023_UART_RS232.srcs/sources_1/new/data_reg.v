`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 19:14:15
// Design Name: 
// Module Name: div_cnt
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


module data_reg(
input send_en,
input clk,rst,
input [7:0]data,
output reg [7:0]data_byte_reg
    );

always @(posedge clk or negedge rst)
if(!rst)
    data_byte_reg<=0;
else if(send_en)
    data_byte_reg<=data;
else
    data_byte_reg<=data;
    
endmodule