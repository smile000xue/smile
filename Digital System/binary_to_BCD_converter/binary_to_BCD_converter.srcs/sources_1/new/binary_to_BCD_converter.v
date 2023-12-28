`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/26 17:25:47
// Design Name: 
// Module Name: binary_to_BCD_converter
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


module binary_to_BCD_converter(
input [4-1:0] bin, output reg[8-1:0] bcd
 
    );
    integer index;
    always @ (*) begin
    bcd=8'd0;
    for(index=3; index>=0 ; index = index - 1) begin
    if(bcd[3:0]> 4'b0100) bcd[3:0]= bcd[3:0] + 4'b0011;
    bcd[7:0] = bcd[7:0]<< 1;
    bcd[0]= bin[index];
    
    
    
    
    end
  end
    
endmodule
