`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/02 19:50:00
// Design Name: 
// Module Name: UART_Sendmultiplebytes1_tb
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


module UART_Sendmultiplebytes1_tb();

reg clk,rst;
reg send_en;
reg [79:0]senddata;
wire uart_state,uart_tx,tx_done;

UART_Sendmultiplebytes1 u1(clk,rst,send_en,senddata,uart_state,uart_tx,tx_done);

initial clk=1;
always #10 clk<=~clk;

initial begin
rst<=1;send_en<=0;senddata<=0;
#200 rst<=0;
#200 rst<=1;
#200 senddata<=80'habcdeedcbaabcdeedcba;send_en<=1;
#20 senddata<=80'habcdeedcbaabcdeedcba;send_en<=0;
#20000000;

senddata<=80'h01010101010010101010;send_en<=1;
#20 senddata<=80'h01010101010010101010;send_en<=0;
end

endmodule
