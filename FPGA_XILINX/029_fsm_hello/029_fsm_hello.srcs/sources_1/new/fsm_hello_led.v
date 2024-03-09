`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/03/09 16:48:20
// Design Name: 
// Module Name: fsm_hello_led
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


module fsm_hello_led(
input clk,rst,
input uart_rx,
output check_ok
    );

parameter [2:0]band_set=3'd3;

wire [7:0]data1;
wire rx_done1;

UART_RXD u1(clk,rst,uart_rx,band_set,data1,rx_done1);
fsm_hello(clk,rst,data1,rx_done1,check_ok);

endmodule
