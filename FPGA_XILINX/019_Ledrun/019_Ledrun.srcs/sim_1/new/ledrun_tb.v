`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/07 01:38:37
// Design Name: 
// Module Name: ledrun_tb
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
module ledrun_tb();

reg clk,reset;
wire [7:0]out;

ledrundifferentHZ l1(clk,reset,out);
//#(  .Max(2)
//)


//defparam ledrundifferentHZ.l0.Max=50;
//defparam ledrundifferentHZ.l1.Max=50;
//defparam ledrundifferentHZ.l2.Max=50;
//defparam ledrundifferentHZ.l3.Max=50;
//defparam ledrundifferentHZ.l4.Max=50;
//defparam ledrundifferentHZ.l5.Max=50;
//defparam ledrundifferentHZ.l6.Max=50;
//defparam ledrundifferentHZ.l7.Max=50;





initial begin
clk<=0;reset<=0;
#10 clk<=0;reset<=1;
#10 clk<=0;reset<=0;
end

always #10 clk=~clk;


endmodule
