`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/01 17:46:32
// Design Name: 
// Module Name: UART_Sendonebyte
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


module UART_Sendonebyte(
input clk,rst,
output uart_state,uart_tx,tx_done
    );
    
reg [7:0]data;
reg send_go;

wire tx_done1;

Top_UART_RS232 t1(data,send_go,3'd3,clk,rst,uart_state,uart_tx,tx_done1);

 reg [31:0]counter;
 
always @(posedge clk or negedge rst)
if(!rst)
    counter<=0;
else if(counter==32'd50_000_000)
    counter<=0;
else
    counter<=counter+1;

always @(posedge clk or negedge rst)
if(!rst)
    send_go<=0;
else if(counter==1'd1)
    send_go<=1;
else
    send_go<=0;
    
always @(posedge clk or negedge rst)
if(!rst)
    data<=0;
else if(tx_done1==1)
    data<=data+1;
else
    data<=data;
    
assign tx_done=tx_done1;

endmodule
