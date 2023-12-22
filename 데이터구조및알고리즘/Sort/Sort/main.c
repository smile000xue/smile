#include <stdio.h>
#include <malloc.h>
#define Maxsize 9

typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode,* LinkNodeP;

typedef struct LinkQueue
{
	LinkNodeP first,rear;
}LinkQueue, * LinkQueueP;

int arr1[Maxsize];

void InsertSort(int arr[], int length);
void ShellSort(int arr[], int length);
void BubbleSort(int arr[], int length);
void swap(int* a, int* b);
void QuickSort(int arr[], int low, int high);
int exchange(int arr[], int low, int high);
void SelectSort(int arr[], int length);
void HeapSort(int arr[], int length);
void Max_Heap(int array[], int length);
void Heapify(int array[], int i, int length);
void RadixSort(int arr[], int length);
void InitiLinkQueue(LinkQueueP L);
void EnLinkQueue(LinkQueueP L, int key, int num);
void DeLinkQueue(LinkQueueP L, int arr[]);
void MergeSort(int arr[], int length);
void Sort(int arr[], int low, int high);
void Merge(int arr[], int low, int middle, int high);
void PrintSort(int arr[], int length);

int main()
{
	int arr[Maxsize] = { 37, 92, 15, 61, 28, 79, 44, 5, 68};

	/*InsertSort(arr, Maxsize);*/
	/*ShellSort(arr, Maxsize);*/
	/*BubbleSort(arr, Maxsize);*/
	/*QuickSort(arr,0, Maxsize-1);*/
	/*SelectSort(arr, Maxsize);*/
	/*HeapSort(arr, Maxsize-1);*/
	//RadixSort(arr, Maxsize);
	MergeSort(arr, Maxsize);

	PrintSort(arr, Maxsize);

	return 0;
}

void InsertSort(int arr[], int length)
{
	int i;
	for (i = 1; i < length; i++)
	{
		int j;
		int tmp = arr[i];
		for (j = i - 1; j >= 0&&arr[j]>tmp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}

//void ShellSort(int arr[], int length)
//{
//	int d = 0;
//	for (d = (length-1) / 2; d >= 1; d /= 2)
//	{
//		int i = 0;
//		for (i = 1; i <length-d; i++)
//		{
//			int j = 0;
//			arr[0] = arr[i + d];
//			for (j = i; j>0&& arr[0] < arr[j]; j-=d)
//			{
//				arr[j+d] = arr[j];
//			}
//			if (j != i)
//			{
//				arr[j + d] = arr[0];
//			}
//		}
//	}
//	arr[0] = 0;
//
//}

void ShellSort(int arr[], int length)
{
	int d = 0;
	int i = 0;
	int j = 0;
	for (d = length/ 2; d >= 1; d /= 2)
	{
		for (i = 0; i < d; i++)
		{
			for (j = 0+i; j<length-d; j += d)
			{
				if (arr[j] > arr[j + d])
				{
					swap(&arr[j], &arr[j + d]);
				}
			}
		}
	}
}

void BubbleSort(int arr[], int length)
{
	int i,j;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
		
	}
}
void swap(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void QuickSort(int arr[], int low,int high)
{
	int pivot;
	if (low < high)
	{
		pivot = exchange(arr, low, high);

		QuickSort(arr, low, pivot-1);

		QuickSort(arr, pivot+1, high);
	}
}
int exchange(int arr[], int low, int high)
{
	int tmp = arr[low];
	while (low < high)
	{
		while (low < high&&tmp <= arr[high])	high--;
		arr[low] = arr[high];
		while (low < high && tmp >= arr[low])		low++;
		arr[high] = arr[low];
	}
	arr[low] = tmp;

	return low;
}

void SelectSort(int arr[], int length)
{
	int i = 0;
	while (i < length)
	{
		int j =  i+1;
		int temp = i;
		int min = arr[i];
		while (j < length)
		{
			if (min > arr[j])
			{
				min = arr[j];
				temp = j;
			}
			j++;
		}
		int tmp = arr[i];	
		arr[i] = min;
		arr[temp] = tmp;
		i++;
	}
}

void HeapSort(int arr[], int length)
{
	if (length != 0)
	{
		Max_Heap(arr, length);
		int tmp = arr[1];
		arr[1] = arr[length];
		arr[length] = tmp;
		HeapSort(arr, --length);
	}
}
void Max_Heap(int array[], int length)
{
	int i = 0;
	for (i = length / 2; i > 0; i--)
	{
		Heapify(array, i, length);
	}
}
void Heapify(int array[], int i, int length)
{
	int j = 0, num = 0;
	for (j = 2 * i; j <= length; j *= 2)
	{
		if (j + 1 <= length && array[j] < array[j + 1])
		{
			j++;
		}
		if (array[j / 2] >= array[j])
		{
			break;
		}
		else
		{
			num = array[j];
			array[j] = array[j / 2];
			array[j / 2] = num;
		}
	}
}

void RadixSort(int arr[],int length)
{
	LinkQueue L[10];
	InitiLinkQueue(L);
	int i = 0,num=0,flag=0,z=1;
	while (1)
	{
		flag = 0;
		for (i = 0; i < length; i++)
		{
			num = arr[i] /z% 10;
			EnLinkQueue(L, arr[i], num);
			if (num == 0)
			{
				flag++;
			}
		}
		z *= 10;
		if (flag >= length)
		{
			break;
		}
		DeLinkQueue(L, arr, length);
	}
}
void InitiLinkQueue(LinkQueueP L)
{
	int i= 0;
	for (i = 0; i < 10; i++)
	{
		(L + i)->first = NULL;
		(L + i)->rear = NULL;
	}
}
void EnLinkQueue(LinkQueueP L, int key ,int num)
{
	LinkNodeP p = (LinkNodeP)malloc(sizeof(LinkNode));
	p->data = key;
	p->next = NULL;
	if ((L + num)->first == NULL)
	{
		(L + num)->first = p;
	}
	else
	{
		LinkNodeP p1 = (L + num)->first;
		while (p1->next!=NULL)
		{
			p1 = p1->next;
		}
		p1->next= p;
	}
}
void DeLinkQueue(LinkQueueP L, int arr[])
{
	int i = 0,j=0;
	while(i<10)
	{
		LinkNodeP p = (L + i)->first;
		LinkNodeP p1 ;
		while (p != NULL)
		{
			arr[j++] = p->data;
			p1 = p;
			p = p->next;
			free(p1);
		}
		(L + i)->first = NULL;
		i++;
	}
}

void MergeSort(int arr[], int length)
{
	int low = 0, high = length - 1;
	Sort(arr,low,high);

}
void Sort(int arr[], int low, int high)
{
	if (low < high)
	{
		int middle = (low + high) / 2;
		Sort(arr, low, middle);
		Sort(arr, middle + 1, high);
		Merge(arr, low, middle, high);
	}
}
void Merge(int arr[], int low, int middle,int high)
{
	int i, j,k;
	for (i = low; i <= high; i++)
	{
		arr1[i] = arr[i];
	}
	for (i = low, j = middle+1, k = i; i<=middle && j<=high; k++)
	{
		if (arr1[i] <= arr1[j])arr[k] = arr1[i++];
		else arr[k] = arr1[j++];
	}
	while (i <= middle)arr[k++] = arr1[i++];
	while (j <= high)arr[k++] = arr1[j++];
}


void PrintSort(int arr[], int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
}