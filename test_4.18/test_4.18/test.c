#define  _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
//// do while 循环
//int main()
//{
//	int i = 1;
//	do {
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	i = 1;
//	do {
//		if (5 == i)
//		{
//			break;
//		}
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	i = 1;
//	do {
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
// 练习：计算n的阶层
//int main()
//{
//	int i = 0;
//	int s = 1;
//	int n = 0;
//	printf("请输入n:");
//	scanf("%d", &n);
//	if (0 == n)
//	{
//		printf("n!=%d\n",s = 0);
//	}
//	else {
//		for (i = 1; i <= n; i++)
//		{
//			s = s * i;
//		}
//		printf("n!=%d\n", s);
//	}
//}
//计算1！+2！+……+10！
//int main()
//{
//	int n = 0;
//	int s = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		s = s * n;
//		sum = sum + s;
//		
//	}
//	printf("1！+2！+……+10=%d\n", sum);
//	return 0;
//}
// 二分法查找
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int sz = sizeof(a) / sizeof(a[0]);  //计算元素个数
	int l = 0;   //左下标
	int r = sz - 1;  //右下标
	int m = 0;
	printf("输入查找数（1-10）：");
	scanf("%d", &n);
	while (l <= r) 
	{
		m = (l + r) / 2;
		if (n < a[m])
		{
			r = m - 1;
		}
		else if (n > a[m])
			{
				l = m + 1;
			}
			else
			{
				printf("找到了，下标为：%d\n", a[m]);
				break;
			}
	}
	if (l > r)
	{
		printf("无\n");
	}	
	return 0;
}
//
#include <string.h>
//
//int main()
//{
//	char a[] = "hello word!";
//	char a1[] = "###########";
//	int i = 0;
//	int l = 0;
//	int r = strlen(a) - 1;
//	while(l <= r)
//	{
//		a1[l] = a[l];
//		a1[r] = a[r];
//		l++;
//		r--;
//		printf("%s\n", a1);
//	}
//	return 0;
//}
////
//int main()
//{
//	int i = 0;
//	char password[15] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456789")==0) //==不能直接用来比较两个字符串是否相等，应该使用一个库函数：strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次输入错误，请24h后再登录\n");
//	}
//	return 0;
//}