#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//字符串库函数学习
#include <string.h>
//int main()
//{
//	//strcpy ：字符串拷贝
//	//strlen ：计算字符串长度
//	char arr1[] = "abcdef";
//	char arr2[10] = "**********";
//	strcpy(arr2, arr1); //arr1中的字符串拷贝到arr2中
//	printf("%s\n", arr2);
//
//	return 0;
//}
////内存操作库函数
////memset :内存设置
//int main()
//{
//	char arr[] = "hello world";
//	int a = 0;
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	a = strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}
//自定义函数：获取两个数的较大值

//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("输入两个数：");
//	scanf("%d%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0; 
//}
//交换两个整型变量的值
//void Swap1(int x, int y)  //x与主函数中的a、 y与主函数中的b未关联起来
////x、y为形式参数
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//
//}
//void Swap2(int* pa,int* pb)//与主函数a、b建立真的联系
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//	printf("主函数a=%d b=%d\n", a, b);
//	//传值调用
//	Swap1(a, b);    //存在问题，没有交换成功
//	//a、b为实际参数，有确定的值
//	printf("调用函数1:a=%d b=%d\n", a, b);//传值调用，改变形参xy，不改变实参ab
//	//传值调用
//	Swap2(&a, &b);//&a、&b为实际参数， 有确定的值
//	printf("调用函数2:a=%d b=%d\n", a, b);//调用函数内部变量改变，导致调用函数外部变量改变
//	return 0;
//}
