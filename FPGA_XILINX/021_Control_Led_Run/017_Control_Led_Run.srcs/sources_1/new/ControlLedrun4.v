`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/27 22:18:54
// Design Name: 
// Module Name: ControlLedrun
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 4.	��LED�ư���ָ��������ģʽ��������ģʽδ֪�����û����ָ����8���仯״̬Ϊһ��ѭ����ÿ���仯״̬��ʱ��ֵ���Ը��ݲ�ͬ��Ӧ�ó���ѡ��
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ControlLedrun4(
input clk,rst,
input [7:0]key,
input [31:0]Time,
output reg led
    );
    
reg [31:0]counter;
//parameter compare =100_000_000;
    
always @(posedge clk or negedge rst)
begin
if(!rst)
counter<=0;
else if(counter==Time)
counter <=0;
else
counter<=counter+1;
end

reg [2:0]sel;
always @(posedge clk or negedge rst)
begin
if(!rst)
sel<=0;
else if(counter==Time)
sel<=sel+1;
end

always @(posedge clk or negedge rst)
if(!rst)
led<=0;
else
begin
case(sel)
3'd0:led<=key[0];
3'd1:led<=key[1];
3'd2:led<=key[2];
3'd3:led<=key[3];
3'd4:led<=key[4];
3'd5:led<=key[5];
3'd6:led<=key[6];
3'd7:led<=key[7];
default:led<=0;
endcase
end

endmodule
