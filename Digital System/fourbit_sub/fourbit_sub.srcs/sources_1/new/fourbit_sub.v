`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 17:20:05
// Design Name: 
// Module Name: fourbit_sub
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


module fourbit_sub(
input [3:0] in1, [3:0] in2,

output [3:0] out,cout
    );
    
wire [3:0] t;
//assign cin=1'b1;

assign t[0]=1^in2[0];
assign t[1]=1^in2[1];
assign t[2]=1^in2[2];
assign t[3]=1^in2[3];

fouradder foursub(in1,t,1,out,cout);

endmodule
