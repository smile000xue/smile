#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a = 1;

void test()
{
	int a = 2;//���´���һ����ͬ���ֵı������ֲ����ȣ�
	//a = 3;//��ȫ�ֱ�����ֵ
	a += 1;
}

int main()
{
	test();
	printf("%d\n", a);
	return 0;
}