//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 21:00:15
// Design Name: 
// Module Name: Top_UART_RS232_tb
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

`timescale 1ns / 1ns
`define CLK_PERIOD 20

module Top_UART_RS232_tb();

reg [7:0]data;
reg send_en;
reg [2:0]baud_set;
reg clk,rst;
wire uart_state,uart_tx,tx_done;

Top_UART_RS232 t1(data,send_en,baud_set,clk,rst,uart_state,uart_tx,tx_done);

initial clk=1;

initial
begin
rst<=1;data<=8'b0000_0000;send_en<=0;baud_set<=3'd3;
#(`CLK_PERIOD*500+1) rst<=0;
#(`CLK_PERIOD*500+1) rst<=1;

#(`CLK_PERIOD*50);
data<=8'haa;send_en<=1;
#`CLK_PERIOD;
@(posedge tx_done)
send_en<=0;
#(`CLK_PERIOD*500);

data<=8'h55;send_en<=1;
#`CLK_PERIOD;
@(posedge tx_done)
#(`CLK_PERIOD*5000);
send_en<=0;
$stop;
end

always#(`CLK_PERIOD/2) clk<=~clk;

endmodule
