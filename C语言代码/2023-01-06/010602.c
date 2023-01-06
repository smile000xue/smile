#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 3

void enter(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]=", i + 1);
		scanf("%d", &arr[i]);
	}
}

void rev(int arr[], int n)
{
	int i = 0;
	int tem = 0;
	for (i = 0; i<n/2; i++)
	{
		tem = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tem;
	}
}

void print(const int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i + 1,arr[i]);

	}
}

int main()
{
	int arr[NUMBER] = { 0 };

	enter(arr, NUMBER);
	printf("\n");

	printf("Before change:\n");
	print(arr, NUMBER);

	rev(arr, NUMBER);

	printf("After change:\n");
	print(arr, NUMBER);

	return 0;
}