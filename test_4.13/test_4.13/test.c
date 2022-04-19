#include <stdio.h>
//#define MAX 10 //#define定义的标识符常量
//enum color { //enum—>枚举常量,不能更改
//	RED,
//	BLUE,
//	YELLOW,
//};
//int main()
//{ 
//	int a = 0;
//	const int b =10; //b是变量但具有常属性，是const 修饰的常变量(本质还是变量)；const:常属性
//	int num[10] = {0,1,2,3,4,5,6,7,8,9};
//	int num1[MAX] = {0,1,2,3,4,5,6,7,8,9};
//	printf("%d %d\n", a, num[8]);
//	a = 1;
//	printf("重新复制后：%d %d\n", a, num1);
//	printf("%d\n", RED);//0
//	printf("%d\n", BLUE);//1
//	printf("%d\n", YELLOW);//2
//	return 0;
//}
//字符串类型：有双引号引起的一串字符，打印标识：%s
//int main()
//{
//	char arr1[] = "abc";//数组 ；"abc"—>‘a’‘b’‘c’‘\0’,字符串默认含'\0'；
//							//‘\0’字符串的结束标志，不算字符串内容
//	char arr2[] = { 'a','b','c','\0'};//需要加”\0“
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen—>计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
#include <string.h>
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c")); //字符串长度：13。\t为水平制表符、\32为一个八进制数
	return 0;
}