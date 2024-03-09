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


module UART_Sendmultiplebytes(
input clk,rst,
//input send_en,
//input [39:0]senddata,
output uart_state,uart_tx,tx_done
);

wire [39:0]senddata;
wire send_en;
reg [7:0]data;
reg send_go;
reg [2:0]state;
wire tx1_done;
wire test_en;
reg testdely1,testdely2;

always @(posedge clk)
begin
testdely1<=test_en;
testdely2<=testdely1;
end

assign send_en=testdely1&!testdely2;

vio_0 UART_Sendmultiplebytes (
  .clk(clk),                // input wire clk
  .probe_out0(test_en),  // output wire [0 : 0] probe_out0
  .probe_out1(senddata)  // output wire [39 : 0] probe_out1
);
Top_UART_RS232 t1(data,send_go,3'd7,clk,rst,uart_state,uart_tx,tx1_done);

always @(posedge clk or negedge rst)
if(!rst)
begin
    send_go<=0;
    data<=senddata[7:0];
    state<=0;
end
else 
    case(state)
    0:
        if(send_en)
        begin
        data<=senddata[7:0];
        send_go<=1;
        state<=1;
        end
        else
         begin
        send_go<=0;
        data<=senddata[7:0];
        state<=0;
        end
    1:
     if(tx1_done)
        begin
        data<=senddata[15:8];
        send_go<=1;
        state<=2;
        end
        else
         begin
        send_go<=0;
        state<=1;
        data<=data;
        end
     2:
     if(tx1_done)
        begin
        data<=senddata[23:16];
        send_go<=1;
        state<=3;
        end
        else
         begin
        send_go<=0;
        state<=2;
        data<=data;
        end
     3:
     if(tx1_done)
        begin
        data<=senddata[31:24];
        send_go<=1;
        state<=4;
        end
        else
         begin
        send_go<=0;
        state<=3;
        data<=data;     
        end
     4:
     if(tx1_done)
        begin
        data<=senddata[39:32];
        send_go<=1;
        state<=5;
        end
        else
         begin
        send_go<=0;
        state<=4;
        data<=data;
        end
     5:
     if(tx1_done)
        begin
        state<=0;
        data<=0;
        send_go<=0;
        end
        else
         begin
        state<=5;
        data<=data;
        send_go<=0;
        end
        default:
        begin
        data<=senddata[7:0];
        send_go<=0;
        state<=0;
        end
endcase

assign tx_done=tx1_done;



endmodule
   