`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/05 15:57:46
// Design Name: 
// Module Name: UART_RXD_Ctrl_Led_tb
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


module UART_RXD_Ctrl_Led_tb();

reg clk,rst;
reg uart_rx;
wire led;

UART_RXD_Ctrl_Led u1(clk,rst,uart_rx,led);

initial clk=1;
always #10 clk=~clk;

initial begin
rst=1;uart_rx<=1;
#200 rst=0;
#200 rst=1;
#200 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140;uart_rx<=1;
#105140;

#200 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140;uart_rx<=1;
#105140;
#105140;
#105140;

//$stop;
end





endmodule
