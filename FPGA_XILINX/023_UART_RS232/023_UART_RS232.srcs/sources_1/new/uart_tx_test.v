`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 21:23:25
// Design Name: 
// Module Name: uart_tx_test
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


module uart_tx_test(
input clk,rst,
output uart_tx,
output [1:0]led
);


wire send_en;
wire test_en;
wire [7:0]data;
reg test_en_dly1,test_en_dly2;

always @(posedge clk)
begin
    test_en_dly1<=test_en;
    test_en_dly2<=test_en_dly1;
end

assign send_en=test_en_dly1& !test_en_dly2;

vio_0 uart_tx_test (
  .clk(clk),                // input wire clk
  .probe_out0(test_en),  // output wire [0 : 0] probe_out0
  .probe_out1(data)  // output wire [7 : 0] probe_out1
);

Top_UART_RS232 t1(data,send_en,3'd3,clk,rst,led[0],uart_tx,led[1]);

endmodule
