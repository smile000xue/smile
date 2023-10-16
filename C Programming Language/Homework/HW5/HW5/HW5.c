#include <stdio.h>

//int main()
//{
//	char a;
//	int num = 0;
//	int word=1;
//	printf("Enter a sentence:");
//	
//	while ((a = getchar()) != '\n')
//	{
//		if (a != ' ')
//		{
//			num++;
//		}
//		else
//		{
//			word++;
//		}
//	}
//	printf("Average word length:%.1f",(float)num/word);
//
//	return 0;
//}

//int main()
//{
//	int a, b, c, d,numerator, denominator, oper;
//	printf("Enter an equation:");
//	a = getchar()-48;
//	getchar();
//	b = getchar() - 48;
//	oper = getchar();
//	c = getchar() - 48;
//	getchar();
//	d = getchar() - 48;
//	getchar();
//
//	switch (oper)
//	{
//	case '+':denominator = b * d; numerator = a * d + b * c; break;
//	case '-':denominator = b * d; numerator = a * d - b * c; break;
//	case '*':denominator = b * d; numerator = a * c; break;
//	case '/':denominator = b * c; numerator = a * d ; break;
//	}
//	printf("Result: %d/%d", numerator, denominator);
//
//
//	return 0;
//}

int main()
{
	char fl, sl;
	printf("Enter the first letter: ");
	fl=getchar();
	getchar();
	printf("Enter the second letter: ");
	sl = getchar();
	char i = 0;
	printf("Vowels:");
	if (fl > sl)
	{
		for (i = fl; i <= 122; i++)
		{
			if(i=='A'||i=='E' || i == 'I' || i == 'O' || i == 'U' ||i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' )
			printf("%c ", i);
		}
		for (i = 65; i <=sl; i++)
		{
			if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
				printf("%c ", i);
		}
	}
	else
	{
		for (i = fl; i <= sl; i++)
		{
			if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
				printf("%c ", i);
		}
	}
	return 0;
}