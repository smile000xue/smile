#include <stdio.h>

#define Maxsize 10 

typedef struct {
	
	int data[Maxsize];
	int head, tail;
}Queue;

void InitQueue(Queue* Q)
{
	Q->head = 0;
	Q->tail = 0;

}
void EnQueue(Queue* Q,int num)
{
	if ((Q->tail + 1) % Maxsize == Q->head)
	{
		printf("��������\n");
	}
	else
	{
		Q->data[Q->tail] = num;
		Q->tail = (Q->tail + 1) % Maxsize;
	}

}
int DeQueue(Queue* Q)
{
	int num=0;
	if (Q->head == Q->tail)
	{
		printf("�����ǿյ�\n"); \
		return 999;
	}
	else
	{
		num = Q->data[Q->head];
		Q->head = (Q->head + 1) % Maxsize;
		return num;
	}
}
int FindQueue(Queue* Q)
{
	int num = 0;
	if (Q->head == Q->tail)
	{
		printf("�б��ǿյ�\n");
		return 999;
	}
	else
	{
		num = Q->data[Q->head];
		return num;
	}
}
void print(Queue* Q)
{
	int a = 0;
	if (Q->head == Q->tail)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		a = Q->head;
		while (a != Q->tail)
		{
			printf("%d\n", Q->data[a]);
			a++;
		}
		
	}

}

int main()
{
	Queue Q;
	InitQueue(&Q);

	EnQueue(&Q,9); 
	EnQueue(&Q, 4);
	EnQueue(&Q, 569);
	EnQueue(&Q, 9);
	EnQueue(&Q, 4);
	EnQueue(&Q, 569);
	EnQueue(&Q, 9);
	EnQueue(&Q, 4);
	EnQueue(&Q, 569);
	EnQueue(&Q, 9);
	EnQueue(&Q, 4);
	EnQueue(&Q, 569);
	/*int num = 0;
	num=DeQueue(&Q);
	if(num!=999)
		printf("���е���%d\n", num);*/

	/*int num = 0;
	num = FindQueue(&Q);
	if(num!=999)
		printf("���е���%d\n", num);*/
	
	print(&Q);

	return 0;
}