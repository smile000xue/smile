`timescale 1ns / 1ps

module led(
    output reg [7:0] random_number
);

integer seed;

initial begin
    // ��ʼ���������
    $urandom(seed);

    // ����ֻ��һ��λ��1��8λ�����
    random_number = 8'b0;
    random_number[$urandom(seed) % 8] = 1;

    // ��������
//    $display("Random Number: %b", random_number);
end

endmodule
