
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////算术操作符
//int main()
//{
//	int a = 7 / 2;//商3余1
//	int b = 7 % 2;
//	float c = 7 / 2.0;
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	printf("c= %f\n", c);
//
//
//
//	return 0;
//}

////移位操作符
//int main()
//{
//	//>> 右移操作符:
//	//1. 算术右移：右边丢弃，左边补原符号位
//	//2. 逻辑右移：右边丢弃，左边补0
//	int a = 8;       //  00000000 00000000 00000000 00001000 
//	int b = a >> 1; //  (0)00000000 00000000 00000000 0000100(0)
//
//	int c = -1;//整数二进制表示：原码 反码 补码
//	//存储到内存的是补码
//					//	  100000000 000000000 00000000 00000001   原码
//					//	  111111111 111111111 11111111 11111110   反码
//					//    111111111 111111111 11111111 11111111   补码=反码+1
//	int d = c >> 1;	//   (1)111111111 111111111 11111111 1111111(1)
//	//>> 左移操作符：左边丢弃，右边补0
//	int n = a << 1;
//
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	printf("c= %d\n", c);
//	printf("d= %d\n", d);
//	printf("n= %d\n", n);
//
//	return 0;
//}

//位操作符
//int main()
//{
//	int a = 2;    //010
//	int b = 6;    //110
//	int c = a & b;//010  按位与：同1为1，其余为0
//	int d = a | b;//110  按位或：同0为0，其余为1
//	int n = a ^ b;//100  按位异或；同为0，不同为1
//	printf("c= %d\n", c);
//	printf("d= %d\n", d);
//	printf("n= %d\n", n);
//	return 0;
//}
////交换两个变量的值：不使用中间临时变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	//加减法：可能会溢出
//	a = a + b;//a=8
//	b = a - b;//b=3
//	a = a - b;//a=5
//	printf("交换后\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	//异或法：执行效率不高，可读性不强
//	a = 3;     //011  3
//	b = 5;     //101  5
//	a = a ^ b; //110  6
//	b = a ^ b; //011  5
//	a = a ^ b; //101  3
//	printf("交换后\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	return 0;
//}
 
////统计整数二进制内存中1的个数（补码中1的个数）
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	printf("输入num: ");
//	scanf("%d", &num);
//	//
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("1. 补码 1的个数：%d\n", count);
//
//	////只能操作正整数
//	count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("2. 补码 1的个数：%d\n", count);
//	return 0;
//}
//
////赋值操作符
//int main()
//{
//	int a = 5;
//	a = a + 2;
//	a += 2; //复合赋值符
//
//
//
//
//	return 0;
//}

//单目操作符
int main()
{
	int a = 9;
	int* p;
	char ch[10] = { 0 };
	printf("!a= %d\n", !a);
	p = &a;//取地址
	*p;//解引用操作符
	printf("p= %p\n", p);
	printf("*p= %d\n", *p);
	printf("sizeof(a)= %d\n", sizeof(a));//变量所占空间大小
	printf("sizeof(p)= %d\n", sizeof(p));
	printf("sizeof(ch)= %d\n", sizeof(ch));
	printf("sizeof(char [10])= %d\n", sizeof(char [10]));
	return 0;
}