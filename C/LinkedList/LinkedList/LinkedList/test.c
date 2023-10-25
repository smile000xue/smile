#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <assert.h>



typedef struct {
	int data;
	struct LNode* next;
}LNode;//定义一个节点的结构体，并且重命名为LNode

void HeadNodeInit(LNode* L)
{
	L->next = NULL;
}

void LinkedLInit(LNode* L)
{
	int i;
	scanf("%d", &i);

	while (i != 999)
	{
		LNode* L1 = (LNode*)malloc(sizeof(LNode));
		assert(L1 != NULL);
		L1->data = i;
		L1->next = L->next;
		L->next = L1;
		L = L1;

		scanf("%d", &i);
	}
}

int NodeInsert(LNode* L, int i,int num)
{
	if (i < 1)
	{
		printf("输入有误");
		return -1;
	}
		
	LNode* node = (LNode*)malloc(sizeof(LNode));
	assert(node != NULL);
	node->data = num;

	while (L->next != NULL && i > 1)
	{
		L = L->next;
		i--;
	}
	node->next = L->next;
	L->next = node;

}

int NodeDelete(LNode* L, int i)
{
	int num;
	if (i < 1)
	{
		printf("输入有误");
		return 999;
	}
	while (L->next != NULL && i > 1)
	{
		L = L->next;
		i--;
	}
	LNode* p1 = L->next;
	num = p1->data;
	L->next = p1->next;
	free(p1);

	return num;
}

int FindNode1(LNode *L, int i)
{
	if (i < 1)
	{
		printf("输入有误\n");
		return 999;
	}
	LNode* p;
	p = L;

	while (p->next != NULL && i > 0)
	{
		p = p->next;
		i--;
	}
	return p->data;


}

int FindNode2(LNode* L, int num)
{
	LNode* p;
	p = L; 

	int i = 0;
	while (p->next != NULL && p->data!=num)
	{
		p = p->next;
		i++;
	}
	if (p->next == NULL)
			i = 999;
	return i;
}

void print(LNode* L)
{
	while ((L->next)!=NULL)
	{
		L = L->next;	
		printf("%d\n", L->data);
	}
}

int main()
{
	LNode L;//声明一个头节点
	HeadNodeInit(&L);//初始化一个头节点

	LinkedLInit(&L);//定义一个单链表

	//NodeInsert(&L, 1,9);//在第1个位序插入数字9
	
	//int num;
	//num=NodeDelete(&L,1);
	//if (num != 999)
	//{
	//	printf("删除的的数字是%d\n", num);

	//}//删除第1个元素并打印

	//int num;
	//num=FindNode1(&L, 0);
	//if (num != 999)
	//{
	//	printf("找到的的数字是%d\n", num);

	//}//查找第5个数并打印


	int num;
	num = FindNode2(&L, 0);
	if (num != 999)
	{
		printf("该数字位序是%d\n", num);

	}
	else
	{
		printf("没有找到\n");
	}//找到数字01·	2345ESWAA现场vbnm,、】【/*poiuytu】【的位序

	 print(&L);//打印该链表

	return 0;
}