`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/22 01:00:54
// Design Name: 
// Module Name: half_adder_tb
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


module half_adder_tb();

reg in1;
reg in2;
wire s;
wire c;

initial 
    begin 
        in1<=1'b0;
        in2<=1'b0;
    end
    
    always #10 in1<={$random}%2;
    always #10 in2<={$random}%2;
    
/*initial
begin
    $timeformat{-9,0,"ns",6};
    $monitor{"@time %t: in1=%b,in2=%b,s=%b,c=%b",$time,in1,in2,s,c};
end*/
    
half_adder half_adder_tb
(
        .in1(in1),
        .in2(in2),
        .s(s),
        .c(c)
);
    

endmodule
