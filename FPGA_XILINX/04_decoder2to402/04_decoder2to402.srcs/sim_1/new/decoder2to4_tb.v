`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/25 23:52:19
// Design Name: 
// Module Name: decoder2to4_tb
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


module decoder2to4_tb();

reg a,b;
wire [3:0]o;

decoder2to4 d1(a,b,o);


initial begin
    a<=0;b<=1;
    #10 a<=0;b<=1;
    #10 a<=1;b<=1;
    #10 a<=0;b<=0;
    #10 a<=1;b<=0;
    
end
    
    

endmodule
