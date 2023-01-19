#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//∫∫¬ÂÀ˛Œ Ã‚

void move(char pos1, char pos3, int n)
{
	printf("Put %d from %c to %c\n", n, pos1, pos3);
}

void change(char pos1,char pos2,char pos3,int n)
{
	if (1 == n)
	{
		move(pos1, pos3, n);
	}
	else 
	{
		change(pos1, pos3, pos2, n-1);

		move(pos1, pos3, n);

		change(pos2,pos1,pos3, n - 1);

	}

}

int main()
{
	int n = 2;

	char pos1 = 'A';
	char pos2 = 'B';
	char pos3 = 'C';

	change(pos1,pos2,pos3,n);

	return 0;
}