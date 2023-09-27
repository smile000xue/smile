#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s1, s2, m1, m2, h1, h2;
	printf("Enter current time:");
	scanf("%d:%d:%d", &h1, &m1, &s1);
	printf("Enter departure time: ");
	scanf("%d:%d:%d", &h2, &m2, &s2);
	printf("Remaining time:%ds", (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1));

}


