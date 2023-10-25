#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#define Maxsize 5

typedef struct {
	int length;
	int array[Maxsize];
}Stack;

typedef Stack* StackP;

StackP CreateStack()
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
		while (num != 999)
		{
			printf("Please enter the number you want to add(end with enter 999):");
			scanf("%d", &num);
			s->array[++s->length] = num;
			if (s->length >= Maxsize - 1)
			{
				printf("Error,the stack is full!\n");
				break;
			}
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
	printf("Stack:");
	PrintStack(s);

	return 0;
}