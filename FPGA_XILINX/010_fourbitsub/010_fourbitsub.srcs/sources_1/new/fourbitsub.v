`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 00:52:51
// Design Name: 
// Module Name: fourbitsub
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


module fourbitsub(
input [3:0]in1,[3:0]in2,
output [3:0]s,
output c
    );
    
wire [3:0]t;

assign t[0]=1^in2[0];   
assign t[1]=1^in2[1];  
assign t[2]=1^in2[2];  
assign t[3]=1^in2[3];   
    
fourbitadder f1(1,in1,t,s,c);

endmodule
