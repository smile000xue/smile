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
// Description: 2.	��LED�ư�����0.25�룬��0.5�룬��0.75�룬��1���״̬ѭ������
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ControlLedrun2(
input clk,rst,
output reg led
    );
    
reg [31:0]counter;
parameter compare =125_000_000;
    
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
if(!rst)
led<=0;
else if(counter<=compare/10)
led<=1;
else if(counter<=3*compare/10)
led<=0;
else if(counter<=6*compare/10)
led<=1;
else if(counter>=6*compare/10)
led<=0;
end 
    
endmodule
