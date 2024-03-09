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


module MUX(
input [7:0]data_byte_reg,
input [3:0]bps_cnt_q,
output reg data_tx
    );

parameter START_BIT=0;
parameter STOP_BIT=1;
 
always@(*)
case(bps_cnt_q)
    0:data_tx<=1'd1;
    1:data_tx<=START_BIT;
    2:data_tx<=data_byte_reg[0];
    3:data_tx<=data_byte_reg[1];
    4:data_tx<=data_byte_reg[2];
    5:data_tx<=data_byte_reg[3];
    6:data_tx<=data_byte_reg[4];
    7:data_tx<=data_byte_reg[5];
    8:data_tx<=data_byte_reg[6];
    9:data_tx<=data_byte_reg[7];
    10:data_tx<=STOP_BIT;
    11:data_tx=1'd1;
    default:data_tx<=1'd1;
endcase
    
endmodule