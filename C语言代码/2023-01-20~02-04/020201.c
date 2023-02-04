#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//给定秒数 seconds ，把秒转化成小时、分钟和秒。

//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//
//    int hour = seconds / 3600;
//    int min = (seconds - hour * 3600) / 60;
//    seconds = seconds - hour * 3600 - min * 60;
//
//    printf("%d %d %d\n", hour, min, seconds);
//
//    return 0;
//}


//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩

//int main()
//{
//    float s1 = 0.0;
//    float s2 = 0.0;
//    float s3 = 0.0;
//    scanf("%f %f %f", &s1, &s2, &s3);
//
//    float total = s1 + s2 + s3;
//    float averge = (s1 + s2 + s3) / 3.0;
//
//    printf("%.2f %.2f", total, averge);
//
//    return 0;
//}

//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，
//并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    float h = 0;
//    float m = 0.0;
//    int remain = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        remain = n - m / h;
//        printf("%d", remain);
//    }
//
//    return 0;
//}

//输出描述：
//I lost my cellphone!
//
//int main()
//{
//    printf("I lost my cellphone!");
//
//    return 0;
//}

//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
//Name Age Gender
//-------------------- -
//Jack 18 man
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}


//从键盘输入5个学生的成绩（整数）
//求他们的平均成绩（浮点数，保留一位小数

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int input = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &input);//五次输入存入input中
//		sum += input;
//	}
//	printf("%.1f", sum / 5.0);//把浮点数按精度为1打印出来
//
//	return 0;
//}

//一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
//输出描述：
//一行，a + b的十进制结果。

//%d 十进制整数输出
//%o 八进制形式输出（加前缀用%#o输出）
//%x 十六进制形式输出（加前缀用%#x）
//%X 十六进制字母大写输出
//%e 以科学计数法输出浮点数
//%E 以科学计数法大写E输出浮点数
//%f 浮点型输出

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//
//
//    printf("%d", a + b);
//
//    return 0;
//}

//一行，四个数字，第一个数表示小明看中的衣服价格，
//第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 
//注：输入日期保证只有“双11”和“双12”

//int main()
//{
//    float price = 0.0;
//    int month = 0;
//    int day = 0;
//    int a = 0;
//
//    scanf("%f %d %d %d", &price, &month, &day, &a);
//
//    if (month == 11 && day == 11)
//    {
//        price *= 0.7;
//            if (a == 1)
//                price -= 50;
//    }
//    else
//    {
//        price *= 0.8;
//        if (a == 1)
//            price -= 50;
//    }
//    if (price < 0)
//        price = 0;
//    printf("%.2f", price);
//
//    return 0;
//}

//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//输出描述：
//一行，输出成绩最高的前五个，用空格分隔


//int main()
//{
//    int arr[50] = { 0 };
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);//数组名加下标时表示数组内的元素，要加&。
//        //如果不加&，可以写成数组名+下标，arr+i
//    }
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = n - 1; j >= 1 + i; j--)
//        {
//            if (arr[j] > arr[j - 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j - 1];
//                arr[j - 1] = tmp;
//            }
//        }
//        printf("%d ", arr[i]);
//    }
//
//
//    return 0;
//}

//输入描述：
//一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：
//一行，一个字符，A或B或E，
//输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。

int main()
{
    char arr[100] = { 0 };
    /*scanf("%s", arr);*/
    gets(arr);

    char* p = arr;
    int a = 0;
    int b = 0;

    while (*p!='0')//数字0和字符0是不一样的
    {
        if (*p == 'A')
            a++;
        else
            b++;
        p++;
    }
    if (a > b)
        printf("A");
    else if (a < b)
        printf("B");
    else
        printf("E");
    return 0;
}
