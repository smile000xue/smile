`timescale 1ns / 1ps

module led(
    output reg [7:0] random_number
);

integer seed;

initial begin
    // 初始化随机种子
    $urandom(seed);

    // 生成只有一个位是1的8位随机数
    random_number = 8'b0;
    random_number[$urandom(seed) % 8] = 1;

    // 输出随机数
//    $display("Random Number: %b", random_number);
end

endmodule
