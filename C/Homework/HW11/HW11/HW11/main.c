#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


#define PartsInventory 100
#define Maxsize 100

typedef struct parts {
	int partnumber;
	char partname[Maxsize];
	int partquantity;
	char category[25];
}Parts;

int num_parts = 0;

void InitParts(Parts parts[]);
void InsertParts(Parts parts[]);
void SearchParts(Parts parts[]);
void UpdataParts(Parts parts[]);
void DeleteParts(Parts parts[]);
void PrintParts(Parts parts[]);

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

void InitParts(Parts parts[])
{
	int i = 0;
	for (i = 0; i < PartsInventory; i++)
	{
		parts[i].partnumber = 0;
		parts[i].partquantity = 0;
		char partname[Maxsize] = { '\0' };
		strcpy(&parts[i].partname, partname);
		strcpy(&parts[i].category, partname);
	}
}

void InsertParts(Parts parts[])
{
	if (num_parts < PartsInventory)
	{
		printf("Enter part number:");
		scanf("%d", &parts[num_parts].partnumber);
		printf("Enter part name:");
		getchar();
		gets(&parts[num_parts].partname);
		printf("Enter quantity on hand:");
		scanf("%d", &parts[num_parts].partquantity);
		printf("Enter category:");
		getchar();
		gets(&parts[num_parts].category);
		num_parts++;
	}
	else
	{
		printf("Error! the database is full\n");
	}
	
}

void SearchParts(Parts parts[])
{
	int num = 0,i=0;
	printf("Enter part number:");
	scanf("%d", &num);
	while (parts[i].partnumber!=num&& parts[i].partnumber != 0)
	{
		i++;
	}
	if (parts[i].partnumber != 0)
	{
		printf("Part name :%s\n", parts[i].partname);
		printf("Quantity on hand:%d\n", parts[i].partquantity);
		printf("Category name :%s\n", parts[i].category);
	}
	else
	{
		printf("Part not found.\n");
	}
	
}

void UpdataParts(Parts parts[])
{
	int num = 0,q=0,i=0;
	printf("Enter part number:");
	scanf("%d", &num);

	while (parts[i].partnumber != num&& parts[i].partnumber!=0)
	{
		i++;
	}
	if (parts[i].partnumber != 0)
	{
		printf("Enter change in quantity on hand:");
		scanf("%d", &q);
		parts[i].partquantity += q;
	}
	else
	{
		printf("Error! It is not in the database!\n");
	}
}

void PrintParts(Parts parts[])
{
	printf("Part Number Part Name Quantity on Hand Category name\n");
	int i = 0;
	while (parts[i].partnumber != 0)
	{
		printf("%d           %s             %d             %s\n", parts[i].partnumber, parts[i].partname, parts[i].partquantity, parts[i].category);
		i++;
	}
}

void DeleteParts(Parts parts[])
{
	int num = 0, i = 0;
	printf("Enter the part number you want to delete:");
	scanf("%d", &num);
	while (parts[i].partnumber != num && parts[i].partnumber != 0)
	{
		i++;
	}
	if (parts[0].partnumber == 0)
	{
		printf("Error!The database is empty!\n");
	}
	else if(parts[i].partnumber == 0)
	{
		printf("Error!The part is not in the database!\n");
	}
	else
	{
		while (parts[++i].partnumber == 0)
		{
			parts[i-1] = parts[i];
		}
	}

}

struct syudent_name {
	char fist[30];
	char last[30];
};

typedef struct class{

	struct syudent_name syudent_name;
	float score[4];
}class;

int main()
{
	class class[6];
	int i = 0;
	float sum[3] = { 0 };
	float ave[3] = { 0 };
	for (i = 0; i < 5; i++)
	{
		printf("Name:");
		scanf("%s", &class[i].syudent_name.fist);
		scanf("%s", &class[i].syudent_name.last);
		printf("Score:");
		scanf(" %f %f %f", &class[i].score[0], &class[i].score[1], &class[i].score[2]);
		sum[0] += class[i].score[0];
		sum[1] += class[i].score[1];
		sum[2] += class[i].score[2];
		class[i].score[3] = (class[i].score[0] + class[i].score[1] + class[i].score[2]) / 3.0;
	}
	ave[0] = sum[0] / 5.0;
	ave[1] = sum[1] / 5.0;
	ave[2] = sum[2] / 5.0;

	printf("Outstanding student:");
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 4-i; j++)
		{
			if (class[j].score[3] > class[j + 1].score[3])
			{
				class[5] = class[j];
				class[j] = class[j + 1];
				class[j + 1] = class[5];
			}
		}
	}

	for (i = 4; i>=0;i--)
	{
		if (class[i].score[0] > ave[0] && class[i].score[1] > ave[1] && class[i].score[2] > ave[2])
		{
			printf("%s %s\n", class[i].syudent_name.fist, class[i].syudent_name.last);
		}
		else
		{
			if (i == 4)
			{
				printf("none\n");
			}
		}
	}


	return 0;
}
