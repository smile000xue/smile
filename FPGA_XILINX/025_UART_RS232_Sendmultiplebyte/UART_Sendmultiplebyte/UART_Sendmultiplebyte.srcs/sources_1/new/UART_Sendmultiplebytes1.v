`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/01/02 01:16:13
// Design Name: 
// Module Name: UART_Sendmultiplebytes
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


module UART_Sendmultiplebytes1(
input clk,rst,
//input send_en,
//input [79:0]senddata,
output uart_state,uart_tx,tx_done
);

wire [79:0]senddata;
wire send_en;
reg [7:0]data;
reg send_go;
reg [2:0]state;
wire tx1_done;
wire test_en;
reg testdely1,testdely2;
reg [7:0]readposi;

parameter bytenum=10;

always @(posedge clk)
begin
testdely1<=test_en;
testdely2<=testdely1;
end

assign send_en=testdely1&!testdely2;

vio_0 UART_Sendmultiplebytes1 (
  .clk(clk),                // input wire clk
  .probe_out0(test_en),  // output wire [0 : 0] probe_out0
  .probe_out1(senddata)  // output wire [79 : 0] probe_out1
);
Top_UART_RS232 t1(data,send_go,3'd7,clk,rst,uart_state,uart_tx,tx1_done);

always @(posedge clk or negedge rst)
if(!rst)
begin
    send_go<=0;
    state<=0;
    readposi<=0;
end
else 
    case(state)
    0:
if(send_en)
        begin        
        readposi<=readposi+1;
        send_go<=1;
        state<=1;
        end
else
         begin
        send_go<=0;
        state<=0;
        readposi<=0;
        end
    1:
if(tx1_done)
        begin
        if(readposi==bytenum)
        begin
        send_go<=0;
        state<=0;
        readposi<=0;
        end
        else
        begin 
        readposi<=readposi+1;
        send_go<=1;
        state<=1;
        end
        end
else
        begin
        send_go<=0;
        state<=1;
        readposi<=readposi;
        end
default:
        begin
        send_go<=0;
        state<=0;
        readposi<=0;
        end
endcase  

always @(*)
case(readposi)
   1:data<=senddata[7:0];
   2:data<=senddata[15:8];
   3:data<=senddata[23:16];
   4:data<=senddata[31:24];
   5:data<=senddata[39:32];
   6:data<=senddata[47:40];
   7:data<=senddata[55:48];
   8:data<=senddata[63:56];
   9:data<=senddata[71:64];
   10:data<=senddata[79:72];
    default:data<=0;
endcase

assign tx_done=tx1_done;

endmodule
   