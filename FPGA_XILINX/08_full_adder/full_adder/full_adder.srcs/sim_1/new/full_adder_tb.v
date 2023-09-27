`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/22 02:09:07
// Design Name: 
// Module Name: full_adder_tb
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


module full_adder_tb();

reg in1;
reg in2;
reg cin;

wire sum;
wire cout;

initial 
    begin 
        in1<=1'b0;
        in2<=1'b0;
        cin<=1'b0;
    end

always #10 in1<= {$random}%2;
always #10 in2<= {$random}%2;
always #10 cin<= {$random}%2;


full_adder full_adder_tb
(
    .in1(in1),
    .in2(in2),
    .cin(cin),
    
    .sum(sum),
    .cout(cout)
    
);

  

endmodule
