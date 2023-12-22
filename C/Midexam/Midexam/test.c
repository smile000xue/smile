#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main()
//{
//	/*char[13][4] = { 0 };
//	srand((unsigned)time(NULL));*/
//	/*printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
//	printf("\"Hello!\"");
//	printf("\n\\");
//	return 0;*/
//	/*int a;
//	unsigned int b;
//	long c;
//	unsigned long d;
//	short e;
//	unsigned short;
//	float;*/
//	/*double a = 7.0;
//	float b = 8.0;
//	printf("%f\n", b);
//	printf("%lf\n", a);*/
//	//char a = 0;
//	//scanf(" %c", &a);
//	//printf("%c", a);
//	/*int a = 0;
//	unsigned int b = 0;
//	printf("%d\n", a + b);
//	printf("%u\n", a + b);*/
//	/*int num = 0,suit=0,rank=0,i=0;
//	printf("Enter number of cards in hand:");
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		suit = rand() % 4;
//		rank = rand() % 12;
//	}*/
//	//float i;
//	//i = 3.0f;
//
//	/*printf("To C, or not to C: that is the question.\n");*/
//	/*
//	int height, length, width, volume, weight;
//	height = 8;
//	length = 12;
//	width = 10;
//	volume = height * length * width;
//	weight = volume / 166;
//	printf("Dimensions: %d x %d x %d\n", length, width, height);
//	printf("Volume (cubic inches): %d\n", volume);
//	printf("Dimensional weight (pounds): %d\n", weight);
//	return 0;
//
//	return 0;*/
//
//	//int height, length, width, volume, weight;
//	//printf("Enter height of box: ");
//	//scanf("%d", &height);
//	//printf("Enter length of box: ");
//	//scanf("%d", &length);
//	//printf("Enter width of box: ");
//	//scanf("%d", &width);
//	//volume = height * length * width;
//	//weight = volume / 166;
//	//printf("Volume (cubic inches): %d\n", volume);
//	//printf("Dimensional weight (pounds): %d\n", weight);
//	//return 0;
//
//	float fahrenheit, celsius;
//	printf("Enter Fahrenheit temperature: ");
//	scanf("%f", &fahrenheit);
//	celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
//	printf("Celsius equivalent: %.1f\n", celsius);
//	return 0;
//}
//int main()
//{
//	float t;
//	printf("Enter Celsius temperature:");
//	scanf("%f", &t);
//	printf("Fahrenheit equivalent:%.1f", t*1.8+32);
//	return 0;
//}
//int main(void)
//{
/*int n=0, m=0,t=0;
	printf("Enter two integers:");
	scanf("%d %d", &n, &m);
	if (n == 0)
	{
		printf("Greatest common divisor: %d",m);
	}
	else if (m == 0)
	{
		printf("Greatest common divisor: %d", n);
	}
	else if (n > m)
	{
		t = m;
		while ((m % t) != 0 || (n % t) != 0)
		{
			t--;
		}
		printf("Greatest common divisor:%d", t);
	}
	else
	{
		t = n;
		while ((m % t) != 0||(n%t)!=0)
		{
			t--;
		}
		printf("Greatest common divisor:%d", t);
	}*/
//int d = 0, n = 0,t=0,g=0;
	//printf("Enter a fraction:");
	//scanf("%d/%d", &d, &n);
	//if (n == 0)
	//{
	//	printf("It is illegal!");
	//}
	//else if (d == 0)
	//{
	//	d = 0;
	//	n = 0;
	//	printf("In lowest terms: 0");
	//}
	//else if (d > n)
	//{
	//	t =n;
	//	while ((n % t) != 0 || (d % t) != 0)
	//	{
	//		t--;
	//	}
	//	d /= t;
	//	n /= t;
	//	printf("In lowest terms: %d / %d", d, n);
	//}
	//else
	//{
	//	t = d;
	//	while ((d % t) != 0 || (n % t) != 0)
	//	{
	//		t--;
	//	}
	//	d /= t;
	//	n /= t;
	//	printf("In lowest terms: %d / %d", d, n);
	//}
/*char ch;
		int len = 0;
		printf("Enter a message: ");
		scanf("%c", &ch);
		while (ch != '\n') {
			len++;
			scanf("%c", &ch);
		}
		printf("Your message was %d character(s) long.\n", len);
		return 0;*/

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
			int in_hand[NUM_SUITS][NUM_RANKS] = { 0 };
			int num_cards, rank, suit, i;
			const char rank_code[] = { '2','3','4','5','6','7','8',
			'9','t','j','q','k','a' };
			const char suit_code[] = { 'C','D','H','S' };
			srand((unsigned)time(NULL));
			printf("Enter number of cards in hand: ");
			scanf("%d", &num_cards);
			printf("Your hand:");
			for (i = 0; i < num_cards; i++)
				suit = rand() % NUM_SUITS; /* picks a random suit */
			rank = rand() % NUM_RANKS; /* picks a random rank */
			if (!in_hand[suit][rank]) {
				in_hand[suit][rank] = 1;
				printf(" %c%c", rank_code[rank], suit_code[suit]);
			}


			return 0;
		}
	/*printf("\n");*/