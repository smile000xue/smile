`timescale 10ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/15 03:49:06
// Design Name: 
// Module Name: count_4_tb
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


module count_4_tb();


reg rst,clk;

wire[3:0] q;

count_4 u1( rst, clk, q);

initial begin
    clk=0;  rst=1;
    #10 rst=0;
end

always begin
    #5 clk=~clk;
end

endmodule
