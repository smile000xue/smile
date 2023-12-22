#define _CRT_SECURE_NO_WARNINGS
#include "maintain.h"
#include <stdio.h>
#include<string.h>

int num_parts = 0;

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
#if DEBUG

	printf("Debug: Number of parts in database: %d\n", num_parts);

#endif

}

void SearchParts(Parts parts[])
{
	int num = 0, i = 0;
	printf("Enter part number:");
	scanf("%d", &num);
	while (parts[i].partnumber != num && parts[i].partnumber != 0)
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
#if DEBUG

	printf("Debug: Number of parts in database: %d\n", num_parts);

#endif

}

void UpdataParts(Parts parts[])
{
	int num = 0, q = 0, i = 0;
	printf("Enter part number:");
	scanf("%d", &num);

	while (parts[i].partnumber != num && parts[i].partnumber != 0)
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
#if DEBUG

	printf("Debug: Number of parts in database: %d\n", num_parts);

#endif
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
#if DEBUG

	printf("Debug: Number of parts in database: %d\n", num_parts);

#endif
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
	else if (parts[i].partnumber == 0)
	{
		printf("Error!The part is not in the database!\n");
	}
	else
	{
		while (parts[++i].partnumber == 0)
		{
			parts[i - 1] = parts[i];
		}
		num_parts--;
	}
#if DEBUG

	printf("Debug: Number of parts in database: %d\n", num_parts);

#endif
}

