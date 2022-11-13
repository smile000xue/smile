//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char ElemType;  //元素类型
//typedef char linkDatatype;
//
////栈节点
//typedef struct StackNode {
//    ElemType data;
//    struct StackNode *next;//指向下一位
//} StackNode;
//
//typedef struct Stack {
//    StackNode *top;//栈顶指针
//} Stack;
//
////栈的初始化
//void initStack(Stack *s) {
//    s->top = NULL;
//}
//
////判断栈是否为空
//int emptyStack(Stack *s) {
//    return s->top == NULL;
//}
//
////入栈
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
////如果栈非空，出栈，栈顶指针指向下一位
//int popStack(Stack *s) {
//    StackNode *p;
//    if (!s->top) {
//        printf("出栈失败，栈为空\n");
//        return 0;
//    }
//    p = s->top;
//    s->top = s->top->next;
//    free(p);
//    return 1;
//}
//
////如果栈非空，获取栈顶元素
//int topStack(Stack *s, ElemType *v) {
//    if (emptyStack(s)) {
//        printf("取栈顶元素失败，栈为空\n");
//        return 0;
//    }
//    *v = s->top->data;
//    return 1;
//}
//
////栈置空
//void makeEmptyStack(Stack *s){
//    while (!emptyStack(s)){
//        popStack(s);
//    }
//}
//
////队列结点
//typedef struct node {
//    struct node *next;
//    linkDatatype data;
//} node;
//
////队列
//typedef struct link {
//    node *head;//队首指针
//    node *tail;//队尾指针
//} link;
//
////初始化
//void init(link *q) {
//    q->head = q->tail = (node *) malloc(sizeof(node));
//    q->head->next = NULL;
//}
//
////判断队列为空
//int empty(link *q) {
//    return q->head == q->tail;
//}
//
////入队
//void push(link *q, linkDatatype x) {
//    node *p = (node *) malloc(sizeof(node));
//    p->data = x;
//    p->next = NULL;
//    q->tail->next = p;
//    q->tail = p;
//}
//
////如果队列非空，出队，队首指针指向下一位
//int pop(link *q) {
//    node *p;
//    if (empty(q)) {
//        printf("队列为空\n");
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
////如果队列非空，获取队首元素
//int front(link *q, linkDatatype *x) {
//    if (empty(q)) {
//        printf("队列为空\n");
//        return 0;
//    }
//    *x = q->head->next->data;
//    return 1;
//}
//
////如果队列非空，获取队尾元素
//int back(link *q, linkDatatype *x) {
//    if (empty(q)) {
//        printf("队列为空\n");
//        return 0;
//    }
//    *x = q->tail->data;
//    return 1;
//}
//
////队列置空
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
//    printf("请输入字符串：");
//    scanf("%s",a);
//    printf("请选择（1、栈 2、队列）：");
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
//        printf("输入有误");
//    }
//}
