#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Write a program that assigns static storage to all the elements
of a double array, and verify that they are all initialized to 0.0.*/

//int main()
//{
//	static double arr[5];
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d]=%.1lf\n", i, arr[i]);
//	}
//
//	return 0;
//}

void put_count(void)
{
	static int a = 0;
	a++;
	printf("put_count:NO.%d\n", a);
}
int main()
{
	put_count();
	put_count();
	put_count();
	put_count();	
	put_count();
	put_count();

	return 0;
}