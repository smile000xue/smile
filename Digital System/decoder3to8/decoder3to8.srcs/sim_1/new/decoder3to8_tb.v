`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/21 16:08:30
// Design Name: 
// Module Name: decoder3to8_tb
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


module decoder3to8_tb;
wire [7:0]out;
reg [2:0]in;

decoder3to8 dec(.out(out),.in(in));

initial
begin
$monitor(in,out);
in=3'b000;
end

always #20 in=in+3'b001;

endmodule
