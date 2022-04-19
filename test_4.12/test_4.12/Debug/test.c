
/*#include <stdio.h> //包含一个stdio.h的文件
//第一个程序
int  main() //主函数——程序的入口，有且仅有一个
// main前面的int表示main函数返回一个整型值——与return 0;相呼应
{
	printf("hello world!\n"); //完成任务：printf——打印函数（库函数）
	return 0; //返回 0

}*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算两个数的和
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2); //scanf——输入函数；&取地址符
	//int sum = 0;  C语言规定变量要定义在当前代码块前面
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;

}