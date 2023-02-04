#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a = 1;

void test()
{
	int a = 2;//重新创建一个相同名字的变量，局部优先；
	//a = 3;//给全局变量赋值
	a += 1;
}

int main()
{
	test();
	printf("%d\n", a);
	return 0;
}