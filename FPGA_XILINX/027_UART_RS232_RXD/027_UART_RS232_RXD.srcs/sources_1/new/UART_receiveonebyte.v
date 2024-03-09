`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/04 02:06:15
// Design Name: 
// Module Name: UART_receiveonebyte
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


module UART_receiveonebyte(
input clk,rst,
input uart_rx,
output rx_done
    );
wire rx_done_wire;
wire [7:0]data;
reg [7:0]data_reg;
UART_RXD u1(clk,rst,uart_rx,3'd3,data,rx_done_wire);

vio_0 your_instance_nameUART_receiveonebyte (
  .clk(clk),              // input wire clk
  .probe_in0(data_reg)  // input wire [7 : 0] probe_in0
);

always @(posedge clk or negedge rst)
if(!rst)
    begin
    data_reg<=0;
    end
else if(rx_done_wire)
    data_reg<=data;
else
    data_reg<=data_reg;
    
assign rx_done=rx_done_wire;

endmodule