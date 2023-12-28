    `timescale 1ns / 1ps
    //////////////////////////////////////////////////////////////////////////////////
    // Company: 
    // Engineer: 
    // 
    // Create Date: 2023/09/26 17:55:58
    // Design Name: 
    // Module Name: binary_to-BCD_converter_tb
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
    
    
    module binary_to_BCD_converter_tb;
    
        reg [4-1:0] input_;
        wire[8-1:0] output_;
    
        binary_to_BCD_converter dd(.bin(input_), .bcd(output_));
        
        initial begin
        
                input_ =4'b0000;
            #10 input_ =4'b0001;
            #10 input_ =4'b0010;
            #10 input_ =4'b0011;
            #10 input_ =4'b0100;
            #10 input_ =4'b0101;
            #10 input_ =4'b0110;
            #10 input_ =4'b0111;
            #10 input_ =4'b1000;
            #10 input_ =4'b1001;
            #10 input_ =4'b1010;
            #10 input_ =4'b1011;
            #10 input_ =4'b1100;
            #10 input_ =4'b1101;
            #10 input_ =4'b1110;
            #10 input_ =4'b1111;
            
        end
    endmodule
