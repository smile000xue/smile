#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�������� seconds ������ת����Сʱ�����Ӻ��롣

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


//��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ�

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

//BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�
//����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
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

//���������
//I lost my cellphone!
//
//int main()
//{
//    printf("I lost my cellphone!");
//
//    return 0;
//}

//�����Ϊ���У��ֱ�Ϊ�����У��ָ��У���Ϣ�С�
//��һ�У������У�ÿ������֮����4���ո�
//�ڶ��У��ָ��У�һ��21������"-"��
//�����У���Ϣ�У�ÿ�������Ϣ�ͱ�������ĸ���롣����������£�
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


//�Ӽ�������5��ѧ���ĳɼ���������
//�����ǵ�ƽ���ɼ���������������һλС��

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int input = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &input);//����������input��
//		sum += input;
//	}
//	printf("%.1f", sum / 5.0);//�Ѹ�����������Ϊ1��ӡ����
//
//	return 0;
//}

//һ�У�һ��ʮ��������a����һ���˽�����b���м���һ���ո�
//���������
//һ�У�a + b��ʮ���ƽ����

//%d ʮ�����������
//%o �˽�����ʽ�������ǰ׺��%#o�����
//%x ʮ��������ʽ�������ǰ׺��%#x��
//%X ʮ��������ĸ��д���
//%e �Կ�ѧ���������������
//%E �Կ�ѧ��������дE���������
//%f ���������

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

//һ�У��ĸ����֣���һ������ʾС�����е��·��۸�
//�ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� 
//ע���������ڱ�ֻ֤�С�˫11���͡�˫12��

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

//���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
//���������
//һ�У�����ɼ���ߵ�ǰ������ÿո�ָ�


//int main()
//{
//    int arr[50] = { 0 };
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);//���������±�ʱ��ʾ�����ڵ�Ԫ�أ�Ҫ��&��
//        //�������&������д��������+�±꣬arr+i
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

//����������
//һ�У��ַ����У�����A��B���������ַ�0������
//���������
//һ�У�һ���ַ���A��B��E��
//���A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�

int main()
{
    char arr[100] = { 0 };
    /*scanf("%s", arr);*/
    gets(arr);

    char* p = arr;
    int a = 0;
    int b = 0;

    while (*p!='0')//����0���ַ�0�ǲ�һ����
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
