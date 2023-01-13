#define _CRT_SECURE_NO_WARNINGS
#include "É¨À×ÓÎÏ·.h"

void menu()
{
	printf("***********É¨À×ÓÎÏ·*************\n");
	printf("*********** 1.play *************\n");
	printf("*********** 0.exit *************\n");
	printf("********************************\n");
}

void game()
{
	char board1[ROWS][COLS]={0};
	char board2[ROWS][COLS]={0};

	initiboard(board1, ROWS, COLS, '0');
	initiboard(board2, ROWS, COLS, '*');

	print(board2, ROW, COL);

	place(board1, ROW, COL);

	print(board1, ROW, COL);
	
	select(board1, board2, ROW, COL);
		


}

int main()
{
	srand((unsigned int) time(NULL));
	int input;
	do
	{
		menu();
		printf("Please Enter:");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();
			break;
		case 0:
			printf("EXIT!\n");
			break;
		default:
			printf("Input Error,Plese input again!!!\n\n");
			break;
		}
	} while (input);
	
	return 0;
}