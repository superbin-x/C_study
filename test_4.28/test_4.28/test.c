#include <stdio.h>
#include <string.h>

//一维数组

//int main()
//{
//	int arr[10];//数组的创建：类型 数组名[元素个数]；
//	char arr1[5];
//	int arr2[10] = {1,2,3};//不完全初始化，剩下元素默认为0
//	char arr3[] = "abcdef";
//	char arr4[] = { 'a','b','c','d','e','f' };
//	int i = 0;
//	int len = strlen(arr3);
//	printf("%d\n", sizeof(arr3));//sizeof计算arr3所占空间的大小
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr3));//strlen求字符串的长度：‘\0’前的字符个数 
//	printf("%d\n", strlen(arr4));//随机值
//	//一维数组的使用
//	printf("%c\n", arr3[4]);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr3[i]);
//	}
//	printf("\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr3[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组在内存中是连续存放的
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//数组在内存中是连续存放的
//	}
//	return 0;
//}
//二维数组
int main()
{
	int arr[3][4];//二维数组：3行4列
	char arr1[5][6];
	int arr2[2][4] = { 1,2,3,4,5 };
	int arr3[2][4] = { {1,2,3},{4,5} };
	int arr4[][4] = { 1,2,3,4,5 };//行可以省略，列不可以
	int i = 0;
	printf("arr2[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d  ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("arr3[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d  ", arr3[i][j]);
		}
		printf("\n");
	}
	printf("&arr3[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p\n", i, j, &arr3[i][j]);
		}
	}
	return 0;
}