`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/05 14:37:02
// Design Name: 
// Module Name: UART_RXD_Ctrl_Led
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


module UART_RXD_Ctrl_Led(
input clk,rst,
input uart_rx,
output led
    );


wire [7:0]data;
wire rx_done;
wire [7:0]ctrl;
wire [31:0]time_set;
    
UART_RXD u1(clk,rst,uart_rx,3'd3,data,rx_done);
UART_RXD_Cmd u2(clk,rst,data,rx_done,ctrl,time_set);
UART_Counter_Led u3(clk,rst,ctrl,time_set,led);

    
endmodule
