`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/13 02:11:15
// Design Name: 
// Module Name: PIEZO
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


module PIEZO(
input clk,reset,
input pwm_en,
input [7:0]key,
output reg pwm_out
    );
    
parameter d1=170068;
parameter d2=151515;
parameter d3=142857;
parameter d4=127227;
parameter d5=113379;
parameter d6=101010;
parameter d7=170068;
parameter d8=89928;

reg [31:0] arr;
reg [31:0]count;

always@(key)
case(key)

8'b0000_0001:arr<=d1;
8'b0000_0010:arr<=d2;
8'b0000_0100:arr<=d3;
8'b0000_1000:arr<=d4;
8'b0001_0000:arr<=d5;
8'b0010_0000:arr<=d6;
8'b0100_0000:arr<=d7;
8'b1000_0000:arr<=d8;
default: arr<=0;

endcase
  
always @(posedge clk or posedge reset)
begin
if(reset)
count<=32'd1;
else if(pwm_en)
begin 
if(count<=32'd1)
count<=arr;
else
count<=count-1;
end
else
count<=arr;
end

always @(posedge clk or posedge reset)
begin
if(reset)
pwm_out<=0;
else if(pwm_en)
begin 
if(count<=(arr>>1))
pwm_out<=1;
else
pwm_out<=0;
end
else
pwm_out<=0;
end
 
endmodule
