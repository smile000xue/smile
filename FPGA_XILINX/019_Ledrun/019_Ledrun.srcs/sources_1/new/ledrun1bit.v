`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/25 22:02:21
// Design Name: 
// Module Name: counter4
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


module ledrun1bit(
input clk,reset,
output reg out
    );

reg [24:0]cnt;
    
parameter Max=24_999_999;

always@(posedge clk or posedge reset)
begin
    if(reset)
        cnt<=0;
    else if(cnt>=Max)
        cnt<=0;
    else
        cnt<=cnt+1;    
end     


always@(posedge clk or posedge reset)
begin
    if(reset)
        out<=0;
    else if(cnt>=Max)
        out<=~out;
    else
        out<=out;
end  
  
endmodule