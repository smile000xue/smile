#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����������
//һ�У������������ֱ��ʾ���أ��������ߣ����ף����м���һ���ո�ָ���
//���������
//һ�У�BMIָ����������λС����

//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//
//    scanf("%f %f", &a, &b);
//    c = (a / ((b / 100) * (b / 100)));
//    printf("%.2f", c);
//
//    return 0;
//}

//����������
//һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո������
//���������
//һ�У��������ܳ��������������λС������
//�м���һ���ո��������������ʽ������������

//#include <math.h>

//int main()
//{
//    int a = 0;
//    int c = 0;
//    int b = 0;
//    scanf("%d %d %d", &a, &b, &c);
//
//    float circu = (float)a + b + c;
//    double p = (a + b + c) / 2.0;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//
//    printf("circumference=%.2f area=%.2lf", circu, area);
//
//    return 0;
//}

//����������
//һ�У��ø�������ʾ������İ뾶��
//���������
//һ�У�����������С�������3λ��

//int main()
//{
//    double n = 0.0;
//    scanf("%lf", &n);
//
//    double v = (4.0 / 3) * (3.1415926) * n * n * n;
//
//    printf("%.3lf", v);
//
//    return 0;
//}

//����������
//һ�У�3�Ƴɼ����ÿո�ָ�����Χ��0~100����
//���������
//һ�У���3�Ƴɼ���ʾ�����������ʽ������������

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//
//    return 0;
//}

//���������
//һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�

//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//		  int sum = 0;
//        int j = 10;
//        int a = 0;
//        int b = 0;
//        for (j = 10; j <= 10000; j *= 10)
//        {
//            a = i % j;
//            b = i / j;
//            sum += a * b;
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);           
//        }
//
//    }
//
//    return 0;
//}


//1.       ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34��
//
//2.       ������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��
//
//���磺45 + 80 = 25
//
//Ҫ������Ǹ����� a�� b��ģ��KiKi������������� a + b ��ֵ

//int main()
//{
//    unsigned int a = 0;
//    unsigned int b = 0;
//    scanf("%d %d", &a, &b);
//
//    unsigned int c = a + b;
//
//    printf("%d", c % 100);
//
//
//
//    return 0;
//}

//����һ����������Ҫ��õ��ø������ĸ�λ����
//
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//
//    int b = (int)a % 10;
//    printf("%d", b);
//
//
//    return 0;
//}

//����������
//һ�У�����һ������age��
//���������
//һ�У�����һ����������������Ӧ��������

#include <stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    long long seconds = age * 3.156e7;
    //
    //e7����10��7�η�

    printf("%lld", seconds);

    return 0;
}