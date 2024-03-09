`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/01 13:02:15
// Design Name: 
// Module Name: uart_tx_test_tb
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


module uart_tx_test_tb();

reg clk,rst;
wire uart_tx;
wire [1:0]led;

uart_tx_test u1(clk,rst,uart_tx,led);

initial 
begin 
clk<=0;rst<=1;
#10 clk<=1;rst<=0;
#10 clk<=0;rst<=1;
end

always #10 clk<=~clk;

endmodule
