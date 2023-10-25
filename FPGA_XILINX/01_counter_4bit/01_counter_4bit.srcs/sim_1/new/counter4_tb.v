`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/25 22:45:19
// Design Name: 
// Module Name: counter4_tb
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


module counter4_tb();

reg a,b;
wire [3:0] out;

counter4 c1(a,b,out);

initial
begin 
 a<=1;b<=1;
#10 a<=0;b<=0;
end

always #10 a<=~a;


endmodule
