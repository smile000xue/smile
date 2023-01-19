#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//请定义一个函数式宏diff(x, y), 返回x、y二值之差
// 
//#define diff(x,y) ((x)-(y))
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d", diff(x, y));
//	return 0;
//}

//而下面两个使用了该宏的表达式的功能为计算 a、b、c、d中的最大值

//#define max(x,y) (((x)>(y))? (x):(y))
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", max(max(a, b), max(c, d)));
//	printf("%d\n", max(max(max(a, b), c), d));
//
//	return 0;
//}

//请定义一个函数式宏 swap(type, a, b)以使type型的两值互换

//#define swap(a,b) ((a)=(a)^(b),(b)=(a)^(b),(a)=(a)^(b))

#define swap(a,b) ((a)=(a)+(b),(b)=(a)-(b),(a)=(a)-(b))

int main()
{
	int a = 0;
	int b = 10;
	
	swap(a, b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
