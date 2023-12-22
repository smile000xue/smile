//#define Maxsize 20
//
//typedef struct {
//	int length;
//	float array[Maxsize];
//}Stack, * StackP;
//
//StackP CreateStack(void);
//void InitStack(StackP s);
//void PushStack(StackP s, float num);
//void PopStack(StackP s, float* num);
//float calcula(float* s2, StackP stack1, StackP stack2);
//float oper(StackP stack1, StackP stack2);
//
//int main()
//{
//	char s1[100] = { 0 };
//	float s2[100] = { 0 };
//	StackP stack1=CreateStack();
//	StackP stack2 = CreateStack();
//	InitStack(stack1);
//	InitStack(stack2);
//
//	printf("Enter a formula:");
//
//	int i = 0,j=1,z=0;
//	int sum1 = 0;
//	scanf("%s", s1);
//	while (*(s1+i)!='\0')
//	{
//		if (*(s1 + i) == '+'|| *(s1 + i) == '-'|| *(s1 + i) == '*'|| *(s1 + i) =='/')
//		{
//			s2[z++] = sum1;
//			s2[z++] = *(s1 + i);
//			sum1 = 0;
//			j = 1;
//		}
//		else
//		{
//			sum1 *= j;
//			sum1 =sum1+ (*(s1 + i) -48);
//			j *= 10;
//		}
//		i++;
//	}
//	s2[z] = sum1;
//	
//
//	float sum=calcula(s2, stack1, stack2);
//
//	printf("Output:%f",sum);
//
//	return 0;
//}
//
//StackP CreateStack(void)
//{
//	StackP s = (StackP)malloc(sizeof(Stack));
//	assert(s != NULL);
//	return s;
//}
//void InitStack(StackP s)
//{
//	s->length = -1;
//	int i = 0;
//	for (i = 0; i < Maxsize; i++)
//	{
//		s->array[i] = 0;
//	}
//}
//void PushStack(StackP s, float num)
//{
//	if (s->length >= Maxsize - 1)
//	{
//		printf("Error,the stack is full!\n");
//	}
//	else
//	{
//		s->array[++s->length] = num;
//	}
//}
//void PopStack(StackP s, float* num)
//{
//	if (s->length <= -1)
//	{
//		*num = 0;
//	}
//	else
//	{
//		*num = s->array[s->length--];
//	}
//}
//
//float calcula(float *s1, StackP stack1, StackP stack2)
//{
//	float sum;
//	int i = 0;
//	while (*(s1 + i) != 0)
//	{
//		if (*(s1 + i) != '+' && *(s1 + i) != '-' && *(s1 + i) != '*' && *(s1 + i) != '/')
//		{
//			PushStack(stack2, *(s1 + i));
//		}
//		else
//		{
//			if (stack1->length <= -1);
//			else if ((*(s1 + i) == '*' || *(s1 + i) == '/'))
//			{
//				while (stack1->array[stack1->length] == '*' || stack1->array[stack1->length] == '/')
//				{
//					float sym;
//					float num1, num2;
//					float sum = 0;
//					PopStack(stack2, &num2);
//					PopStack(stack2, &num1);
//					PopStack(stack1, &sym);
//					if ( sym== '*')
//					{
//						sum = num1 * num2;
//					}
//					if(sym == '/')
//					{
//						sum = num1 / num2;
//					}
//					PushStack(stack2, sum);
//				}
//			}
//			else if ((*(s1 + i) == '+' || *(s1 + i) == '-'))
//			{
//				sum = oper(stack1, stack2);
//			}
//			PushStack(stack1, *(s1 + i));
//		}
//		i++;
//	}
//	if (stack1->length > -1)
//	{
//		sum=oper(stack1, stack2);
//	}
//	return sum;
//}
//
//float oper(StackP stack1, StackP stack2)
//{
//	float sym;
//	float num1, num2;
//	float sum = 0;
//	PopStack(stack1, &sym);
//	while (sym !=0)
//	{
//		PopStack(stack2, &num2);
//		PopStack(stack2, &num1);
//		if (sym == '+')
//		{
//			sum = num1 + num2;
//		}
//		else if (sym == '-')
//		{
//			sum = num1 - num2;
//		}
//		else if (sym == '*')
//		{
//			sum = num1 * num2;
//		}
//		else
//		{
//			sum = num1 / num2;
//		}
//		PushStack(stack2, sum);
//		PopStack(stack1, &sym);
//	}
//	return sum;
//}