#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ṹ��

struct menu//�ṹ��Ķ���
{
	char name[10];
	int price;
	float weight;
	char a;
}m1 = { "������˿",10,1,'A' };//�ṹ��ĳ�ʼ��

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
	struct menu m2 = { "��",20,2,'B' };//�ṹ��ĳ�ʼ��

	//�ṹ��ķ���

	printf("%s %d %f %c\n", m1.name, m1.price, m1.weight, m1.a);
	printf("%s %d %f %c\n", m2.name, m2.price, m2.weight, m2.a);

	struct menu* p1 = &m1;
	struct menu* p2 = &m2;
	printf("%s %d %f %c\n", (* p1).name, (* p1).price, (*p1).weight, (*p1).a);
	printf("%s %d %f %c\n", p2->name, p2->price, p2->weight, p2->a);

	//�ṹ���Ƕ��

	struct menu2
	{
		struct menu m1;
		int b;
		char name1[20];
	};

	struct menu2 m3 = { {"�Ź�",10,2,'C'},30,"��" };

	printf("%s %d %f %c %d %s\n", m3.m1.name, m3.m1.price, m3.m1.weight,m3.m1.a,m3.b, m3.name1);
	//�ṹ��Ƕʽ����

	struct menu2* p3 = &m3;
	printf("%s %d %f %c %d %s\n", (*p3).m1.name, (*p3).m1.price, (*p3).m1.weight, (*p3).m1.a, (*p3).b, (*p3).name1);
	printf("%s %d %f %c %d %s\n", p3->m1.name, p3->m1.price, p3->m1.weight, p3->m1.a, p3->b, p3->name1);

	//�ṹ�崫��

	print1(m1);
	print2(&m1);


	return 0;
}