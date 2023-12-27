`timescale 1ns / 1ps
 
module m_seq_gen(
	input				       clk,
	input				       reset_n, //ͳһʹ��reset_n ��Ϊ��λ��
	output	reg [1022:0] m_seq,
	output   reg [1087:0] m_seq_long ,//
	output	reg [9:0]    shift_reg
   
);
	reg			  m_end ;
	reg [31:0]    n;         //���в�������n	
	reg [9:0]     POLY ;    //	
	
LedRandom l1(clk,reset_n,data);
 
always@(posedge clk, negedge reset_n)//clk����40MHZ ��
begin
		if(!reset_n)
			 begin		
			shift_reg[9:0] <= 10'b11_1111_1111;
			m_seq          <= 1'b0;
			POLY           <= 10'b0000001001;
			n              <= 32'd0;
			
			m_end          <= 1'b1;
			end
		else 
			if(m_end == 1)
			 begin
				  m_seq_long <={32'b0000_0000_0000_0000_0000_0000_0000_0011,m_seq,1'b0,32'b0111_1111_1111_1111_1111_1111_1111_1111 };
				  shift_reg[9] <= 
								(shift_reg[0] & POLY[0])^
								(shift_reg[1] & POLY[1])^
								(shift_reg[2] & POLY[2])^
								(shift_reg[3] & POLY[3])^
								(shift_reg[4] & POLY[4])^
								(shift_reg[5] & POLY[5])^
								(shift_reg[6] & POLY[6])^
								(shift_reg[7] & POLY[7])^
								(shift_reg[8] & POLY[8])^
								(shift_reg[9] & POLY[9]);//&��λ������ ��Ч�ڼĴ����ͷ���ϵ����^��λ��� ��Ч��ģ���ӷ����㡣
				  shift_reg[8:0] <= shift_reg[9:1] ;
							
				if(n == 1022) //1022����һ�����ڵĽ�����n�������еĲ�������
						begin
							m_seq[n] <= shift_reg[0];
							n        <= 0;
							
							m_end    <= 1'b0;
						end
				else 
						begin
							m_seq[n] <= shift_reg[0];
							n        <= n + 1'b1 ;
						
						end 
				
			end
end
 
endmodule
 