#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[][Col], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < row - 1)
			{
				printf("|");
			}
			
		}
		printf("\n");
	}
}
void PlayerMove(char board[Row][Col], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请选择下棋的位置:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用\n");

		}
		else
			printf("坐标非法,请重新输入\n");		
	}
}
void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		srand(time(NULL));
		x = rand()%row;
		y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}		
	}
}
int IsFull(char board[Row][Col], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			if (board[i][j] != ' ')
			{
				return 0;
			}
	}
	return 1;
}
char Iswin(char board[Row][Col], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&& board[i][1]!=' ')
			return board[i][1];
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[i][1];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!=' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!=' ')
		return board[1][1];
	if (IsFull(board, Row, Col) == 1)
	{
		return 'Q';
	}
	return 'C';
}
//返回'*'玩家赢
//返回'#'电脑赢
//返回'Q'平局
//返回'C继续游戏'