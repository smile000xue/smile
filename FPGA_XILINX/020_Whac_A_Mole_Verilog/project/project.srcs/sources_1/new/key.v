`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/30 15:07:00
// Design Name: 
// Module Name: key
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


module key(
input [7:0]Tim,
input clk,
input key0,key1,key2,key3,key4,key5,key6,key7,
input [7:0]led,
input rst,
output reg [7:0]out
    );

//initial out<=0;

   
always@(posedge clk or posedge rst)
begin
if(rst)
    out<=0;
else  if(Tim<=0)
    out<=0;
else if(key0||key1||key2||key3||key4||key5||key6||key7)
begin
if((key0&&(key0==led[0]))||(key1&&(key1==led[1]))||(key2&&(key2==led[2]))||(key3&&(key3==led[3]))||(key4&&(key4==led[4]))||(key5&&(key5==led[5]))||(key6&&(key6==led[6]))||(key7&&(key7==led[7])))
    begin
    out<=1+out;
    if(out>99)
    out<=0;
    end
else
    out<=out;
end

end  
endmodule
