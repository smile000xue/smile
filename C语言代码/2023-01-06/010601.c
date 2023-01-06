#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5

void enter(int arr[],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]=", i + 1);
		scanf("%d", &arr[i]);
	}
}

int minmum( const int arr[], int n)
{
	int min = arr[0];
	int i = 1;
	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	int arr[NUMBER] = { 0 };


	enter(arr,NUMBER);

	int ret=minmum(arr, NUMBER);
	printf("The minmum is %d\n", ret); 

	return 0;
}