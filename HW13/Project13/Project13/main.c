#define _CRT_SECURE_NO_WARNINGS
#include "maintain.h"
#include "Debug.h"

int main()
{
	Parts parts[PartsInventory];
	InitParts(parts);
	char code = 0;
	do
	{
		printf("Enter operation code:");
		scanf(" %c", &code);
		switch (code)
		{
		case 'i':InsertParts(parts); break;
		case 's':SearchParts(parts); break;
		case 'u':UpdataParts(parts); break;
		case 'p':PrintParts(parts); break;
		case 'd':DeleteParts(parts); break;
		case 'q':break;
		default:break;
		}
	} while (code != 'q');	



	return 0;
}



//struct syudent_name {
//	char fist[30];
//	char last[30];
//};
//
//typedef struct class {
//
//	struct syudent_name syudent_name;
//	float score[4];
//}class;
//
//int main()
//{
//	class class[6];
//	int i = 0;
//	float sum[3] = { 0 };
//	float ave[3] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		printf("Name:");
//		scanf("%s", &class[i].syudent_name.fist);
//		scanf("%s", &class[i].syudent_name.last);
//		printf("Score:");
//		scanf(" %f %f %f", &class[i].score[0], &class[i].score[1], &class[i].score[2]);
//		sum[0] += class[i].score[0];
//		sum[1] += class[i].score[1];
//		sum[2] += class[i].score[2];
//		class[i].score[3] = (class[i].score[0] + class[i].score[1] + class[i].score[2]) / 3.0;
//	}
//	ave[0] = sum[0] / 5.0;
//	ave[1] = sum[1] / 5.0;
//	ave[2] = sum[2] / 5.0;
//
//	printf("Outstanding student:");
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			if (class[j].score[3] > class[j + 1].score[3])
//			{
//				class[5] = class[j];
//				class[j] = class[j + 1];
//				class[j + 1] = class[5];
//			}
//		}
//	}
//
//	for (i = 4; i >= 0; i--)
//	{
//		if (class[i].score[0] > ave[0] && class[i].score[1] > ave[1] && class[i].score[2] > ave[2])
//		{
//			printf("%s %s\n", class[i].syudent_name.fist, class[i].syudent_name.last);
//		}
//		else
//		{
//			if (i == 4)
//			{
//				printf("none\n");
//			}
//		}
//	}
//
//
//	return 0;
//}
