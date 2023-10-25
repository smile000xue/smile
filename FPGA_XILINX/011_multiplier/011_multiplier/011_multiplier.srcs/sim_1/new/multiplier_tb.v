`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 21:29:07
// Design Name: 
// Module Name: multiplier_tb
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


module multiplier_tb();
reg [2:0]A;
reg [3:0]B;
wire [5:0]S;
wire cout;

multiplier mutiplier_tb(A,B,S,cout);

initial begin
    A<=3'b001;B<=4'b1110;
end

always #10 A<={$random}%8;
always #10 B<={$random}%16;



endmodule
