#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#define Maxsize 20

typedef struct {
	int length;
	int array[Maxsize];
}Stack, * StackP;

StackP CreateStack(void)
{
	StackP s=(StackP)malloc(sizeof(Stack));
	assert(s != NULL);
	return s;
}

void InitStack(StackP s)
{
	s->length = -1;
}

void PushStack(StackP s)
{
	if (s->length >= Maxsize-1)
	{
		printf("Error,the stack is full!\n");
	}
	else
	{
		int num=0;
		printf("Please enter the number you want to add(end with enter 999):");
		scanf("%d", &num);
		while (num != 999)
		{
			if (s->length >= Maxsize - 1)
			{
				printf("Error,the stack is full!\n");
				break;
			}
			s->array[++s->length] = num;
			printf("Please enter the number you want to add(end with enter 999):");
			scanf("%d", &num);
		}
		
	}
}

void PopStack(StackP s,int *num)
{
	if (s->length <= -1)
	{
		printf("Error,the stack is empty!\n");
	}
	else
	{
		*num = s->array[s->length--];
	}
}

int GetTop(StackP s)
{
	if (s->length <= -1)
	{
		printf("Error,the stack is empty!\n");
		return 999;
	}
	else
	{
		return s->array[s->length];
	}
}

void PrintStack(StackP s)
{
	if (s->length <= -1)
	{
		printf("Error,the stack is empty!\n");
	}
	else
	{
		int l=0;
		l = s->length;
		while (l >= 0)
		{
			printf("%d ", s->array[l--]);
		}
	}
}

int main()
{
	StackP s;
	s=CreateStack();

	InitStack(s);
	PushStack(s);
	int num = 999;
	PopStack(s,&num);
	if (num != 999)
	{
		printf("The number that pops up is %d\n", num);
	}
	int topnum=999;
	topnum=GetTop(s);
	if (topnum != 999)
	{
		printf("The top element of the stack is %d.\n", topnum);
	}
	printf("Stack:");
	PrintStack(s);

	return 0;
}