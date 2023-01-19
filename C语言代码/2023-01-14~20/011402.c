#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int atm = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = atm;
//	}
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

void reverse(int arr[], int sz)
{
	static int count = 0;
	int left = 0+count;
	int right = sz - 1-count;
	int tmp = 0;

	count++;

	while (count<sz/2)
	{
		reverse(arr, sz);
	}
	tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,10,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print(arr, sz);

	reverse(arr, sz);
	print(arr, sz);

	init(arr, sz);
	print(arr, sz);


	return 0;
}