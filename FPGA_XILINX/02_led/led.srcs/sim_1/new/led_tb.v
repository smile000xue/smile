`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/15 23:07:26
// Design Name: 
// Module Name: led_tb
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


module led_tb();

wire led_out;

reg key_in;

initial key_in<=1'b0;

always #10 key_in <= {$random} % 2;

led led_inst
(
    .key_in(key_in),
    .led_out(led_out)

);



endmodule
