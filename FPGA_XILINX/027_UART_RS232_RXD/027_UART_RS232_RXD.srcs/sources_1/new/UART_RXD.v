`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/03 23:22:56
// Design Name: 
// Module Name: UART_RXD
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


module UART_RXD(
input clk,rst,
input uart_rx,
input [2:0]band_set,
output reg [7:0]data,
output reg rx_done
    );
reg uart_rx_sync1,uart_rx_sync2;
reg uart_rx_reg1,uart_rx_reg2;
wire uart_rx_negedge;
reg [15:0]bps_DR;
reg [15:0]counter;
reg bps_clk;
reg [7:0]bps_cnt_q;
reg rx_start;
reg STOP_BIT;
reg START_BIT;
reg[7:0]data_reg;

always @(posedge clk or negedge rst)
if(!rst)
    begin
    uart_rx_sync1<=1;
    uart_rx_sync2<=1;
    end
else
	 begin
    uart_rx_sync1<=uart_rx;
    uart_rx_sync2<=uart_rx_sync1;
    end
	
always @(posedge clk or negedge rst)
if(!rst)
    begin
    uart_rx_reg1<=1;
    uart_rx_reg2<=1;
    end
else
	 begin
    uart_rx_reg1<=uart_rx_sync2;
    uart_rx_reg2<=uart_rx_reg1;
    end
	
assign uart_rx_negedge=!uart_rx_reg1&uart_rx_reg2;

always @(*)
    case(band_set)
       3'd0:bps_DR=16'd41665/16;
       3'd1:bps_DR=16'd20832/16;
       3'd2:bps_DR=16'd10415/16;
       3'd3:bps_DR=16'd325;
       3'd4:bps_DR=16'd2603/16;
       3'd5:bps_DR=16'd1301/16;
       3'd6:bps_DR=16'd867/16;
       3'd7:bps_DR=16'd433/16;
        default: bps_DR=16'd5207/16;
    endcase
 
always @(posedge clk or negedge rst)
if(!rst)
    counter<=0;
else if(counter==bps_DR)
    counter<=0;
else
 begin
    if(rx_start)
        counter<=counter+1;
    else
        counter<=0;
end
 
 always @(posedge clk or negedge rst)
if(!rst)
    bps_clk<=0;
else if(counter==1)
    bps_clk<=1;
else
    bps_clk<=0;
    
always @(posedge clk or negedge rst)
if(!rst)
    begin
    bps_cnt_q<=0;
	rx_done<=0;
    end
else if(bps_clk==1'd1)
begin
bps_cnt_q<=bps_cnt_q+1;
    if(bps_cnt_q==8'd159)
		begin
        bps_cnt_q<=0;
		rx_done<=1;
		end
end
else
begin
    bps_cnt_q<=bps_cnt_q;
	rx_done<=0;
end

always @(posedge clk or negedge rst)
if(!rst)
	rx_start<=0;
else if(uart_rx_negedge)
	rx_start<=1;
else if(rx_done)
	rx_start<=0;
else
	rx_start<=rx_start;
	
always@(posedge clk or negedge rst)
if(!rst)
begin
	data_reg<=0;
	START_BIT<=0;
	STOP_BIT<=0;
end
else if(bps_clk)
case(bps_cnt_q)
    8:START_BIT<=uart_rx_sync2;
    24:data_reg[0]<=uart_rx_sync2;
    40:data_reg[1]<=uart_rx_sync2;
    56:data_reg[2]<=uart_rx_sync2;
    72:data_reg[3]<=uart_rx_sync2;
    88:data_reg[4]<=uart_rx_sync2;
    104:data_reg[5]<=uart_rx_sync2;
    120:data_reg[6]<=uart_rx_sync2;
    136:data_reg[7]<=uart_rx_sync2;
    152:STOP_BIT<=uart_rx_sync2;
    default:START_BIT<=uart_rx_sync2;
endcase


always@(posedge clk or negedge rst)
if(!rst)
	data<=0;
else if(rx_done)
    data<=data_reg;
 else
    data<=data;
	
    
endmodule
