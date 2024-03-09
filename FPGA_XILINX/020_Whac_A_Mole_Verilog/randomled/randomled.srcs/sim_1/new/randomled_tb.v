`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/23 17:36:25
// Design Name: 
// Module Name: randomled_tb
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


module randomled_tb();

reg clk,rst;
wire [7:0] out_data;

randomled led1(clk,rst,out_data);

initial
begin
clk<=0;rst<=1;
#10 clk<=1;rst<=0;
#10 clk<=0;rst<=1;
#10 clk<=1;rst<=0;
end

always #10 clk<=~clk;

endmodule
