#include <stdio.h>
//指针
//int main()
//{
//	int a = 1;
//	int* p; //p为整型指针变量：用来存放地址的变量  类型：int* char* ……
//	p = &a;
//	printf("a=%d\n", a);
//	printf("a地址：%p\n", &a);
//	printf("p=%p\n", p);
//	printf("p的大小：%d\n", sizeof(p));// 32位机
//	*p = 2;  //*：解引用操作符(间接访问操作符)  *p=2—>对指针变量p解引用操作，找到p指向的对象a,并将2复制给a
//	printf("*p=a=%d\n", a);
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//	return 0;
//}
////结构体 ；自己创建的一种类型，关键字：struct
struct BOOK
{
	char name[30];
	char author[10];
	short price;
}; //;不能少
int main()
{
	//利用结构体类型创建一个该类型的结构体变量a
	struct BOOK a = { "一本书","张三",100 };  //对结构体变量a赋值
	struct BOOK* b = &a;  // b：结构体类型指针，指向结构体变量a的地址
	//利用结构体指针b打印
	printf("b书名：%s\n", b->name);
	printf("作者：%s\n", b->author);
	printf("价格：%d元\n", b->price);
	printf("a书名：%s\n", a.name);
	printf("作者：%s\n", a.author);
	printf("价格：%d元\n", a.price);
	// .操作符：结构体变量 . 成员
	//->操作符：结构体指针 -> 成员
	a.price = 98;
	printf("修改的价格：%d元\n", a.price);
	strcpy(a.name, "二本书"); //修改书名（字符串）：一本书——>二本书;strcpy 字符串拷贝
	printf("修改的书名：%s\n", a.name);
	return 0;
}

