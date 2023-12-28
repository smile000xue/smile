`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 17:35:30
// Design Name: 
// Module Name: fourbit_sub_tb
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


module fourbit_sub_tb();
reg [3:0] in1; 
reg[3:0] in2;

wire [3:0] out;
wire cout; 

fourbit_sub four(in1,in2,out,cout);

initial
begin
    in1<=4'b0010;in2<=4'b0001;
   #10 in1<=4'b0010;in2<=4'b0001;
   #10 in1<=4'b0100;in2<=4'b0001;
   #10 in1<=4'b0010;in2<=4'b0100; 
   #10 in1<=4'b0000;in2<=4'b0001;
   #10 in1<=4'b0110;in2<=4'b0001;
     

end
endmodule
