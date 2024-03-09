`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 18:38:55
// Design Name: 
// Module Name: DR_LUT
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


module Top_UART_RS232(
input [7:0]data,
input send_go,
input [2:0]baud_set,
input clk,rst,
output uart_state,uart_tx,tx_done
    );
    
wire [15:0]bps_DR;
wire bps_clk;
wire [3:0]bps_cnt_q;
wire clr;
wire [7:0]data_byte_reg;
wire data_tx;
reg send_en;

DR_LUT d1(baud_set,clk,rst,bps_DR);
div_cnt d2(bps_DR,clk,rst,send_en,bps_clk);
bps_cnt b1(bps_clk,clk,rst,bps_cnt_q,clr);
data_reg d3(send_en,clk,rst,data,data_byte_reg);
MUX m1(data_byte_reg,bps_cnt_q,data_tx);
REG r1(data_tx,send_en,clr,clk,rst,uart_state,uart_tx,tx_done);

always @(posedge clk or negedge rst)
if(!rst)
    send_en<=0;
else if(send_go)
    send_en<=1;
else if(tx_done)
    send_en<=0;
else
    send_en<=send_en;
    
endmodule
