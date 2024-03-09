`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/27 22:18:54
// Design Name: 
// Module Name: ControlLedrun
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 3.	让LED灯按照指定的亮灭模式亮灭，
//亮灭模式未知，由用户随机指定。
//以0.25秒为一个变化周期，8个变化状态为一个循环。
//2秒为一个循环周期，
//有一个指定亮灭状态的输入端口

// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ControlLedrun3(
input clk,rst,
input [7:0]key,
output reg led
    );
    
reg [31:0]counter;
parameter compare =100_000_000;
    
always @(posedge clk or negedge rst)
begin
if(!rst)
counter<=0;
else if(counter==compare)
counter <=0;
else
counter<=counter+1;
end

always @(posedge clk or negedge rst)
begin
case(counter)
compare/8:led<=key[0];
2*compare/8:led<=key[1];
3*compare/8:led<=key[2];
4*compare/8:led<=key[3];
5*compare/8:led<=key[4];
6*compare/8:led<=key[5];
7*compare/8:led<=key[6];
8*compare/8:led<=key[7];
default:led<=led;
endcase
end

endmodule
