#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
#include <time.h>

#define NUM_DEFAULT  3
#define TIME_DEFAULT 5

int current_time = 0;

typedef struct JOB_element {
	char* name[10];

	int execution_time;
	int process_time;
} JOB_element;

typedef struct JOB_node {

	JOB_element element;

	struct JOB_Node* l_link;
	struct JOB_Node* r_link;

}JOB_node;

typedef struct JOB_list {

	struct JOB_node* head;

	int cnt;
}JOB_list;

//function
int empty_list(JOB_list* j);
JOB_list* init_list(JOB_list* j);
void print_JOB_list(JOB_list* j);

void check_JOB(JOB_list* j);
void delete_JOB(JOB_list* j, JOB_node* pre, JOB_node* cur, JOB_node* post);
void run_JOB(JOB_list* j);

int main(void) {
	char name[20];
	char key;

	int num = 1;
	int process_time;

	srand((unsigned)time(NULL));
	JOB_list* j = (JOB_list*)malloc(sizeof(JOB_list));
	j = init_list(j);

	while (num) {
		system("cls");
		printf("==================================================================================================================\n");
		printf("현재시각 : %d sec\n\n", current_time);
		printf("JOB List Information\t  shared_time : %d\n\n", j->cnt);

		print_JOB_list(j);
		printf("==================================================================================================================\n\n\n");
		printf("    프로그램 종료 : e\n\n\n");

		if (_kbhit())
		{
			key = _getch();
			if (key == 'e') {
				switch (key) {

				case 'e':
					printf("모든 인터럽트 JOB을 삭제하여 프로그램을 종료합니다\t확인: e\n");
					fflush(stdin);
					scanf("%s", name);

					if (!strcmp(name, "e"))
						num = 0;
					break;

				default:
					break;
				}
			}
		}

		if (j->head != NULL)
			run_JOB(j);
		else
			num = 0;
	}

	printf("\n프로그램 종료\n\n");

	return 0;
}

int empty_list(JOB_list* j)
{
	j->cnt = 0;
	return (j->head == NULL);
}

JOB_list* init_list(JOB_list* j)
{
	//구현 1
}

void print_JOB_list(JOB_list* j)
{
	JOB_node* temp = j->head;

	printf("  *Name		*Execution Time		*Process Time	*I/O Time\n");

	if (temp == NULL)
		printf("		(List is empty)		\n");
	else {
		do
		{
			printf(" %10s%7d%25d\n", temp->element.name, temp->element.execution_time, temp->element.process_time);
			temp = temp->r_link;
		} while (temp != j->head);
	}
}

void check_JOB(JOB_list* j) {
	//구현 2
}

void delete_JOB(JOB_list* j, JOB_node* pre, JOB_node* cur, JOB_node* post) {
	//구현 3
}

void run_JOB(JOB_list* j) {}

