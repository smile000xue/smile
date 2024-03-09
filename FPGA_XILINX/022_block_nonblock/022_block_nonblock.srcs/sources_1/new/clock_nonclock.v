`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/28 22:50:41
// Design Name: 
// Module Name: clock_nonclock
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


module clock_nonclock(
input clk,rst,
input a,b,c,
output reg [1:0]out
    );
    
 reg [1:0]d;
    
 always@(posedge clk or negedge rst)
 begin
 if(!rst)
 begin
out<=0;
d<=0;
end
else
begin
d<=a+b;
out<=d+c;
//d=a+b;
//out=d+c;
 end
 end
    
endmodule
