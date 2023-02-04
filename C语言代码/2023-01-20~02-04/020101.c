#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//unsigned char:0-255
//	unsigned char a = 200;//11001000
//	unsigned char b = 100;//01100100
//	unsigned char c = 0;  //00000000
//
//	//a和b整形提升
//	c = a + b;
//	//00000000000000000000000011001000 -a
//	//00000000000000000000000001100100 -b
//	//                        00101100 -c
//	//00000000000000000000000100101100 -a+b
//	printf("%d %d", a + b, c);
//	//a+b:300   c:44
//
//	return 0;
//}

//大端存储：数据的低位存入高地址，高位存入低地址
//小端存储：数据的低位存入低地址，高位存入高地址


//int main()
//{
//	unsigned int a = 0x1234;
//	//0x 00 00 12 34
//	//大端：00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//	//b：0x 00
//	//在32位大端模式处理器上变量b等于（）
//
//	return 0;
//}

//打印杨辉三角

//int main()
//{
//	int arr[10][10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
//
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 10-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//猜凶手

//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c", killer);
//	}
//
//	return 0;
//}

//猜名次

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if(A*B*C*D*E==120)
							if (((B == 2) + (A == 3)) == 1)
								if (((B == 2) + (E == 4)) == 1)
									if (((C == 1) + (D == 2)) == 1)
										if (((C == 5) + (D == 3)) == 1)
											if (((E == 4) + (A == 1)) == 1)
												printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
					

					}
				}
			}
		}
	}



	return 0;
}