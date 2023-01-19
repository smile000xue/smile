#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("%15d", 0xABCDEF);
//
//	return 0;
//}

//针对每行输入，输出该字符是字母（YES）或不是（NO）

//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        if ((65 <= a && a <= 90) ||( 97 <= a && a <= 122))
//        {
//            printf("YES\n");
//            getchar();
//
//        }
//        else
//        {
//            printf("NO\n");
//            getchar();
//
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        if (isalpha(a))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//
//    }
//
//    return 0;
//}

//转换输出题目中给出的所有ASCII到对应的字符

//int main()
//{
//    char a[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    for (int i = 0; i < 12; i++)
//    {
//        printf("%c", a[i]);
//    }
//    printf("\n");
//
//    int b[] = { 'A','C','G','f','w','r' };
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", b[i]);
//    }
//    return 0;
//}

//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int year = a / 10000;
//	int month = a / 100-year*100;
//	int day = a - (a / 100) * 100;
//
//	printf("year=%d\n", year);
//	if (month > 9)
//	{
//		printf("month=%d\n", month);
//
//	}
//	else
//	{
//		printf("month=0%d\n", month);
//
//	}
//	if (day > 9)
//	{
//		printf("date=%d\n",day);
//
//	}
//	else
//	{
//		printf("date=0%d\n",day);
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("%d\n", year);
//	printf("%02d\n", month);
//	printf("%02d\n", date);
//
//	return 0;
//}

//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算

//int main()
//{
//	int a = 0;
//
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n", 1<<a);
//	}
//
//	return 0;
//}

//输入两个整数，范围 - 231~231 - 1，交换两个数并输出
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//输入一个字符，输出该字符相应的ASCII码

//int main()
//{
//	char a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		printf("%d\n", a);
//		getchar();
//	}
//
//	return 0;
//}

//请计算表达式“(-8 + 22)×a - 10 + c÷2”，其中，a = 40，c = 212

//int main()
//{
//	int a = 40; 
//	int c = 212;
//	printf("%d", (-8 + 22)*a - 10 + c/2);
//
//	return 0;
//}

//给定两个整数a和b(－10, 000 < a, b < 10, 000)，计算a除以b的整数商和余数

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	printf("%d %d", a / b, a % b);
	

	return 0;
}