#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************************************\n");
	printf("*****1. ��ʼ                0. �˳�**************\n");
	printf("*************************************************\n");

}
//��Ϸ�㷨ʵ�ֵķ���
void game()
{   
	char ret;
	//ȫ���ո�
	char board[Row][Col] = { 0 };
	//��ʼ������
	InitBoard(board, Row, Col);
	//��ӡ����
	DisplayBoard(board, Row, Col);
	//��ʼ���忩
	while (1)
	{
		//�������
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}		
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	if (ret == '#')
		printf("����Ӯ��\n");
	if (ret == 'Q')
		printf("ƽ��\n");

}
void test()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;//���break���п���
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}