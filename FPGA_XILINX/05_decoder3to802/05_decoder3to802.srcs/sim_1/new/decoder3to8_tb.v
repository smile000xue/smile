`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 00:07:28
// Design Name: 
// Module Name: decoder3to8_tb
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


module decoder3to8_tb();
reg a,b,c;
wire [7:0]o;

decoder3to8 d1(a,b,c,o);

initial begin

a<=0;b<=0;c<=0;
 #10 a<=1;b<=0;c<=0;
 #10 a<=0;b<=1;c<=0;
 #10 a<=1;b<=1;c<=0;
 #10 a<=0;b<=0;c<=1;
 #10 a<=1;b<=0;c<=1;
 #10 a<=0;b<=1;c<=1;
 #10 a<=1;b<=1;c<=1;
end

endmodule
