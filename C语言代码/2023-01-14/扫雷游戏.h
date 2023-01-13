#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define mine 10

void initiboard(char board[ROWS][COLS], int row, int col, char a);

void print(char board2[ROWS][COLS], int row, int col);

void place(char board1[ROWS][COLS],int row,int col);

void select(char board1[ROWS][COLS], char board2[ROWS][COLS],int row, int col);

