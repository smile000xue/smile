//#include <stdio.h>
//
//int cube(int a)
//{
//	return a*a*a;
//}
//int mian(void)
//{
//	int a;
//	printf("Please enter an integer:");
//	scanf("%d", &a);
//	printf("The cube of the number is %d", cube(a));
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 返回x的立方 */
int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x;
    printf("请输入一个数："); scanf("%d", &x);

    printf("%d的立方是%d", x, cube(x));

    return 0;
}
