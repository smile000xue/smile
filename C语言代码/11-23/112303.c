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

/* ����x������ */
int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x;
    printf("������һ������"); scanf("%d", &x);

    printf("%d��������%d", x, cube(x));

    return 0;
}
