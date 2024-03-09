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


module bps_cnt(
input bps_clk,
input clk,rst,
output reg [3:0]bps_cnt_q,
output reg clr
    );
 
always @(posedge clk or negedge rst)
if(!rst)
    begin
    clr<=0;
    bps_cnt_q<=0;
    end
else if(bps_clk==1'd1)
begin
bps_cnt_q<=bps_cnt_q+1;
    if(bps_cnt_q==4'd11)
begin
        bps_cnt_q<=0;
        clr<=1;
end
end
else
begin
    clr<=0;
    bps_cnt_q<=bps_cnt_q;
end
    
endmodule