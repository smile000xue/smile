`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/30 15:34:53
// Design Name: 
// Module Name: game_of_whack_a_mole_tb
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


module game_of_whack_a_mole_tb();

reg [7:0]key;
reg clk,rst;
wire [7:0]led;
wire [7:0] seg_com;
wire [6:0]seg_data;

game_of_whack_a_mole g1(key,clk,rst,led,seg_com,seg_data);

initial
begin
key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;
#10 key<=8'b0000_1000;clk<=1;rst<=1;
#10 key<=8'b0000_1000;clk<=0;rst<=0;


end

always #10 clk<=~clk;
always #10 key<=~key;



endmodule
