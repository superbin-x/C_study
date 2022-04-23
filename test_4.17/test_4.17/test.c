#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
// //循环语句：while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("  %d", i);
//		i++;
//	}
//	printf("\n");
//	i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			break;
//		printf("  %d", i);
//		
//	}
//	printf("\n");
//	i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("  %d", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();//输入字符
//	int ch1 = 0;
//	putchar(ch);//打印字符
//	printf("  %c\n", ch);
//	while ((ch1 = getchar())!= EOF)//ctrl +z 结束输入
//	{
//		putchar(ch1);
//	}
//	return 0; 
//}
////while_getchar（）的作用
//int main()
//{
//	int ch = 0;
//	char password[20] = {0};
//
//	printf("输入passward：");
//	scanf("%s", password);
//	while ((getchar()) != '\n')
//	{
//		;
//	}
//	printf("输入(Y/N)：");
//	ch = getchar();
//	if ('Y' == ch){
//		printf("输入成功\n");
//	}
//	else {
//		printf("重新输入\n");
//	}
//
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}
////for循环
//int main()
//{
//	int i = 0;
//	//   初始化  判断   调整
//	for (i = 1; i <= 10; i++)
//	{
//		printf(" %d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf(" %d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf(" %d", i);
//	}
//	return 0;
//}