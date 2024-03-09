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
// Description: 5.	让多个LED灯按照设置的模式各自在一个变化循环内独立亮灭变化
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ControlLedrun5(
input clk,rst,
input [7:0]key,
input [7:0]key1,
input [31:0]Time,
output reg [1:0]led
    );
    
reg [31:0]counter;
//parameter compare =100_000_000;
    
always @(posedge clk or negedge rst)
begin
if(!rst)
counter<=0;
else if(counter==Time)
counter <=0;
else
counter<=counter+1;
end

reg [2:0]sel;
always @(posedge clk or negedge rst)
begin
if(!rst)
sel<=0;
else if(counter==Time)
sel<=sel+1;
end

always @(posedge clk or negedge rst)
if(!rst)
led<=0;
else
begin
case(sel)
3'd0:begin led[0]<=key[0];led[1]<=key1[0]; end
3'd1:begin led[0]<=key[1];led[1]<=key1[1]; end 
3'd2:begin led[0]<=key[2];led[1]<=key1[2]; end 
3'd3:begin led[0]<=key[3];led[1]<=key1[3]; end 
3'd4:begin led[0]<=key[4];led[1]<=key1[4]; end 
3'd5:begin led[0]<=key[5];led[1]<=key1[5]; end 
3'd6:begin led[0]<=key[6];led[1]<=key1[6]; end 
3'd7:begin led[0]<=key[7];led[1]<=key1[7]; end 
default:led<=0;
endcase
end

endmodule
