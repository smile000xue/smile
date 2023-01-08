#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

char arr[ROW][COL];

void attm(char arr[ROW][COL], int row ,int col);

void print(char arr[ROW][COL], int row, int col);

void player_move(char arr[ROW][COL], int row, int col);

void computer_move(char arr[ROW][COL],int row,int col);

char is_win(char arr[ROW][COL],int row,int col);