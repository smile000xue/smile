`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/02 15:40:51
// Design Name: 
// Module Name: UART_Sendmultiplebytes_tb
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


module UART_Sendmultiplebytes_tb();

reg clk,rst,send_en;
reg [39:0]senddata;
wire uart_state,uart_tx,tx_done;

UART_Sendmultiplebytes u1(clk,rst,send_en,senddata,uart_state,uart_tx,tx_done);

initial 
begin
clk=1;rst=1;senddata<=0;send_en<=0;
#10 clk=0;rst=0;senddata<=0;send_en<=0;
#10 clk=1;rst=1;senddata<=0;send_en<=0;
#10 clk=0;rst=1;senddata<=40'Habcde;send_en<=0;
#10 clk=1;rst=1;senddata<=40'Habcde;send_en<=1;
#10 clk=0;rst=1;senddata<=40'Habcde;send_en<=0;
end

always #10 clk<=~clk;

endmodule
