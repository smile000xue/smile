`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/25 22:02:21
// Design Name: 
// Module Name: counter4
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


module counter4(
input a,b,
output reg [3:0] out
    );

always@(posedge a or posedge b) 

begin
    if(b==1'b1)
        out<=0;
    else if(a==1'b1)
        out<=out+1;
    else
        out<=4'b0000;
         
end       
        
    
endmodule
