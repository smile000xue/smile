#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ��
//int main()
//{
//	char num;
//
//	//while((num=getchar())!=EOF)
//	while (scanf("%c", &num) != EOF)
//	//while (scanf(" %c", &num) != EOF)
//	//while(~scanf("%c", &num))//scanf�������صĳɹ���ȡ�����ĸ��������ɹ�����EOF(EOF��˼��end of file, �������� - 1��
//	//getchar���ص����ַ���ASCII��ֵ����������getchar�ڶ�ȡ��������ʧ�ܵ�ʱ�򣬻᷵��EOF(EOF��˼��end of file, �������� - 1��
//	{
//		if ((64 < num && num < 91) || (96 < num && num < 123))
//		{
//			printf("%c is an alphabet.\n", num);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", num);
//		}
//		getchar();
//	}
//
//	return 0;
//}

//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����
//֮��ת��Ϊ��д��ĸ

//int main()
//{
//	char num;
//	while (scanf(" %c", &num) != EOF)
//	{
//		if (num <= 'Z' && num >= 'A')
//		{
//			printf("%c\n", num+32);
//		}
//		else if (num <= 'z' && num >= 'a')
//		{
//			printf("%c\n", num - 32);
//		}
//	}
//
//	return 0;
//}

//KiKi���ѧϰ���ź���ϵͳ�γ̣����ſ�����һ���ǳ���Ȥ�ĺ�������λ��Ծ����������һ�ֶ��巽ʽ
//Ϊ:   ,��������λ�弤������ʱ��t�ϵ�ֵ

//int main()
//{
//	int t;
//	while (scanf(" %d", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//}

//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ�
//�����Ρ����������λ���ͨ�����Σ�

//int main()
//{
//	int sides[3];
//	while (scanf("%d %d %d", &sides[0], &sides[1], &sides[2]) != EOF)
//	{
//		if (sides[0] + sides[1] > sides[2] && sides[2] + sides[1] > sides[0] && sides[0] + sides[2] > sides[1])
//		{
//			if (sides[0] == sides[1] && sides[1] == sides[2])
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (sides[0] == sides[1] || sides[1] == sides[2]|| sides[0] == sides[2])
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}

//���Ǵ��������ͨ����ʮ���Ʊ�ʾ���ڼ�����ڴ������Զ����Ʋ�����ʽ�洢����ͨ�������Ʊ�ʾ����
//���Ƚϳ���Ϊ�˱����ڳ�����ƹ��������ʹ������ݣ�ͨ�����ð˽��ƺ�ʮ�����ƣ������˶����Ʋ�
//���ʾ���������������˶��������ı���ص㡣�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ������

//int main()
//{
//	printf("0%o 0X%X", 1234, 1234);
//
//	return 0;
//}
//
////BoBoд��һ��ʮ����������ABCDEF������KiKi��Ӧ��ʮ���������Ƕ���
//
//int main()
//{
//	printf("%15d\n", 0XABCDEF);
//
//	return 0;
//}

//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ����

int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);//%4d���Ƕ�ȡ4λ����
	printf("year=%d\n", year);
	printf("month=%02d\n", month);//�������2λʱ�������0���
	printf("date=%02d\n", date);
	return 0;
}

//���⣺����BMIָ������������ָ������BMIָ��������������ָ�����������ָ���ֳ����أ�Ӣ��Ϊ
//Body Mass Index�����BMI�����������ع����������������ƽ���ó������֣���Ŀǰ�����ϳ��õ�
//�����������ݳ̶��Լ��Ƿ񽡿���һ����׼����Ҫ����ͳ����;����������Ҫ�Ƚϼ�����һ���˵�����
//���ڲ�ͬ�߶ȵ����������Ľ���Ӱ��ʱ��BMIֵ��һ���������ɿ���ָ�ꡣ


int main()
{
	int weight = 0;
	double height = 0;
	double bmi = 0.0;
	scanf("%d%d", &weight, &height);
	bmi = weight / (height * height / 10000);
	printf("%.2lf\n", bmi);
	return 0;
}