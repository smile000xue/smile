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

reg [15:0]t1;
reg  [2:0]index;
parameter Counter=1000;
//integer seed;

//initial
//begin
//seed = $get_initial_random_seed();
//end

always @(posedge clk or posedge rst) begin
    if(rst)
    begin
    t1<=0;
    out_data <= 8'b00000000; 
    end
    else if(t1>=Counter)
    begin
    index <= {$random}%8;
    out_data[index] <= 1;
    t1<=0;
    end
    else
    t1=t1+1;
end


endmodule
