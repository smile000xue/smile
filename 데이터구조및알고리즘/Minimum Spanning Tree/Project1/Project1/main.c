#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min[100] = { 0 };
int w[100][100] = { 0 };



int main()
{
	int n, m;
	int a=0, b=0,num;
	scanf(" %d%d", &n, &m);
	while (m--)
	{
		scanf(" %d %d %d", &a, &b, &num);
		w[a][b] = num;
	}

	return 0;
}