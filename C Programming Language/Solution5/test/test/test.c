#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//KiKi想判断输入的字符是不是字母，请帮他编程实现
//int main()
//{
//	char num;
//
//	//while((num=getchar())!=EOF)
//	while (scanf("%c", &num) != EOF)
//	//while (scanf(" %c", &num) != EOF)
//	//while(~scanf("%c", &num))//scanf函数返回的成功读取的数的个数，不成功返回EOF(EOF意思是end of file, 本质上是 - 1）
//	//getchar返回的是字符的ASCII码值（整数），getchar在读取结束或者失败的时候，会返回EOF(EOF意思是end of file, 本质上是 - 1）
//	{
//		if ((64 < num && num < 91) || (96 < num && num < 123))
//		{
//			printf("%c is an alphabet.\n", num);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", num);
//		}
//		getchar();
//	}
//
//	return 0;
//}

//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反
//之则转换为大写字母

//int main()
//{
//	char num;
//	while (scanf(" %c", &num) != EOF)
//	{
//		if (num <= 'Z' && num >= 'A')
//		{
//			printf("%c\n", num+32);
//		}
//		else if (num <= 'z' && num >= 'a')
//		{
//			printf("%c\n", num - 32);
//		}
//	}
//
//	return 0;
//}

//KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数，其中一种定义方式
//为:   ,现在试求单位冲激函数在时域t上的值

//int main()
//{
//	int t;
//	while (scanf(" %d", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//}

//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边
//三角形、等腰三角形或普通三角形）

//int main()
//{
//	int sides[3];
//	while (scanf("%d %d %d", &sides[0], &sides[1], &sides[2]) != EOF)
//	{
//		if (sides[0] + sides[1] > sides[2] && sides[2] + sides[1] > sides[0] && sides[0] + sides[2] > sides[1])
//		{
//			if (sides[0] == sides[1] && sides[1] == sides[2])
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (sides[0] == sides[1] || sides[1] == sides[2]|| sides[0] == sides[2])
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}

//我们处理的整数通常用十进制表示，在计算机内存中是以二进制补码形式存储，但通常二进制表示的整
//数比较长，为了便于在程序设计过程中理解和处理数据，通常采用八进制和十六进制，缩短了二进制补
//码表示的整数，但保持了二进制数的表达特点。请输出十进制整数1234对应的八进制和十六进制

//int main()
//{
//	printf("0%o 0X%X", 1234, 1234);
//
//	return 0;
//}
//
////BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少
//
//int main()
//{
//	printf("%15d\n", 0XABCDEF);
//
//	return 0;
//}

//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出

int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);//%4d就是读取4位整数
	printf("year=%d\n", year);
	printf("month=%02d\n", month);//输出不够2位时，左边拿0填充
	printf("date=%02d\n", date);
	return 0;
}

//问题：计算BMI指数（身体质量指数）。BMI指数（即身体质量指数，简称体质指数又称体重，英文为
//Body Mass Index，简称BMI），是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的
//衡量人体胖瘦程度以及是否健康的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重
//对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。


int main()
{
	int weight = 0;
	double height = 0;
	double bmi = 0.0;
	scanf("%d%d", &weight, &height);
	bmi = weight / (height * height / 10000);
	printf("%.2lf\n", bmi);
	return 0;
}