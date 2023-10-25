#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <assert.h>



typedef struct {
	int data;
	struct LNode* next;
}LNode;//����һ���ڵ�Ľṹ�壬����������ΪLNode

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
		printf("��������");
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
		printf("��������");
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
		printf("��������\n");
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
	LNode L;//����һ��ͷ�ڵ�
	HeadNodeInit(&L);//��ʼ��һ��ͷ�ڵ�

	LinkedLInit(&L);//����һ��������

	//NodeInsert(&L, 1,9);//�ڵ�1��λ���������9
	
	//int num;
	//num=NodeDelete(&L,1);
	//if (num != 999)
	//{
	//	printf("ɾ���ĵ�������%d\n", num);

	//}//ɾ����1��Ԫ�ز���ӡ

	//int num;
	//num=FindNode1(&L, 0);
	//if (num != 999)
	//{
	//	printf("�ҵ��ĵ�������%d\n", num);

	//}//���ҵ�5��������ӡ


	int num;
	num = FindNode2(&L, 0);
	if (num != 999)
	{
		printf("������λ����%d\n", num);

	}
	else
	{
		printf("û���ҵ�\n");
	}//�ҵ�����01��	2345ESWAA�ֳ�vbnm,������/*poiuytu������λ��

	 print(&L);//��ӡ������

	return 0;
}