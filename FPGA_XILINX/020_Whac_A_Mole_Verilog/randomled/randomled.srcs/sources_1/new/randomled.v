`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/23 17:35:09
// Design Name: 
// Module Name: randomled
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


module randomled(
    input clk,rst,
    output reg [7:0] out_data
);

reg [9:0]t1;
reg  [2:0]index;
parameter Counter=400;
wire      [31:0]   data;



LedRandom l1(clk,rst,data);

always @(posedge clk or posedge rst) 
begin
    if(rst)
    t1<=0;
    else if(t1>=Counter)
    t1<=0;
    else
    t1<=t1+1;
end

always @(posedge clk or posedge rst) 
begin
    if(rst)
    out_data<=0;
    else if(t1==Counter)
    begin
    out_data<= 0;
    index<=data%8;
    out_data[index] <= 1;
    end
end

endmodule
