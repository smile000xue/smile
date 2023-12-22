#ifndef __maintain_h__
#define __maintain_h__



#define PartsInventory 100
#define Maxsize 100
#define DEBUG 1

typedef struct parts {
	int partnumber;
	char partname[Maxsize];
	int partquantity;
	char category[25];
}Parts;

void InitParts(Parts parts[]);
void InsertParts(Parts parts[]);
void SearchParts(Parts parts[]);
void UpdataParts(Parts parts[]);
void DeleteParts(Parts parts[]);
void PrintParts(Parts parts[]);

int num_parts;

#endif
