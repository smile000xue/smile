#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#include <stdio.h>
// 
//
//int main()
//{
//    printf("%#o %#X",1234,1234);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0xABCDEF;
    //printf("%15d",a);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%d""%f""%f""%f", &n, &a, &b, &c);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", n, a, b, c);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%d; %f, %f, %f", &n, &a, &b, &c);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", n, a, b, c);
//    return 0;
//}

//针对每组输入，反向输出对应四位数


//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//
//    /*int j = 0;
//    int sum = 0;
//    for (j = 1000; j >= 1; j/=10)
//    {
//        int b = a % 10;
//        sum += b * j;
//        a /= 10;
//    }
//    printf("%d",sum);*/
//
//    while (a)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//    }
//
//    return 0;
//}

//实现字母的大小写转换。多组输入输出

int main()
{
    char a = 0;
    while ((a = getchar())!=EOF)
    {
        putchar(a + 32);
        printf("\n");
        getchar();
    }

    return 0;
}