#include <stdio.h> 
#include<malloc.h>
#include<assert.h>

typedef struct bstnode{
	int key;
	struct bstnode* lchild, *rchild;
}bstnode, *bstnodeP;

int flag=0;

void BuildBst(bstnodeP* L, int a[], int length);
int InsertBst(bstnodeP* L, int key);
bstnodeP SearchBst(bstnodeP L, int key);
void PrintBst(bstnodeP L);
void DeleteNode(bstnodeP* L, bstnodeP child, int flag);
void SetParent(bstnodeP* L, bstnodeP child, int flag);
int DeleteBst(bstnodeP* L, bstnodeP child, int num2);


int main()
{
	int a[] = { 50,26,66,21,30,29,31,60,70,68 };

	bstnodeP L=NULL;
	BuildBst(&L,a, (int)sizeof(a) / sizeof(a[0]));
	InsertBst(&L,9);

	int num1 = 9;
	bstnodeP position = SearchBst(L, num1);
	if (position != NULL)
	{
		printf("The position of %d is %p.\n", num1, position);
	}
	else
	{
		printf("No %d found!\n",num1);
	}
	num1 = 20;
	position = SearchBst(L, num1);
	if (position != NULL)
	{
		printf("The position of %d is %p\n", num1, position);
	}
	else
	{
		printf("No %d found!\n", num1);
	}

	int num2 = 50;
	int n = DeleteBst(&L,L,num2);
	if (n != 0)
	{
		printf("Successfully delete\n");
	}
	else
	{
		printf("Fail to delete!\n");
	}
	PrintBst(L);

	return 0;
}

void BuildBst(bstnodeP* L, int a[], int length)
{
	int i = 0;
	while (i < length)
	{
		InsertBst(L, a[i]);
		i++;
	}
}

int InsertBst(bstnodeP* L, int key)
{
	if ((*L) == NULL)
	{
		bstnodeP p = (bstnodeP)malloc(sizeof(bstnode));
		assert(p != NULL);
		p->lchild = NULL;
		p->rchild = NULL;
		p->key = key;
		*L = p;
		return 1;
	}
	else if (key >= (*L)->key)
	{
		return InsertBst(&((*L)->rchild), key);
	}
	else
	{
		return InsertBst(&((*L)->lchild), key);
	}
}

bstnodeP SearchBst(bstnodeP L, int key)
{
	if (L != NULL && L->key != key)
	{
		if (L->key <= key) return SearchBst(L->rchild, key);
		else return SearchBst(L->lchild, key);
	}
	else
	{
		return L;
	}
}

void PrintBst(bstnodeP L)
{
	if (L != NULL)
	{
		printf("%d  ", L->key);
		if (L->lchild != NULL)
		{
			PrintBst(L->lchild);
		}
		if (L->rchild != NULL)
		{
			PrintBst(L->rchild);
		}
	}
}

void DeleteNode(bstnodeP* L, bstnodeP child,int flag)
{
	if (child->lchild == NULL && child->rchild == NULL)
	{
		if (*L == child)
		{
			*L = NULL;
		}
		else
		{
			SetParent(L, NULL, flag);
		}
	}
	else if (child->lchild == NULL)
	{
		if (*L == child)
		{
			*L = child->rchild;
		}
		else
		{
			SetParent(L, child->rchild, flag);
		}
	}
	else
	{
		if (*L == child)
		{
			*L = child->lchild;
		}
		else
		{
			SetParent(L, child->lchild, flag);
		}
	}
}
void SetParent(bstnodeP* L, bstnodeP child, int flag)
{
	if (flag)
	{
		(*L)->lchild = child;
	}
	else
	{
		(*L)->rchild = child;
	}
}
int DeleteBst(bstnodeP* L, bstnodeP child, int num2)
{
	if (child == NULL)
	{
		return 0;
	}
	else if (child->key == num2)
	{
		if (child->lchild == NULL || child->rchild == NULL)
		{
				DeleteNode(L, child, flag);
		}
		else
		{
			bstnodeP p = child->rchild;
			bstnodeP parent = p;
			while (p->lchild != NULL)
			{
				parent = p;
				p = p->lchild;
			}
			if ((*L) == child)
			{
				if (p != parent)
				{
					DeleteNode(&parent, p, 1);
					p->rchild = child->rchild;
				}
				p->lchild = child->lchild;
				(*L) = p;
			}
			else
			{
				if (p != parent)
				{
					DeleteNode(&parent, p, 1);
					SetParent(L, p, flag);
					p->rchild = child->rchild;
					p->lchild = child->lchild;
				}
				else
				{
					SetParent(L, p, flag);
					p->lchild = child->lchild;
				}
			}
		}
		flag = 0;
		free(child);
		return 1;
	}
	else if (num2<child->key)
	{
		flag = 1;
		return DeleteBst(&child, child->lchild, num2);
	}
	else
	{
		flag = 0;
		return DeleteBst(&child, child->rchild, num2);
	}
}