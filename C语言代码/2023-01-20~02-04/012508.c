#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//ö������
//enum season {�����ģ����};
//enum gender {�У�Ů};
//
//int main()
//{
//	enum season season1=0;
//	switch (season1)
//	{
//	case 0:printf("��");
//	}
//
//	return 0;
//}

//�ݹ麯��
//�����n����ͬ������ȡ��r�������������

//int combination(int n, int r)
//{
//	if (n == r || r == 0)
//		return 1;
//	if (r = 1)
//		return n;
//	else
//		return combination(n - 1, r - 1) + combination(n - 1, r);
//}
//
//int main()
//{
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &n, &r);
//
//	printf("%d",combination(n, r));
//
//	return 0;
//}

//����һ������,ʹ��շת���������������ֵx��y�����Լ��

//int gcd(int a, int  b)
//{
//	if (a > b)
//	{
//		while(a % b)
//		{
//			int c = a;
//			a = b;
//			b = c % b;
//		}
//		return b;
//	}
//	else
//	{
//		while (b % a)
//		{
//			int c = b;
//			b = a;
//			a = c % a;
//		}
//		return a;
//
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("x��y�����Լ��:%d",gcd(a, b));
//
//	return 0;
//}

//��ϰ8 - 10��д�����嵥8 - 10�ĳ���, �������ַ��ĳ��ִ����ò��ŵ�* ��ʾ��

//int main()
//{
//	int count[10] = { 0 };
//	char ch = 0;
//
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch >= '0' && ch <= '9')
//			count[ch - '0']++;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�ַ�%d:", i);
//		int j = 0;
//		for (j = 0; j < count[i]; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������

//int main()
//{
//	char a = 3;//00000003
//	char b = 127;//01111111
//	char c = a + b;//00000000000000000000000000000011
//				   //00000000000000000000000001111111
//				   //00000000000000000000000010000010
//				   //10000010
//	printf("%d", c);
//	//1111111111111111111111111111111110000010 -����
//	//1111111111111111111111111111111110000001 -����
//	//1000000000000000000000000000000001111110 =ԭ��
//	return 0;
//}

////��������
//
//int main()
//{
//	char a = 3;//00000011
//	char b = 128;//10000000
//	char c = a + b;//00000000000000000000000000000011
//				   //00000000000000000000000010000000
//				   //00000000000000000000000010000011
//	               //10000011
//	printf("%d", c);
//	//1111111111111111111111111111111110000011 -����
//	//1111111111111111111111111111111110000010 -����
//	//1000000000000000000000000000000001111101 =ԭ��
//	return 0;
//}

//char����������

//int main()
//{
//	char a = -1;
//	//11111111111111111111111111111111
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//
//	printf("%d,%d,%d\n", a, b, c);
//	//11111111111111111111111111111111 -a
//	//11111111111111111111111111111111 -b
//	//00000000000000000000000011111111 -c
//
//	printf("%u,%u,%u\n", a, b, c);
//	//11111111111111111111111111111111 -a
//	//11111111111111111111111111111111 -b
//	//00000000000000000000000011111111 -c
//
//	return 0;
//}


//�������ڴ��еĴ洢

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//11111111111111111111111110000000
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//  
//	return 0;
//}


//unsigned int i;
//for (i = 9; i >= 0; i--)
//{
//	printf("%u\n", i);
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}