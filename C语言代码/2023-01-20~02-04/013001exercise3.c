#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入描述：
//一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
//输出描述：
//一行，BMI指数（保留两位小数）

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

//输入描述：
//一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//输出描述：
//一行，三角形周长和面积（保留两位小数），
//中间用一个空格隔开，输出具体格式详见输出样例。

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

//输入描述：
//一行，用浮点数表示的球体的半径。
//输出描述：
//一行，球体的体积，小数点后保留3位。

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

//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来，输出格式详见输出样例。

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

//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。

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


//1.       只保留该数的最后两位，例如：对KiKi来说1234等价于34；
//
//2.       如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。
//
//例如：45 + 80 = 25
//
//要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a + b 的值

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

//给定一个浮点数，要求得到该浮点数的个位数。
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

//输入描述：
//一行，包括一个整数age。
//输出描述：
//一行，包含一个整数，输出年龄对应的秒数。

#include <stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    long long seconds = age * 3.156e7;
    //
    //e7就是10的7次方

    printf("%lld", seconds);

    return 0;
}