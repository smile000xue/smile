`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/16 23:45:22
// Design Name: 
// Module Name: decoder2_4_tb
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


module decoder2_4_tb();

reg a,b;
wire w,x,y,z;


initial 
    begin
         a<=0;b<=0;
       #10  a<=1;b<=0;
       #10  a<=0;b<=1;
       #10  a<=1;b<=1;
        
    end

always #10 a <={$random} % 2;
always #10 b <={$random} % 2;

decoder2_4 decoder2_4_tb(
    .a(a),
    .b(b),
    .w(w),
    .x(x),
    .y(y),
    .z(z)

);


endmodule
