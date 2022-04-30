#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数递归：大事化小

//void pr(int n)
//{
//	if (n > 9)
//	{
//		pr(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	//printf("hehe\n");
//	//main();  //递归常见错误：出现栈溢出
//	//接受一个整型值，顺序打印每一位
//	unsigned int num = 0;
//	printf("输入一个数：");
//	scanf("%d", &num);
//	//递归
//	pr(num);
//
//	return 0;
//}
// 编写代码求字符串长度，不允许
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen1(char* str)//递归的方法
{
	if (*str != '\0')
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}

}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);//arr是数组。数组传参：传过去的不是整个数组，而是首元素的地址
	int len1 = my_strlen1(arr);
	printf("len=%d\n", len);
	printf("len1=%d\n", len1);
	return 0;
}