#define _CRT_SECURE_NO_WARNINGS

//bubble sort 

#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
	/*int count = 0;
	int a = sz;
	while (--a)
	{
		int i = 0;
		int tmp = 0;
		for (i = 0; i < sz -1 - count; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		count++;
	}*/

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int tmp = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}

int main()
{
	int arr[10] = { 10,9,80,7,600,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);

	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
