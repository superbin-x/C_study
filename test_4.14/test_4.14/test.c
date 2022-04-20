#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择语句
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？（0/1）：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("你会拿到好offer！\n");
//	else
//		printf("回家买红薯\n");
//	return 0;
//}
//循环语句
//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("加入课程：\n");
//	printf("买彩票，中了500万？（0/1）：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("成功！\n");
//	else {
//		printf("老实学习，每天编程100行；\n");
//		while (i < 500) {
//			i += 100;
//			printf("代码行数：%d\n", i);
//		};
//		printf("成为大牛，成功！\n");
//	}
//	return 0;
//}
//升级：调用函数计算两个数字相加
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	int sum = 0;
//	printf("输入两个数值：");
//	scanf("%d%d", &a, &b);
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//操作符1
//int main()
//{
//	int a = 5 / 2; //除
//	int b = 5 % 2; //取模（取余）
//	int c = 1,d,e,f;
//	printf("%d  b=%d\n", a, b);
//	d = c << 1; //左移一位 c: 000000001—>00000010
//	e = c >> 1; //右移一位 c: 000000001—>00000000   1
//	f = c & d; // & 按位与 f: 000000001 & 00000010
//	printf("c=%d  %d  %d %d\n", c, d, e, f);
//	c += 2; //c=c+2
//	printf("+=：c=%d\n", c);
//	c = b++; //后置++：先将b的值赋给c，b再加1
//	printf("b++：c=%d b=%d\n", c, b);
//	a = ++b; //前置++：先b加1，再将b的值赋给c
//	printf("++b：a=%d b=%d\n", a, b);
//	a = 10;
//	printf("a=%d\n", a);
//	b = a--;
//	printf("a--：a=%d b=%d\n", a, b);
//	b = --a;
//	printf("--a：a=%d b=%d\n", a, b);
//	return 0;
//}
//操作符2
//int main()
//{
//	int s = 0;
//	int a = 0; //4字节，32位 00000000 00000000 00000000 00000000
//	int b = ~a;//对a按位取反 11111111 11111111 11111111 11111111 （原码按位取反—>反码+1-->补码）
//  //负数在内存中存储的是补码 11111111 11111111 11111111 11111111
//	           //补码-1=反码 11111111 11111111 11111111 11111110
//			 //反码取反=原码 10000000 00000000 00000000 00000001（符号位不变）
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("b=%d\n", b);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr)); //计算数组大小，单位字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算元素个数
//	s = (a > b ? a + b : a - b); //条件操作符
//	printf("s=%d\n", s);
//	s = (a < b ? a + b : a - b);
//	printf("s1=%d\n", s);
//	return 0;
//}
//常见关键字
//void test()
//{
//	static int  a = 1;//a是一个静态的局部变量
//	int b = 1;
//	a++;
//	b++;
//	printf("a=%d b=%d\n", a, b);
//
//}
//extern int ADD(int, int); //声明外部引用ADD()函数
//int main()
//{
//	register int a = 0; //建议将a存储到寄存器
//	typedef unsigned int u_int;//将unsigned int重新命名u_int
//	u_int num = 1; //等价于unsigned int num = 1
//	int n, m;
//	extern sum; //声明外部引用sum变量
//	printf("输入两个数：");
//	scanf("%d%d", &n, &m);
//	sum = ADD(n, m);
//	printf("sum=%d\n", sum);
//	while (num < 5)
//	{
//		test();
//		num++;
//	}
//	
//	return 0;
//}
#define A 10
//函数方式
int MAX(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
#define MAX1(X,Y) X>Y?X:Y //#define定义宏方式
int main()
{
	int a = 10;
	int b = 20;
	int max;
	printf("A=%d a=%d b=%d\n", A, a, b);
	max = MAX(a, b);
	printf("函数方式max=%d\n", max);
	max = MAX1(a, b); // max=(a>b?a:b)
	printf("宏定义方式max1=%d\n", max);
	return 0;
}