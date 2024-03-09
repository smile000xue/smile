`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 19:14:15
// Design Name: 
// Module Name: div_cnt
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


module div_cnt(
input [15:0]bps_DR,
input clk,rst,
input en_cnt,
output reg bps_clk
    );

 reg [15:0]counter;
 
always @(posedge clk or negedge rst)
if(!rst)
    counter<=0;
else if(counter==bps_DR)
    counter<=0;
else
 begin
    if(en_cnt)
        counter<=counter+1;
    else
        counter<=0;
end
 
 always @(posedge clk or negedge rst)
if(!rst)
    bps_clk<=0;
else if(counter==1)
    bps_clk<=1;
else
    bps_clk<=0;
    
endmodule
