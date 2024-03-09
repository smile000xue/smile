`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/05 14:39:54
// Design Name: 
// Module Name: UART_Counter_Led
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


module UART_Counter_Led(
input clk,rst,
input [7:0]ctrl,
input [31:0]time_set,
output reg led
);

reg [31:0] counter;
reg [2:0]led_select;

always @(posedge clk or negedge rst)
if(!rst)
    counter<=0;
else
begin
    counter<=counter+1;
    if(counter==time_set)
    counter<=0;
end

always @(posedge clk or negedge rst)
if(!rst)
    led_select<=0;
else if(counter==time_set)
    led_select<=led_select+1;

always@(*)
case(led_select)
3'd0:led<=ctrl[0];
3'd1:led<=ctrl[1];
3'd2:led<=ctrl[2];
3'd3:led<=ctrl[3];
3'd4:led<=ctrl[4];
3'd5:led<=ctrl[5];
3'd6:led<=ctrl[6];
3'd7:led<=ctrl[7];
default:led<=ctrl[0];
endcase

endmodule
