`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/13 02:50:29
// Design Name: 
// Module Name: PIEZO_tb
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


module PIEZO_tb();

reg clk,reset;
reg pwm_en;
reg [7:0]key;
wire pwm_out;
    
 
    
PIEZO p1(clk,reset,pwm_en,key,pwm_out);

initial begin
clk<=0;reset<=0;pwm_en<=0;key<=8'b0000_0001;
#10 clk<=0;reset<=1;pwm_en<=0;key<=8'b0000_0001;
#10 clk<=0;reset<=0;pwm_en<=1;key<=8'b0000_0001;
#10 clk<=1;reset<=0;pwm_en<=1;key<=8'b0000_0001;
#10 clk<=0;reset<=0;pwm_en<=1;key<=8'b0000_0001;
#10 clk<=1;reset<=0;pwm_en<=1;key<=8'b0000_0001;

end  
always #10 clk=~clk;
    
    
endmodule
