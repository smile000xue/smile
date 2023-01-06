#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int estimate(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (key == arr[mid])
		{
			return mid;
		}
		else if (key < arr[mid])
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 100;
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int a=estimate(arr, key, sz);
	if ( a== 0)
	{
		printf("没找到"); 
	}
	else
	{
		printf("找到了,下标是%d",a);
	}
	return 0;
}