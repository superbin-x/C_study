#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

//三子棋
void menu()
{
	printf("******************************\n");
	printf("***1. 开始游戏  2. 退出游戏***\n");
	printf("******************************\n");

}
void game()
{
	char ch[ROW][COL] = {0};//数组存放棋盘信息
	char ret = 0;
	InitBoard(ch, ROW, COL);//空格初始化棋盘
	DisplayBoard(ch, ROW, COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(ch, ROW, COL);
		DisplayBoard(ch, ROW, COL);//更新棋盘
		ret = IsWin(ch, ROW, COL);//判断输赢：玩家赢 电脑赢 平局  
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(ch, ROW, COL);
		DisplayBoard(ch, ROW, COL);//更新棋盘
		ret = IsWin(ch, ROW, COL);//判断输赢：玩家赢 电脑赢 平局  
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("胜利!\n");
	}
	else if (ret == '#')
		{
			printf("失败!\n");
		}
		else if (ret == '$')
		{
			printf("平局！\n");
		}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 2:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新选择：\n");
				break;
		}
	} while (2 == input);
}


int main()
{
	test();




	return 0;
}