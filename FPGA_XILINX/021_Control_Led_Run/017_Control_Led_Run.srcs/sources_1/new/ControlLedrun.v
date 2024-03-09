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
// Description: 1.	ÈÃLEDµÆ°´ÕÕÁÁ0.25Ãë£¬Ãğ0.75ÃëµÄ×´Ì¬Ñ­»·ÁÁÃğ
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ControlLedrun(
input clk,rst,
output reg led
    );
    
reg [24:0]counter;
parameter compare =50_000_000;
    
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
else if(counter<=compare/4)
led<=1;
else
led<=0;
end 
    
endmodule
