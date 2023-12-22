#include <stdio.h> 
#include<malloc.h>
#include<assert.h>

typedef struct avlnode {
	int key;
	int height;
	struct avlnode* lchild, * rchild;
}avlnode, * avlnodeP;

void BuildAVL(avlnodeP* L, int a[], int length);
avlnodeP InsertAVL(avlnodeP* L, int key);
int getheight(avlnodeP L);
avlnodeP RRRotation(avlnodeP* L);
avlnodeP LLRotation(avlnodeP* L);
avlnodeP RLRotation(avlnodeP* L);
avlnodeP LRRotation(avlnodeP* L);
avlnodeP SearchAVL(avlnodeP L, int key);
void PrintAVL(avlnodeP L);

int main()
{
	int a[] = { 34,23,45,17,30 };

	avlnodeP L = NULL;
	BuildAVL(&L, a, (int)sizeof(a) / sizeof(a[0]));
	InsertAVL(&L,27);

	int num1 = 50;
	avlnodeP position = SearchAVL(L, num1);
	if (position != NULL)
	{
		printf("The position of %d is %p.\n", num1, position);
	}
	else
	{
		printf("No %d found!\n", num1);
	}
	num1 = 23;
	position = SearchAVL(L, num1);
	if (position != NULL)
	{
		printf("The position of %d is %p\n", num1, position);
	}
	else
	{
		printf("No %d found!\n", num1);
	}

	PrintAVL(L);

	return 0;
}

void BuildAVL(avlnodeP* L, int a[], int length)
{
	int i = 0;
	while (i < length)
	{
		(*L)=InsertAVL(L,a[i]);
		i++;
	}
}

avlnodeP InsertAVL(avlnodeP* L, int key)
{
	int righth = 0;
	int lefth = 0;
	if ((*L) == NULL)
	{
		avlnodeP p = (avlnodeP)malloc(sizeof(avlnode));
		assert(p != NULL);
		p->lchild = NULL;
		p->rchild = NULL;
		p->key = key;
		p->height=0;
		*L = p;
	}
	else if (key >= (*L)->key)
	{
		(*L)->rchild=InsertAVL(&((*L)->rchild),key);
		righth = getheight((*L)->rchild);
		lefth = getheight((*L)->lchild);
		if (righth - lefth >= 2 || righth - lefth <= -2)
		{
			if ((*L)->rchild->key <= key)
			{
				*L=RRRotation(L);
			}
			else
			{
				*L = RLRotation(L);
			}
		}
	}
	else
	{
		(*L)->lchild=InsertAVL(&((*L)->lchild), key);
		righth = getheight((*L)->rchild);
		lefth = getheight((*L)->lchild);
		if (righth - lefth >= 2 || righth - lefth <= -2)
		{
			if ((*L)->lchild->key > key)
			{
				*L = LLRotation(L);
			}
			else
			{
				*L = LRRotation(L);
			}
		}
	}
	righth = getheight((*L)->rchild);
	lefth = getheight((*L)->lchild);
	(*L)->height = (righth > lefth ? righth : lefth) + 1;
	return *L;
}
avlnodeP RRRotation(avlnodeP* L)
{
	avlnodeP p = (*L)->rchild;
	(*L)->rchild = p->lchild;
	p->lchild = *L;
	int righth = getheight((*L)->rchild);
	int lefth = getheight((*L)->lchild);
	(*L)->height = (righth > lefth ? righth : lefth) + 1;

	return p;
	
}
avlnodeP LLRotation(avlnodeP* L)
{
	avlnodeP p = (*L)->lchild;
	(*L)->lchild = p->rchild;
	p->rchild = *L;
	int righth = getheight((*L)->rchild);
	int lefth = getheight((*L)->lchild);
	(*L)->height = (righth > lefth ? righth : lefth) + 1;
	return p;
}
avlnodeP RLRotation(avlnodeP* L)
{
	avlnodeP p;
	(*L)->rchild =LLRotation(&(*L)->rchild);
	p = RRRotation(L);
	return p;
}
avlnodeP LRRotation(avlnodeP* L)
{
	avlnodeP p;
	(*L)->lchild = RRRotation(&(*L)->lchild);
	p = LLRotation(L);
	return p;
}
int getheight(avlnodeP L)
{
	if (L == NULL)
	{
		return -1;
	}
	else
	{
		return L->height;
	}
	}

avlnodeP SearchAVL(avlnodeP L, int key)
{
	if (L != NULL && L->key != key)
	{
		if (L->key <= key) return SearchAVL(L->rchild, key);
		else return SearchAVL(L->lchild, key);
	}
	else
	{
		return L;
	}
}

void PrintAVL(avlnodeP L)
{
	if (L != NULL)
	{
		printf("%d  ", L->key);
		if (L->lchild != NULL)
		{
			PrintAVL(L->lchild);
		}
		if (L->rchild != NULL)
		{
			PrintAVL(L->rchild);
		}
	}
}