#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef struct {

	int data;
	struct treenode* lchild,* rchild;
	struct treenode* parent;

}treenode,*treenodep;

treenodep TreeInit(void)
{
	treenodep tree = (treenodep)malloc(sizeof(treenode));
	tree = NULL;
	assert(tree == NULL);
	tree->data = 0;
	tree->lchild = NULL;
	tree->rchild = NULL;
	tree->parent = NULL;

	return tree;

}

void TreeInsert(treenodep tree)
{
	int num;
	scanf("%d", &num);
	while (num != 999)
	{
		if (tree->lchild == NULL)
		{
			treenodep p = (treenodep)malloc(sizeof(treenode));
			p->data = num;
			p->lchild = NULL;
			p->rchild = NULL;
			p->parent = NULL;
			tree->lchild = p;
			
		}
	}
}

int main()
{
	treenodep tree;
	tree = TreeInit();
	TreeInsert(tree);

	return 0;
}