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


module ledrun2(
input clk,reset,
output [7:0]out
    );

reg [2:0]a;
wire [7:0]t1;
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
        a<=0;
    else if(cnt>=Max)
        a<=a+1;
    else
        a<=a;
end

decoder3to8 d1(a[0],a[1],a[2],t1);

assign out=t1;

endmodule 
