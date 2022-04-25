#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////比较三个数大小并排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//打印1-100中3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == (i % 3))
//		{
//			printf("  %d", i);
//		}
//	}
//	return 0;
//}
//打印最大公因数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
////打印闰年
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1949; year <= 2022; year++)
//	{
//		if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)  //判断是否为闰年：1.能被4整除并且不能被100整除2.能被400整除
//		{
//			printf("%d  ", year);
//			i++;
//		}
//	}
//	printf("闰年个数：%d\n", i);
//	return 0;
//}
//打印1-100的素数
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (2 == i)
		{
			printf("%d ", i);
		}
		else if (i%j != 0)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}
