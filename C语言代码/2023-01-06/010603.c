#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 10

int search_idx(const int v[], int idx[], int key, int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (key == v[i])
		{
			idx[count] = i;
			count++;
		}
	}
	return count;
}

int main()
{
	int v[NUMBER] = { 0 };
	int idx[NUMBER] = { 0 };
	int key = 0;
	
	int i = 0;
	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	printf("key=");
	scanf("%d", &key);

	int ret=search_idx(v, idx, key, NUMBER);
	printf("There are %d numbers equal to %d in the array v\n", ret,key);

	printf("idx[%d]={",ret);
	for (i = 0; i < ret; i++)
	{
		printf("%d ",idx[i]);
	}
	printf("}");



	return 0;
}