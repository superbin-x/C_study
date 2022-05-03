#include <stdio.h>


//数组作为函数参数
//冒泡排序
//void bobble(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟排序已经有序
//		//每一趟冒泡排序:升序
//		int j = 0;
//		for (j = 0; j < (sz - 1)-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;	
//				flag = 0;//本趟排序不完全有序
//			}
//		}
//		if (1 == flag)
//		{
//			break;//用于跳出for循环，不是结束if语句
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 7,8,9,4,6,21,5,7,9,5,95,5,51 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble(arr, sz);//arr是数组，对数组arr进行传参，实际上传过去的是数组arr的首地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//数组名
int main()
{
	int arr[] = { 1,4,5,6,7,8,5 };
	printf(" arr    =%p\n", arr);//数组名是首元素的地址
	printf(" &arr[0]=%p\n", &arr[0]);
	printf("\n");
	printf(" &arr   =%p\n", &arr);
	//1. sizeof(数组名)：数组名表示整个数组
	//2. &数组名：数组名表示整个数组——>取出整个数组的地址

	return 0;
}