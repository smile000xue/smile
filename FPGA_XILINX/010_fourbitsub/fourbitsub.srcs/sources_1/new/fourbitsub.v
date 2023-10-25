`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 01:56:32
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
input [3:0]x,
input [3:0]y,
output [4:0]s,
output c
    );
    
wire [3:0]w;
    
    
assign w[0]=1^y[0];
assign w[1]=1^y[1];
assign w[2]=1^y[2];
assign w[3]=1^y[3];

fourbitadder f0(x,w,1,s,c);

assign s[4]=~c;

    
endmodule
