#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
//if语句
//int main()
//{
//	int age = 10;
//	printf("输入年龄1：");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("单分支：未成年\n");
//	}
//	printf("输入年龄2：");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("双分支：未成年\n");
//	}
//	else {
//		printf("双分支：成年\n");
//	}
//	printf("输入年龄3：");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("多分支：未成年\n");
//	}
//	else if (age >= 18 && age < 50) {
//			printf("多分支：成年\n");
//		}	
//		 else {
//			printf("多分支：老年\n");
//			}
//	return 0;
//}
//
//练习：1.判断一个数是否为奇数，2.输出1-100的奇数
//int main()
//{
//	int i = 1;
//	int s = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		s = i % 2;
//		if (0 != s)
//		{
//			printf(" %d", i);
//		}
//	}
//
//	return 0;
//}
//switch语句
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期七\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}