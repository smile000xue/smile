#define _CRT_SECURE_NO_WARNINGS
#include "и╗ювсно╥.h"

void initiboard(char board[ROWS][COLS], int row, int col, char a)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = a;
		}
	}
}

void print(char board2[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("----------------и╗ювсно╥----------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d   ", i);
	}
	printf("\n\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d   ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c   ", board2[i][j]);
		}
		printf("\n\n");
	}
	printf("----------------------------------------\n");

}

void place(char board1[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;

	while(i<mine)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (board1[x][y] == '0')
		{
			board1[x][y] = '1';
			i++;
		}
	}
}

//char number(char board1[ROWS][COLS],int x,int y)
//{
//	char i = '0';
//	if (board1[x - 1][y - 1] == '1')
//		i++;
//	if (board1[x - 1][y] == '1')
//		i++;
//	if (board1[x - 1][y + 1] == '1')
//		i++;
//	if (board1[x][y - 1] == '1')
//		i++;
//	if (board1[x][y + 1] == '1')
//		i++;
//	if (board1[x + 1][y - 1] == '1')
//		i++;
//	if (board1[x + 1][y] == '1')
//		i++;
//	if (board1[x + 1][y + 1] == '1')
//		i++;
//	return i;
//
//}

//int number(char board1[ROWS][COLS], int x, int y)
//{
//	return board1[x - 1][y - 1] 
//		+ board1[x - 1][y + 1] 
//		+ board1[x][y - 1] 
//		+ board1[x][y + 1] 
//		+ board1[x + 1][y - 1] 
//		+ board1[x + 1][y + 1] 
//		+ board1[x - 1][y] 
//		+ board1[x + 1][y] - 8 * '0';
//}

int number(char board1[ROWS][COLS], int x, int y)
{
	int i = -1;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = -1;
		for (j = -1; j <= 1; j++)
		{
			sum += board1[x + i][y + j];
		}
	}
	return sum - 9 * '0';
}

void assign(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 1; i <=row; i++)
	{
		int j = 0;
		for (j = 1; j <=col; j++)
		{
			if (board1[i][j] == '1')
			{
				board2[i][j] = '#';
			}
			else
			{
				board2[i][j] = '*';
			}
		}
	}
}

int trav(char board2[ROWS][COLS], int row, int col)
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		int j = 0;
			for (j = 1; j <= col; j++)
			{
				if (board2[i][j] == '*')
				{
					count++;
				}
			}
	}
	return count;
}

void select(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("Please enter the coordinates of your choice");
		scanf("%d %d", &x, &y);
		if (0 < x && x <= row && 0 < y && y <= col)
		{
			if (board2[x][y] != '*')
			{
				printf("The coordinates have been entered,please re-enter!");
				continue;
			}
			if (board1[x][y] == '1')
			{
				printf("               Game Over\n\n");
				assign(board1, board2, ROW, COL);
				print(board2, ROW, COL);
				break;
			}
			else
			{
				int b=trav(board2, ROW, COL)-1;
				if (b == mine)
				{
					printf("Congratulations,you won!\n\n");
					break;
				}
				else
				{
					int m = number(board1, x, y);
					board2[x][y] = m+'0';
					print(board2, ROW, COL);
				}
			}
		}
		else
			printf("Input Error,Please input again!!!\n");
	}
}


