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


module REG(
input data_tx,
input send_en,
input clr,
input clk,rst,
output reg uart_state,uart_tx,tx_done
    );

always @(posedge clk or negedge rst)
if(!rst)
    uart_tx<=data_tx;
else
    uart_tx<=data_tx;
    
always @(posedge clk or negedge rst)
if(!rst)
    tx_done<=0;
else if(clr)
    tx_done<=1;
else
    tx_done<=0;
    
always @(posedge clk or negedge rst)
if(!rst)
    uart_state<=0;
else if(send_en)
    uart_state<=1;
else
    uart_state<=0;

endmodule