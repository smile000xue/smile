#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Maxsize 150

void Max_Heap(int array[], int length,int flag);
void Min_Heap(int array[], int length, int flag);
void Build_Heap(int array[], int flag);
void Insert_Heap(int array[], int key, int flag);
void Heapify(int array[], int i, int length,int flag);
void InsertHeapify(int array[], int i, int flag);
void Print_Heap(int array[]);


int main()
{
	int array[Maxsize] = {0};
	int oper = 0;
	int num = 0;
	do
	{
		printf("Build_Minheap:0---Build_Maxheap:1---Insert_Heap:2---Print_Heap:3---Exit:999\n");
		scanf("%d", &oper);
		switch (oper)
		{
		case 0:Build_Heap(array, oper); break;
		case 1:Build_Heap(array, oper); break;
		case 2:
			printf("Enter the number you want to insert:");
			scanf("%d", &num);
			Insert_Heap(array, num, 1); break;
		case 3:Print_Heap(array); break;
		case 999:break;
		default:printf("Input error!\n"); break;
		}
	}while (oper != 999);

	return 0;
}

void Build_Heap(int array[], int flag)
{
	FILE* pf= fopen("data.txt", "r");
	int i = 0;
	int j = 0;
	if (pf == NULL)
	{
		perror("Error opening file");
	}
	else
	{
		while ((fscanf(pf, "%d", &array[i++])) != EOF);
		if (flag)
		{
			Max_Heap(array, array[0], 1);
		}
		else
		{
			Min_Heap(array, array[0], 0);
		}
		fclose(pf);
	}
	pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		perror("Error opening file");
	}
	else
	{
		while (j < i-1)
		{
			fprintf(pf, "%d  ", array[j++]);
			if (j % 10 == 0)
			{
				fprintf(pf, "\n");
			}
		}
		fprintf(pf, "\n");
	}
	fclose(pf);
}

void Max_Heap(int array[], int length,int flag)
{
	int i = 0;
	for (i = length / 2; i > 0; i--)
	{
		Heapify(array, i, length,flag);
	}
}

void Min_Heap(int array[], int length,int flag)
{
	int i = 0;
	for (i = length / 2; i > 0; i--)
	{
		Heapify(array, i, length,flag);
	}
}

void Insert_Heap(int array[], int key,int flag)
{
	FILE* pf = fopen("data.txt", "r");
	int i = 0;
	int j = 0;
	if (pf == NULL)
	{
		perror("Error opening file");
	}
	else
	{
		while ((fscanf(pf, "%d", &array[i++])) != EOF);
	}
	if (Maxsize <= i-1)
	{
		printf("No Space!\n");
	}
	else
	{
		array[i-1] = key;
		array[0]++;
	}

	InsertHeapify(array,array[0], flag);

	pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		perror("Error opening file");
	}
	else
	{
		while (j <= i - 1)
		{
			fprintf(pf, "%d  ", array[j++]);
			if (j % 10 == 0)
			{
				fprintf(pf, "\n");
			}
		}
		fprintf(pf, "\n");
	}
	fclose(pf);

}

void InsertHeapify(int array[], int i, int flag)
{
	int j = 0, num = 0;
	for (j = i; j >1; j /= 2)
	{
		if (flag == 1)
		{
			if (array[j/2] >= array[j])
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
		else
		{
			if (array[j / 2] <= array[j])
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
}

void Heapify(int array[], int i, int length, int flag)
{
	int j = 0, num = 0;
	for (j = 2 * i; j <= length; j *= 2)
	{
		if (flag == 1)
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
		else
		{
			if (j + 1 <= length && array[j] > array[j + 1])
			{
				j++;
			}
			if (array[j / 2] > array[j])
			{
				num = array[j];
				array[j] = array[j / 2];
				array[j / 2] = num;
			}
			else
			{
				break;
			}
		}
	}
}

void Print_Heap(int array[])
{
	int i=0;
	FILE* pf = fopen("data.txt", "r");
	while ((fscanf(pf, "%d", &array[i])) != EOF)
	{
		printf("%d ", array[i]);
		i++;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}
