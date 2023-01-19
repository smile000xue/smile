#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//结构体

struct menu//结构体的定义
{
	char name[10];
	int price;
	float weight;
	char a;
}m1 = { "香辣肉丝",10,1,'A' };//结构体的初始化

void print1(struct menu m1)
{
	printf("%s\n", m1.name);
}

void print2(struct menu* p1)
{
	printf("%s\n", p1->name);
}



int main()
{
	struct menu m2 = { "鱼",20,2,'B' };//结构体的初始化

	//结构体的访问

	printf("%s %d %f %c\n", m1.name, m1.price, m1.weight, m1.a);
	printf("%s %d %f %c\n", m2.name, m2.price, m2.weight, m2.a);

	struct menu* p1 = &m1;
	struct menu* p2 = &m2;
	printf("%s %d %f %c\n", (* p1).name, (* p1).price, (*p1).weight, (*p1).a);
	printf("%s %d %f %c\n", p2->name, p2->price, p2->weight, p2->a);

	//结构体的嵌套

	struct menu2
	{
		struct menu m1;
		int b;
		char name1[20];
	};

	struct menu2 m3 = { {"排骨",10,2,'C'},30,"好" };

	printf("%s %d %f %c %d %s\n", m3.m1.name, m3.m1.price, m3.m1.weight,m3.m1.a,m3.b, m3.name1);
	//结构体嵌式访问

	struct menu2* p3 = &m3;
	printf("%s %d %f %c %d %s\n", (*p3).m1.name, (*p3).m1.price, (*p3).m1.weight, (*p3).m1.a, (*p3).b, (*p3).name1);
	printf("%s %d %f %c %d %s\n", p3->m1.name, p3->m1.price, p3->m1.weight, p3->m1.a, p3->b, p3->name1);

	//结构体传参

	print1(m1);
	print2(&m1);


	return 0;
}