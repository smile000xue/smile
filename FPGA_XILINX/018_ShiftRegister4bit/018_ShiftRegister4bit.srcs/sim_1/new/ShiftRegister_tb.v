`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 19:58:39
// Design Name: 
// Module Name: ShiftRegister_tb
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


module ShiftRegister_tb();

reg clk,SI;
wire S0;

ShiftRegister4bit s1(clk,SI,S0);

initial
begin

SI<=0;clk<=0;
#10 clk<=1;SI<=0;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;
#10 clk<=0;SI<=0;
#10 clk<=1;SI<=0;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;
#10 clk<=0;SI<=0;
#10 clk<=1;SI<=0;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;
#10 clk<=0;SI<=0;
#10 clk<=1;SI<=0;
#10 clk<=0;SI<=1;
#10 clk<=1;SI<=1;

end

always #10 clk<=~clk;
always #10 SI<={$random}%2;


endmodule
