#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数100以内的9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//		if (9 == i / 10)
//		{
//			count++;
//		}
//	}
//	printf("9的个数=%d\n", count);
//
//	return 0;
//}
//分数求和：1/1-1/2+1/3-……+1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (flag * 1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
////找十个数中的最大值
//int main()
//{
//	int a[] = { -1,1,5,3,6,45,7,8,9,-10 };
//	int max = a[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
////打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	for (i = 1; i <= 9; i++) //打印9行
//	{
//		for (j = 1; j <= i; j++)//打印一行
//		{
//			s = i * j;
//			printf("%d*%d=%-2d ", i, j, s);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////猜数字游戏：1. 生成随机数   2.猜数字
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("1.开始游戏  2.退出游戏\n");
//	printf("**********************\n");
//}
//void game()//1. 生成随机数 2.猜数字
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	m = rand()%100+1;   //获取一个1-100随机数，rand()—>计算机生成一个整型随机数 引用头文件<stdlib.h>
//	for (i = 1; i<= 10; i++)
//	{
//		printf("输入猜数(1-100)：");
//		scanf("%d", &n);
//		if (n > m)
//		{
//			printf("数字大了\n");
//		}
//		else if (n < m)
//		{
//			printf("数字小了\n");
//		}
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				flag = 1;
//				break;
//			}
//		if (10 == i && 1 != flag)
//		{
//			printf("失败,再来一局？\n");
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); // 时间戳来设置随机数生成的起始点
//	do 
//	{
//		menu();
//		printf("选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 2:
//				break;
//			default:
//				printf("输入错误，请重新选择\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
// //goto语句
//int main()
//{
//	printf("hello world!\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hello\n");
//	return 0;
//}
////关机程序
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意：你的电脑将在1分钟内关机，如果输入”我是猪“，就取消关机\n");
	printf("说吧：");
	scanf("%s", a);
	if (strcmp(a, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("给你一次重新组织语言的机会\n");
		goto again;
	}
	return 0;
}