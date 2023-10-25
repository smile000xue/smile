`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 01:27:31
// Design Name: 
// Module Name: fourbitadder_tb
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


module fourbitadder_tb();

reg [3:0]A;
reg [3:0]B;
reg cin;
wire [3:0]S;
wire cout;

fourbitadder fa(A,B,cin,S,cout);

initial begin
    A<=4'b0111;B<=4'b1010;cin<=0;
    #10 A<=4'b0001;B<=4'b1010;cin<=1;
    #10 A<=4'b1011;B<=4'b0010;cin<=0;
    #10 A<=4'b0001;B<=4'b1110;cin<=1;
    #10 A<=4'b0001;B<=4'b1111;cin<=0;
    
end

always #10 A<={$random}%16;

always #10 B<={$random}%16;

always #10 cin<={$random}%2;


endmodule
