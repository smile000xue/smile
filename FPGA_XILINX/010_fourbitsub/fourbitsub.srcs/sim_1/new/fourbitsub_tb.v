`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/06 18:31:04
// Design Name: 
// Module Name: fourbitsub_tb
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


module fourbitsub_tb();

reg [3:0]x;
reg [3:0]y;
wire [4:0]s;
wire c;

fourbitsub sub(x,y,s,c);

initial begin
    x<=4'b0111;y<=4'b1010;
    #10 x<=4'b0001;y<=4'b1010;
    #10 x<=4'b1011;y<=4'b0010;
    #10 x<=4'b0001;y<=4'b1110;
    #10 x<=4'b0001;y<=4'b1111;
    #10 x<=4'b0000;y<=4'b0000;
    
end

always #10 x<={$random}%16;

always #10 y<={$random}%16;


endmodule
