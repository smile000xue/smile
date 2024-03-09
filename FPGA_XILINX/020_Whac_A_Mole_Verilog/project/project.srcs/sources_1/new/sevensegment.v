module sevensegment
(
input CLK,
input [7:0]data,
input [7:0]time1,
input N_Reset,
output [7:0]SEG_COM, 
output [6:0]SEG_DATA
);

wire dat9,dat8,dat7,dat6,dat5,dat4,dat3,dat2,dat1,dat0;
wire T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
wire A1,B1,C1,D1,E1,F1,G1,A2,B2,C2,D2,E2,F2,G2;
wire A3,B3,C3,D3,E3,F3,G3;
wire A4,B4,C4,D4,E4,F4,G4;
wire A5,B5,C5,D5,E5,F5,G5;

// calling out 'binary_to_BCD' module
binary_bcd(data,{dat9,dat8,dat7,dat6,dat5,dat4,dat3,dat2,dat1,dat0});
binary_bcd(time1,{T9,T8,T7,T6,T5,T4,T3,T2,T1,T0});

// calling out 'BCD_to_7segment' module
BCD_to_7segment u2(dat3,dat2,dat1,dat0, A1,B1,C1,D1,E1,F1,G1);
BCD_to_7segment u3(dat7,dat6,dat5,dat4, A2,B2,C2,D2,E2,F2,G2);
BCD_to_7segment u4(0,0,dat9,dat8,A3,B3,C3,D3,E3,F3,G3);

BCD_to_7segment u5(T3,T2,T1,T0, A4,B4,C4,D4,E4,F4,G4);
BCD_to_7segment u6(T7,T6,T5,T4, A5,B5,C5,D5,E5,F5,G5);

// calling out 'SevenSeg_CTRL' module

SevenSeg_CTRL u7(CLK, N_Reset, {A1,B1,C1,D1,E1,F1,G1},{A2,B2,C2,D2,E2,F2,G2},{A3,B3,C3,D3,E3,F3,G3},7'b1111110,7'b1111110,7'b1111110,{A4,B4,C4,D4,E4,F4,G4},{A5,B5,C5,D5,E5,F5,G5},
SEG_COM, SEG_DATA);

endmodule
