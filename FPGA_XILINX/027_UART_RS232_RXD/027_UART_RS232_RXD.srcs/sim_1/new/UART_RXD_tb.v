`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/04 00:58:55
// Design Name: 
// Module Name: UART_RXD_tb
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


module UART_RXD_tb();
reg clk,rst;
reg uart_rx;
reg [2:0]band_set;
wire [7:0]data;
wire rx_done;

UART_RXD u1(clk,rst,uart_rx,band_set,data,rx_done);

initial clk<=1;
always #10 clk<=~clk;

initial begin
rst<=1;uart_rx<=1;
#200 rst<=0;
#200 rst<=1;band_set<=3'd3;
#200 uart_rx<=0;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140;
#105140;uart_rx<=1;
#200 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=1;
#104140 uart_rx<=0;
#104140 uart_rx<=0;
#104140;
#105140;
$stop;
end
    
endmodule
