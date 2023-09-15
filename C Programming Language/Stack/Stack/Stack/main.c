#include <stdio.h>

#define Maxsize 10

typedef struct {
	int data[Maxsize];
	int top;
}SqStack;

void InitStack(SqStack* stack)
{
	stack->top = -1;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		stack->data[i] = i;
		stack->top++;
	}
}

void InsertStack(SqStack* stack, int num)
{
	if (stack->top >= Maxsize-1)
	{
		printf("ջ����\n");
	}
	else
	{
		stack->data[++stack->top] = num;
	}
	
}

int DeleteStack(SqStack* stack)
{
	if (stack->top < 0)
	{
		printf("ջ��\n");
		return 999;
	}
	else
	{
		return stack->data[stack->top--];
	}
	
}

int FindStack(SqStack *stack)
{
	if (stack->top < 0)
	{
		printf("ջ��");
		return 999;
	}
	return stack->data[stack->top];
}

void print(SqStack* stack)
{
	int i = 0;
	if (stack->top < 0)
	{
		printf("ջ��\n");
	}
	for (i = 0; i <= stack->top; i++)
	{
		printf("%d\n", stack->data[i]);
	}

}

int main()
{
	SqStack stack;

	InitStack(&stack);

	/*InsertStack(&stack, 6);*/

	/*int num;
	num=DeleteStack(&stack);
	if (num != 999)
	{
		printf("ɾ����������%d\n", num);
	}*/

	int num = 0;
	num=FindStack(&stack);
	if (num != 999)
	{
		printf("�ҵ���������%d\n", num);
	}
	
	print(&stack);

	return 0;
}