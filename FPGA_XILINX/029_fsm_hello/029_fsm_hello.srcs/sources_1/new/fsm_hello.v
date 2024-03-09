`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/03/08 17:35:46
// Design Name: 
// Module Name: fsm_hello
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


module fsm_hello(
input clk,rst,
input [7:0]data_in,
input data_valid,
output reg check_ok
    );
    
reg [4:0]state; 

always@(posedge clk or negedge rst)
if(!rst)
begin
    state<=5'b00001;
    check_ok<=0;
end
else
case(state)
    5'b00001:
    if(data_valid&&data_in=="h")
    begin
    state<=5'b00010;
    end
    else if(data_valid)
    begin
    state<=5'b00001;
    check_ok<=0;
    end
    else
    state<=5'b00001;
    
    5'b00010:
    if(data_valid&&data_in=="e")
    state<=5'b00100;
    else if(data_valid&&data_in=="h")
    begin
    state<=5'b00010;
    check_ok<=0;
    end
    else if(data_valid)
     begin
    state<=5'b00001;
    check_ok<=0;
    end
    else
    state<=state;
     5'b00100:
    if(data_valid&&data_in=="l")
    state<=5'b01000;
    else if(data_valid&&data_in=="h")
     begin
    state<=5'b00010;
    check_ok<=0;
    end
    else if(data_valid)
    begin
    state<=5'b00001;
    check_ok<=0;
    end
    else
    state<=state;
     5'b01000:
    if(data_valid&&data_in=="l")
    state<=5'b10000;
    else if(data_valid&&data_in=="h")
    begin
    state<=5'b00010;
    check_ok<=0;
    end
    else if(data_valid)
    begin
    state<=5'b00001;
    check_ok<=0;
    end
    else
    state<=state;
    5'b10000:
    if(data_valid&&data_in=="o")
    begin
    state<=5'b00001;
    check_ok<=1;
    end
    else if(data_valid&&data_in=="h")
   begin
    state<=5'b00010;
    check_ok<=0;
    end
    else if(data_valid)
    begin
    state<=5'b00001;
    check_ok<=0;
    end
    else
    state<=state;
    default:
    begin
    state<=5'b00001;
    check_ok<=0;
    end
endcase
    
endmodule
