`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/23 18:09:11
// Design Name: 
// Module Name: key_tb
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


module key_tb();

reg [7:0]key,led;
wire [9:0]counter;

key k1(key,led,counter);

initial
begin
led<=8'b0000_0000;key<=8'b0000_0000;
#10 led<=8'b0000_1000;key<=8'b0000_1000;
#10 led<=8'b0000_0010;key<=8'b0000_0010;
#10 led<=8'b0000_0001;key<=8'b0000_0001;
end

endmodule
