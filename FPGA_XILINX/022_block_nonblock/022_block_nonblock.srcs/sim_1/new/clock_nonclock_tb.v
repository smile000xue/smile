`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/28 22:59:23
// Design Name: 
// Module Name: clock_nonclock_tb
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


module clock_nonclock_tb();

reg clk,rst;
reg a,b,c;
wire [1:0]out;

clock_nonclock c1(clk,rst,a,b,c,out);

initial
begin
clk<=0;rst<=0;a<=0;b<=0;c<=0;
#1000 clk<=0;rst<=1;a<=0;b<=0;c<=0;
#1000 clk<=1;rst<=0;a<=0;b<=0;c<=0;
#1000 clk<=0;rst<=1;a<=0;b<=0;c<=0;
#1000 clk<=1;rst<=1;a<=0;b<=0;c<=1;
#1000 clk<=0;rst<=1;a<=0;b<=0;c<=1;
#1000 clk<=1;rst<=1;a<=0;b<=1;c<=0;
#1000 clk<=0;rst<=1;a<=0;b<=1;c<=0;
#1000 clk<=1;rst<=1;a<=0;b<=1;c<=1;
#1000 clk<=0;rst<=1;a<=0;b<=1;c<=1;
#1000 clk<=1;rst<=1;a<=1;b<=0;c<=0;
#1000 clk<=0;rst<=1;a<=1;b<=0;c<=0;
#1000 clk<=1;rst<=1;a<=1;b<=0;c<=1;
#1000 clk<=0;rst<=1;a<=1;b<=0;c<=1;
#1000 clk<=1;rst<=1;a<=1;b<=1;c<=0;
#1000 clk<=0;rst<=1;a<=1;b<=1;c<=0;
#1000 clk<=1;rst<=1;a<=1;b<=1;c<=1;
end

always #10 clk<=~clk;

endmodule
