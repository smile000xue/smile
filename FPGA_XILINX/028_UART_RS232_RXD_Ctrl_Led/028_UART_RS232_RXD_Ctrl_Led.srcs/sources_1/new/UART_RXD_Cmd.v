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


module UART_RXD_Cmd(
input clk,rst,
input [7:0]data,
input  rx_done,
output reg [7:0]ctrl,
output reg [31:0]time_set
    );
    
reg [3:0]counter_receive;
reg [7:0]command_data[7:0];

always @(posedge clk or negedge rst)
if(!rst)
    counter_receive<=0;
else if(rx_done)
begin
    counter_receive<=counter_receive+1;
    if(counter_receive==4'd9)
    counter_receive<=0;
end
else
counter_receive<=counter_receive;

always@(*)
case(counter_receive)
4'd1:command_data[0]<=data;
4'd2:command_data[1]<=data;
4'd3:command_data[2]<=data;
4'd4:command_data[3]<=data;
4'd5:command_data[4]<=data;
4'd6:command_data[5]<=data;
4'd7:command_data[6]<=data;
4'd8:command_data[7]<=data;
default:begin
command_data[0]<=command_data[0];
command_data[1]<=command_data[1];
command_data[2]<=command_data[2];
command_data[3]<=command_data[3];
command_data[4]<=command_data[4];
command_data[5]<=command_data[5];
command_data[6]<=command_data[6];
command_data[7]<=command_data[7];
end
endcase

always @(posedge clk or negedge rst)
if(!rst)
begin
    ctrl<=0;
    time_set<=0;
end
else if(command_data[0]==8'h55&&command_data[1]==8'hA5&&command_data[7]==8'hF0)
begin
ctrl<=command_data[6];
time_set<={command_data[5],command_data[4],command_data[3],command_data[2]};
end
//else
//begin
//ctrl<=0;
//time_set<=0;
//end
    
endmodule
