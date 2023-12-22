#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Maxsize 13

void InitSets(int sets[], int length);
void CreateSets(int sets[], int length);
int FindSets(int sets[], int data);
void UnionSets(int sets[], int root1, int root2);

int sets[Maxsize] = { 0 };

int main()
{
	InitSets(sets,sizeof(sets)/sizeof(sets[0]));
	CreateSets(sets, sizeof(sets) / sizeof(sets[0]));
	FindSets(sets, 6);
	UnionSets(sets,0,2);
	UnionSets(sets, 0, 3);

	return 0;
}

void InitSets(int sets[],int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		sets[i] = -1;
	}
}

void CreateSets(int sets[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		scanf("%d", &sets[i]);
	}
}

int FindSets(int sets[], int data)
{
	int root = data;
	while (sets[root] >= 0)
	{
		root = sets[root];
	}
	while (data != root)
	{
		int temp = sets[data];
		sets[data] = root;
		data = temp;
	}
	return root;
}

void UnionSets(int sets[], int root1, int root2)
{
	if (root1 != root2)
	{
		if (sets[root1] > sets[root2])
		{
			sets[root2] += sets[root1];
			sets[root1] = root2;
		}
		else
		{
			sets[root1] += sets[root2];
			sets[root2] = root1;
		}
	}
}
