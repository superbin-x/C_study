#include <stdio.h>
#include <math.h>

////写一个子函数：判断一个数是不是素数
//int is_prime(int n) //是素数返回1，不是返回0
//{
//	int s = 0;
//	int i = 0;
//	s = sqrt(n);
//	for (i = 2; i <= s; i++)
//	{
//		if (0 == n % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//////子函数：判断是否为闰年,
//int is_leap_year(int x) //闰年返回1，不是闰年返回0
//{
//	if ( x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//////二分法查找:有序数组
//int find(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
////子函数：每调用一次函数，num+1
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int i = 0;
//	int year = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 2;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int b = 0;
//	int num = 0;
//	printf("素数：\n ");
//	for (i = 2; i <= 100; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf(" %d", i);
//		}
//	}
//	printf("\n");
//	printf("闰年：\n ");
//	for (year = 1949; year <= 2022; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{ 
//			printf(" %d", year);
//		}
//	}
//	printf("\n");
//	printf("二分法查找：\n ");
//	b = find(arr, k, sz); 
//	//arr[] = { 1,2,3,4,5,6,7,8,9 };   k = 2;
//	if (b == -1)
//	{
//		printf("无");
//	}
//	else
//	{
//		printf("下标是：%d\n", b);
//	}
//	printf("\n");
//	printf("每调用一次函数，num+1：\n ");
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d\n ", num);
//	return 0;
//}
////链式访问：
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43))); //4321
//
//	return 0;
//}
#include "ADD.h"
int Add(int x, int y);//函数的声明：可以用，但不适合
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	int sum1 = 0;
	sum = Add(a, b);
	sum1 = ADD(a, b);
	printf("sum=%d\n", sum);
	printf("sum1=%d\n", sum1);
	return 0;

}
int Add(int x, int y)//函数的定义
{
	int z = x + y;
	return z;

}