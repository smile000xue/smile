#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("%15d", 0xABCDEF);
//
//	return 0;
//}

//���ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO��

//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        if ((65 <= a && a <= 90) ||( 97 <= a && a <= 122))
//        {
//            printf("YES\n");
//            getchar();
//
//        }
//        else
//        {
//            printf("NO\n");
//            getchar();
//
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        if (isalpha(a))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//
//    }
//
//    return 0;
//}

//ת�������Ŀ�и���������ASCII����Ӧ���ַ�

//int main()
//{
//    char a[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    for (int i = 0; i < 12; i++)
//    {
//        printf("%c", a[i]);
//    }
//    printf("\n");
//
//    int b[] = { 'A','C','G','f','w','r' };
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", b[i]);
//    }
//    return 0;
//}

//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ����

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int year = a / 10000;
//	int month = a / 100-year*100;
//	int day = a - (a / 100) * 100;
//
//	printf("year=%d\n", year);
//	if (month > 9)
//	{
//		printf("month=%d\n", month);
//
//	}
//	else
//	{
//		printf("month=0%d\n", month);
//
//	}
//	if (day > 9)
//	{
//		printf("date=%d\n",day);
//
//	}
//	else
//	{
//		printf("date=0%d\n",day);
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("%d\n", year);
//	printf("%02d\n", month);
//	printf("%02d\n", date);
//
//	return 0;
//}

//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ���

//int main()
//{
//	int a = 0;
//
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n", 1<<a);
//	}
//
//	return 0;
//}

//����������������Χ - 231~231 - 1�����������������
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//����һ���ַ���������ַ���Ӧ��ASCII��

//int main()
//{
//	char a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		printf("%d\n", a);
//		getchar();
//	}
//
//	return 0;
//}

//�������ʽ��(-8 + 22)��a - 10 + c��2�������У�a = 40��c = 212

//int main()
//{
//	int a = 40; 
//	int c = 212;
//	printf("%d", (-8 + 22)*a - 10 + c/2);
//
//	return 0;
//}

//������������a��b(��10, 000 < a, b < 10, 000)������a����b�������̺�����

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	printf("%d %d", a / b, a % b);
	

	return 0;
}