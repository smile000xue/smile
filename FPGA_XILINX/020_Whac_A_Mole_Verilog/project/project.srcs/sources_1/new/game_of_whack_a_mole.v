`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/30 15:13:09
// Design Name: 
// Module Name: game_of_whack_a_mole
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


module game_of_whack_a_mole(
input [7:0]key,
input clk,rst,
output [7:0]led,
output [7:0] seg_com,
output [6:0]seg_data
    );
    
wire [7:0]t1;
wire [7:0]s;
wire [7:0]Key_Flag;
wire [7:0]Key_State;
wire [7:0]key1;
reg [15:0]Counter;
parameter Com=500;
reg [7:0]Tim;

always @(posedge clk) 
begin
    if(!rst&&Counter>=Com)
    Counter<=0;
    else if(!rst&&Counter<Com)
    Counter<=Counter+1;
    else
    Counter<=0;
    
end

always @(posedge clk) 
begin
    if(!rst&&Counter>=Com)
    begin
    Tim<=Tim-1;
    if(Tim<=0)
    begin
    Tim<=8'b00111100;
    end
    end
    else if(rst)
    Tim<=8'b00111100;
end


randomled r1(clk,rst,t1);
keyll k1(clk,rst,key[0],Key_Flag[0],Key_State[0]);
keyll k2(clk,rst,key[1],Key_Flag[1],Key_State[1]);
keyll k3(clk,rst,key[2],Key_Flag[2],Key_State[2]);
keyll k4(clk,rst,key[3],Key_Flag[3],Key_State[3]);
keyll k5(clk,rst,key[4],Key_Flag[4],Key_State[4]);
keyll k6(clk,rst,key[5],Key_Flag[5],Key_State[5]);
keyll k7(clk,rst,key[6],Key_Flag[6],Key_State[6]);
keyll k8(clk,rst,key[7],Key_Flag[7],Key_State[7]);
key k9(Tim,clk,key1[0],key1[1],key1[2],key1[3],key1[4],key1[5],key1[6],key1[7],t1,rst,s);
sevensegment seven1(clk,s,Tim,rst,seg_com, seg_data);

assign led=t1;
assign key1=Key_Flag&(~Key_State);
    
endmodule