#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������A��������B����С��������ָ�ܱ�A��B��������С��������ֵ��
//��Ƹ��㷨��������A��B����С��������

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	int c = a > b ? a : b;
	while (c % b != 0 || c % a != 0)
	{
		c++;

	}
	printf("%d", c);


	return 0;
}