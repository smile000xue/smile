#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Maxsize 16

void QuickSort(int arr[], int low, int high);
int exchange(int arr[], int low, int high);
void PrintSort(int arr[], int length);

int main()
{	
	int arr[Maxsize] = {0};//store the entered numbers

	int i = 0;
	printf("Please enter the numbers to be sorted (up to 16 and end with 0):");
	scanf("%d", &arr[i]);//Enter the the numbers to be sorted,end with 0
	while (i < 15 && arr[i] != 0)
	{
		scanf("%d", &arr[++i]);
	}
	if (arr[i] == 0)
	{
		i--;
	}

	QuickSort(arr,0, i);//sort the array
	
	PrintSort(arr, i);//print the sorted array

	return 0;
}

//recursionly call the QuickSort function to sort the array
void QuickSort(int arr[], int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = exchange(arr, low, high);

		QuickSort(arr, low, --pivot);

		pivot += 2;
		QuickSort(arr, pivot, high);
	}
}

//choose the arr[low] as a pivot,compare the other elements with the pivot
// divide the array into two parts: the left side of the pivot, where elements are smaller than the pivot
// and the right side, where elements are larger than or equal to the pivot
//average time complexity T(n)=O(nlogn)
int exchange(int arr[], int low, int high)
{
	int tmp = arr[low];
	while (low < high)
	{
		while (low < high && tmp <= arr[high])	high--;
		arr[low] = arr[high];
		while (low < high && tmp > arr[low])		low++;
		arr[high] = arr[low];
	}
	arr[low] = tmp;

	return low;
}

//print the sorted array
void PrintSort(int arr[], int length)
{
	int i;
	for (i = 0; i <= length; i++)
	{
		printf("%d ", arr[i]);
	}
}