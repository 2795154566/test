#pragma once
#include <stdlib.h>    
#include <time.h>  
#define Row 3
#define Col 3
void InitBoard(char board[][Col], int row, int col);

void DisplayBoard(char board[Row][Col], int row, int col);

void PlayerMove(char board[Row][Col], int row, int col);

void ComputerMove(char board[Row][Col], int row, int col);

char Iswin(char board[Row][Col], int row, int col);