`timescale 1ns / 1ps

module decoder2to4(
a, b, w, x, y, z
    );
    
    input a, b;
    output w, x, y, z;
    
    assign w = (~a) & (~b);
    assign x = (~a) & b;
    assign y = a & (~b);
    assign z = a & b;
    
endmodule
