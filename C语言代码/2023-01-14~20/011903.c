#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�붨��һ������ʽ��diff(x, y), ����x��y��ֵ֮��
// 
//#define diff(x,y) ((x)-(y))
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d", diff(x, y));
//	return 0;
//}

//����������ʹ���˸ú�ı��ʽ�Ĺ���Ϊ���� a��b��c��d�е����ֵ

//#define max(x,y) (((x)>(y))? (x):(y))
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", max(max(a, b), max(c, d)));
//	printf("%d\n", max(max(max(a, b), c), d));
//
//	return 0;
//}

//�붨��һ������ʽ�� swap(type, a, b)��ʹtype�͵���ֵ����

//#define swap(a,b) ((a)=(a)^(b),(b)=(a)^(b),(a)=(a)^(b))

#define swap(a,b) ((a)=(a)+(b),(b)=(a)-(b),(a)=(a)-(b))

int main()
{
	int a = 0;
	int b = 10;
	
	swap(a, b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
