`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/27 22:51:07
// Design Name: 
// Module Name: ControlLedrun_tb
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


module ControlLedrun_tb();

reg clk,rst;
reg [7:0]key1;
reg [31:0]Time;
wire led;

//ControlLedrun2
//#(
//        .compare(125)
//    )
//      c2(clk,rst,led);

ControlLedrun6 c6(clk,rst,key1,Time,led);

//defparam ControlLedrun4.compare=100;

initial
begin
clk<=0;rst<=1;key1<=8'b0100_0100;Time<=10'd50;
#10 clk<=0;rst<=0;key1<=8'b0100_0100;Time<=10'd50;
#10 clk<=1;rst<=1;key1<=8'b0100_0100;Time<=10'd50;
end

always #10 clk<=~clk;

endmodule
