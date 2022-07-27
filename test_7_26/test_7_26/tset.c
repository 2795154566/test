#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************************************\n");
	printf("*****1. 开始                0. 退出**************\n");
	printf("*************************************************\n");

}
//游戏算法实现的方法
void game()
{   
	char ret;
	//全部空格
	char board[Row][Col] = { 0 };
	//初始化棋盘
	InitBoard(board, Row, Col);
	//打印棋盘
	DisplayBoard(board, Row, Col);
	//开始下棋咯
	while (1)
	{
		//玩家下棋
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断玩家是否赢
		ret=Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断电脑是否赢
		ret = Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}		
	}
	if (ret == '*')
		printf("玩家赢了\n");
	if (ret == '#')
		printf("电脑赢了\n");
	if (ret == 'Q')
		printf("平局\n");

}
void test()
{
	int input;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;//这个break可有可无
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}