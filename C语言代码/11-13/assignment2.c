//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char ElemType;  //Ԫ������
//typedef char linkDatatype;
//
////ջ�ڵ�
//typedef struct StackNode {
//    ElemType data;
//    struct StackNode *next;//ָ����һλ
//} StackNode;
//
//typedef struct Stack {
//    StackNode *top;//ջ��ָ��
//} Stack;
//
////ջ�ĳ�ʼ��
//void initStack(Stack *s) {
//    s->top = NULL;
//}
//
////�ж�ջ�Ƿ�Ϊ��
//int emptyStack(Stack *s) {
//    return s->top == NULL;
//}
//
////��ջ
//void pushStack(Stack *s, ElemType x) {
//    StackNode *p;
//    if (emptyStack(s)) {
//        s->top = (StackNode *) malloc(sizeof(StackNode));
//        s->top->next = NULL;
//        s->top->data = x;
//        return;
//    }
//    p = (StackNode *) malloc(sizeof(StackNode));
//    p->data = x;
//    p->next = s->top;
//    s->top = p;
//}
//
////���ջ�ǿգ���ջ��ջ��ָ��ָ����һλ
//int popStack(Stack *s) {
//    StackNode *p;
//    if (!s->top) {
//        printf("��ջʧ�ܣ�ջΪ��\n");
//        return 0;
//    }
//    p = s->top;
//    s->top = s->top->next;
//    free(p);
//    return 1;
//}
//
////���ջ�ǿգ���ȡջ��Ԫ��
//int topStack(Stack *s, ElemType *v) {
//    if (emptyStack(s)) {
//        printf("ȡջ��Ԫ��ʧ�ܣ�ջΪ��\n");
//        return 0;
//    }
//    *v = s->top->data;
//    return 1;
//}
//
////ջ�ÿ�
//void makeEmptyStack(Stack *s){
//    while (!emptyStack(s)){
//        popStack(s);
//    }
//}
//
////���н��
//typedef struct node {
//    struct node *next;
//    linkDatatype data;
//} node;
//
////����
//typedef struct link {
//    node *head;//����ָ��
//    node *tail;//��βָ��
//} link;
//
////��ʼ��
//void init(link *q) {
//    q->head = q->tail = (node *) malloc(sizeof(node));
//    q->head->next = NULL;
//}
//
////�ж϶���Ϊ��
//int empty(link *q) {
//    return q->head == q->tail;
//}
//
////���
//void push(link *q, linkDatatype x) {
//    node *p = (node *) malloc(sizeof(node));
//    p->data = x;
//    p->next = NULL;
//    q->tail->next = p;
//    q->tail = p;
//}
//
////������зǿգ����ӣ�����ָ��ָ����һλ
//int pop(link *q) {
//    node *p;
//    if (empty(q)) {
//        printf("����Ϊ��\n");
//        return 0;
//    }
//    p = q->head->next;
//    q->head->next = p->next;
//    if (q->tail == p) {
//        q->tail = q->head;
//    }
//    free(p);
//    return 1;
//}
//
////������зǿգ���ȡ����Ԫ��
//int front(link *q, linkDatatype *x) {
//    if (empty(q)) {
//        printf("����Ϊ��\n");
//        return 0;
//    }
//    *x = q->head->next->data;
//    return 1;
//}
//
////������зǿգ���ȡ��βԪ��
//int back(link *q, linkDatatype *x) {
//    if (empty(q)) {
//        printf("����Ϊ��\n");
//        return 0;
//    }
//    *x = q->tail->data;
//    return 1;
//}
//
////�����ÿ�
//void makeEmpty(link *q){
//    while (!empty(q)){
//        pop(q);
//    }
//}
//
//int main(){
//    Stack s,s2;
//    link q;
//    char a[1000],c;
//    int i;
//    printf("�������ַ�����");
//    scanf("%s",a);
//    printf("��ѡ��1��ջ 2�����У���");
//    getchar();
//    c=getchar();
//    if(c=='1'){
//        initStack(&s);
//        initStack(&s2);
//        for (i = 0; a[i]; i++) {
//            pushStack(&s,a[i]);
//        }
//        while (!emptyStack(&s)){
//            topStack(&s,&c);
//            popStack(&s);
//            pushStack(&s2,c);
//        }
//        while (!emptyStack(&s2)){
//            topStack(&s2,&c);
//            popStack(&s2);
//            printf("%c",c);
//        }
//    }
//    else if(c=='2'){
//        init(&q);
//        for (i = 0; a[i]; i++) {
//            push(&q,a[i]);
//        }
//        while (!empty(&q)){
//            front(&q,&c);
//            pop(&q);
//            printf("%c",c);
//        }
//    }
//    else{
//        printf("��������");
//    }
//}
