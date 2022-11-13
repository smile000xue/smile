#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int N;

int left(int i) //Since the valid data starts from the subscript 0, the left child of this node is 2 * i + 1, and the right child is 2 * i + 2
{
	return 2 * i + 1;
}

int right(int i)
{
	return 2 * i + 2;
}

// Take the extract_min function
int extract_min(int array[], int i, int j)
{
	return array[i] < array[j] ? i : j;
}

void swap(int array[], int i, int j)
{
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
	return;
}

// Walk through the build process of the heap
void Traversal(int array[])
{
    printf("\n\nBuilding the heap : ");
    for (int i = 0; i < N; i++)
	{
		printf("%d ", array[i]);
	}
    return;
}


//build_heap(a function that allows large amounts of data to be piled up at the same time
void BuildHeap(int array[], int n, int i) // i represents the parent node (the node with children), and n represents the effective array length
{
	int miner;
	for (; left(i) < n; i = miner) //If the exchange occurs, the loop, the exchanged location as the next parent node, the construction of the heap
	{
		miner = right(i) < n ? extract_min(array, left(i), right(i)) : left(i);
		//Determines whether the right child exists. If so, returns the small node element subscript. If not, returns the left child subscript
		if (array[miner] < array[i]) //Construct small top piles, with small exchanges. Swapping may break the heap structure, so continue building the heap by traversing the child at the swapped location
		{
			swap(array, miner, i);
		}
		else
		{
			break;
		}
	}
    Traversal(array);
	return;
}

//heapify (a function that recreates the heap)
void heapify(int array[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) //The heap is constructed from the last parent node (the node with children)
	{
		BuildHeap(array, n, i);
	}
	//After construction, the root node of each subtree (3 or 2 nodes) is less than or equal to the child node
    Traversal(array);
	return;
}

// Delete the heap delete_heap function
void delete_heap(int array[], int n)
{
	int len = n - 1;
	while (len > 0)
	{
		swap(array, len, 0);	  //Swap elements between the root (smallest) and the last node
		BuildHeap(array, len, 0); //Rebuild the heap, building it once
		len--;					  //Place the smallest element of each build heap at the end of the array, reducing the effective length of the array by one
	}
    Traversal(array);
    return;
}

//insert insert function
int *insert()
{
	int t;
	printf("Please enter the number of elements : ");
	scanf("%d", &N);
	int *array = (int *)malloc(sizeof(int) * N);

    flag: 
    printf("\nPlease select an insertion mode : ");
	printf ("\n1. Please select an insertion mode\n2. Please select an insertion mode");
	printf ("\n\nPlease enter the insertion method : ");
	scanf("%d", &t);
	printf ("\n");
	if (1 == t) 
	{
		for (int i = 0; i < N; ++i)
		{
			printf("Please enter the %d element: ", i+1);
			scanf("%d", &array[i]);
		}
	}
	else if (2 == t) 
	{
        printf("Please enter the %d element: ", N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &array[i]);
		}
	} 
	else
	{
		printf("Please enter the correct command!\n\n");
		goto  flag;
	}	
	return array;
}

int main()
{
	int *array = insert();
    
	heapify(array, N);
	delete_heap(array, N);

	return 0;
}
