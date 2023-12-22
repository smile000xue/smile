#include <stdio.h>
#include <malloc.h>

#define Length 10

typedef struct {
	int key;
	struct hash* pointer;
}hash,*hashpointer;

void InitHashT(hash hashtable[], int length);
void BuiltHashT(hash hashtable[], int length, int arr[], int l);
void InsertHashT(hash hashtable[], int num);
void PrintHashT(hashpointer hashtable, int length);

int main()
{
	int arr[10] = { 3,5,7,10,45,34,56,34,23,23 };
	hash hashtable[Length];

	InitHashT(hashtable, Length);
	BuiltHashT(hashtable, Length, arr, sizeof(arr) / sizeof(arr[0]));
	InsertHashT(hashtable, 1);
	InsertHashT(hashtable, 5);
	PrintHashT(hashtable,Length);


	return 0;
}

void InitHashT(hash hashtable[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		hashtable[i].key = 0;
		hashtable[i].pointer = NULL;
	}
}

void BuiltHashT(hash hashtable[], int length, int arr[], int l)
{
	int i = 0;
	for (i = 0; i < l; i++)
	{
		InsertHashT(hashtable, arr[i]);
	}
}

void InsertHashT(hash hashtable[], int num)
{
	if (hashtable[num % 7].key != 0)
	{
		hashtable[num % 7].key = num;
	}
	else
	{
		hashpointer p = (hashpointer)malloc(sizeof(hash));
		p->pointer = hashtable[num % 7].pointer;
		hashtable[num % 7].pointer = p;
		p->key = num;
		InsertHashT(p, num);
	}
}

void PrintHashT(hashpointer hashtable, int length)
{
	int i = 0;
	hashpointer p = hashtable;
	for (i = 0; i < length; i++)
	{
		while (hashtable != NULL)
		{
			printf("%d  ", hashtable->key);
			hashtable = hashtable->pointer;
		}
		p++;
		hashtable = p;
	}

}