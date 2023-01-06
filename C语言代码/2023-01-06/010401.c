#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void add(int n)
//{
//	printf("µÚ%d´Î\n", n+1);
//}
//int main()
//{
//	int n=0;
//	add(n);
//	n++;
//
//	add(n);
//	n++;
//
//	add(n);
//	n++;
//
//
//	return 0;
//}

void add(int*p)
{
	(*p)++;
}

int main()
{
	int a = 0;
	add(&a);
	printf("%d\n", a);

	add(&a);
	printf("%d\n", a);

	add(&a);
	printf("%d\n", a);

	return 0;
}