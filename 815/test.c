# define _CRT_SECURE_NO_WARNINGS

////#include<stdio.h>
////#define row 5
////#define col 5
////int main()
////{
////	char board[row][col] = { 0 };
////	int i = 0;
////	for (i = 0; i < 5; i++)
////	{
////		int j = 0;
////		for (j = 0; j < 5; j++)
////		{
////			printf(" %c ", board[i][j]);
////			if (j <4)
////				printf(" |");
////
////		}
////		printf("\n");
////		if (i < 4)
////		{
////			for (j = 0; j < 5; j++)
////			{
////				printf("----");
////				printf("|");
////			}
////		}
////		printf("\n");
////	}
////	return 0;
////}
//# define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	/*1.��ʾ����ɼ�
////
////		2.��ȡ�û�����
////
////		3.�ж�*/
////	int score;
////	printf("������ɼ�:\n");
////	scanf("%d", &score);
////		if (score >= 90)
////		{
////			printf("�ɼ�����\n");
////		}
////		else if(score>=80&&score<90)
////		{
////			printf("�ɼ�����\n");
////		}
////		else if (score >= 70 && score < 80)
////		{
////			printf("�ɼ��е�\n");
////		}
////		else if (score >= 60 && score < 70)
////		{
////			printf("�ɼ�����\n");
////
////		}
////		else
////		
////			printf("�ɼ�������\n");
////		
////	return 0;
////
////
////}
////#include<stdio.h>
////
//////int prepare()
//////{
//////
//////}
//////int main()
//////{
//////	return 0;
//////}
////int num1;
////int num2;
////int ret;
////int mark = 0;
////float ret1;
////char input;
////void mune()
////{
////	printf("******************************\n");
////	printf("******************************\n");
////	printf("****��ѡ��һ���㷨��+ - * /***\n");
////	printf("******************************\n");
////	printf("******************************\n");
////}
////int add(int x, int y)
////{
////	int z;
////	z = x + y;
////	return z;
////}
////int sub(int x, int y)
////{
////	int z;
////	z = x - y;
////	return z;
////}
////int mul(int x, int y)
////{
////	float z;
////	z = x * y;
////	return z;
////}
////float div(int x,int y)
////{
////	float c;
////	c = (float)x/y;//z=(float)x/y;ǿ�ư���������ת��ΪС����
////	return c;
////}
////void sel(char input)
////{
////	switch (input)
////	{
////	case '+':
////		printf("��ѡ���˼ӷ�\n");
////		
////		break;
////	case '-':
////		printf("��ѡ���˼���\n");
////		break;
////	case '*':
////		printf("��ѡ���˼ӳ˷�\n");
////		break;
////	case '/':
////		printf("��ѡ���˳���\n");
////		break;
////	default:
////		printf("�������\n");
////		break;
////	}
////}
//////void calc(char input, int num1, int num2)
//////{
//////	switch (input)
//////	{
//////	case '+':
//////		printf("�����%d+%d=%d\n", num1, num2, add(num1, num2));
//////		break;
//////	case '-':
//////		printf("�����%d-%d=%d\n", num1, num2, sub(num1, num2));
//////		break;
//////	case '*':
//////		printf("�����%d*%d=%d\n", num1, num2, mul(num1, num2));
//////		break;
//////	case '/':
//////		printf("�����%d+%d=%f\n", num1, num2, div(num1, num2));
//////		break;
//////	}
//////
//////}
////void first()
////{
////	sel(input);
////	printf("�������һ������\n");
////	scanf("%d", &num1);
////	printf("������ڶ�������\n");
////	scanf("%d", &num2);
////	switch (input)
////	{
////	case '+':
////		printf("�����%d+%d=%d\n", num1, num2, add(num1, num2));
////		break;
////	case '-':
////		printf("�����%d-%d=%d\n", num1, num2, sub(num1, num2));
////		break;
////	case '*':
////		printf("�����%d*%d=%d\n", num1, num2, mul(num1, num2));
////		break;
////	case '/':
////		printf("�����%d+%d=%f\n", num1, num2, div(num1, num2));
////		break;
////	}
////}
////int main()
////{
////	;
////	while (1)
////	{
////		mune();
////		if (mark != 0)
////			getchar();
////		mark = 1;
////		scanf("%c", &input);
////		getchar();
////		
////		first();
////
////		
////	}
////	return 0;
////}
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int min;
//	int max;
//	int total = 0;
//	int arr[10] = { 0 };
//	float aver;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d", i + 1);
//		scanf("%d", & arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	min = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		total += arr[i];
//		
//	}
//	aver = (float)total / 10;
//	printf("min=%d\n",min);
//	printf("max=%d\n", max);
//	printf("aver=%f\n", aver);
//}
//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	int b = 7;
//	(float)(a / b);
//	printf("������ڣ�%d\n", a + b);
//	printf("������ڣ�%d\n", a - b);
//	printf("������ڣ�%d\n", a * b);
//	printf("������ڣ�%f\n", a / b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 9;//00000000000000000000000000001001
//	int b = 5;//00000000000000000000000000000101
//	printf("%d\n", a & b);//00000000000000000000000000000001
//	printf("%d\n", a | b);//00000000000000000000000000001101
//	printf("%d\n", a ^ b);//00000000000000000000000000001100
//	return 0;

//}
//#include<stdio.h>
//
//int main()
//{
//	char a = 'G';
//	char b = 'R';
//	char c = 'E';
//	char d = 'A';
//	char e = 'T';
//	putchar(a); putchar(b); putchar(c); putchar(d); putchar(e);
//
//
//}
//#include<stdio.h>
//int main()
//{
//	char a;//����aΪ�ַ�����
//	a = getchar();//�ַ����뺯��
//	putchar(a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[];
//	gets(arr);
//	puts(arr);
//
//	return 0;
////}
//#include<stdio.h>
//#include<stdlib.h>
//
//void initScores(int *date, int a)
//{
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        printf("�������%d��ѧ���ɼ���", i + 1);
//            scanf("%d", date);
//            while (*date> 100 || *date < 0)
//            {
//                if (*date > 100 || *date < 0)
//                {
//                    printf("�����������������\n");//�����Ҫ����������
//                    printf("�������%d��ѧ���ɼ���", i + 1);
//                    scanf("%d",date );
//                }
//            }
//            date++;
//    }
//}
//void printScores(int *date, int a)
//{
//    int i=0;
//    for (i = 0; i < a; i++)
//    {
//        printf("��%d��ѧ���ĳɼ��ǣ�%d\n", i + 1, *date);
//        date++;
//    }
//}
//int getMin(int *date, int a)
//{
//    int i = 0;
//    int j;
//    j = *date;
//    for (i = 0; i < a; i++)
//    {
//       
//        if (j > *date)
//        {
//            j = *date;
//        }
//        date++;
//    }
//    return j;
//}
//int  getMax(int *date, int a)
//{
//    int i = 0;
//    int j;
//    j = *date;
//    for (i = 0; i < a; i++)
//    {
//        
//        if (j <*date)
//        {
//            j = *date;
//        }
//        date++;
//    }
//    return j;
//}
//float getAve(int *date, int a)
//{
//    int i;
//     int j=0;
//     float l;
//    for (i = 0; i < a; i++)
//    {
//        j += *date;
//        date++;
//    }
//    l =(float) j / a;
//    return l;
//}
//int main()
//{
//    int scorres[10];
//    int len;
//    int max;
//    int min;
//    float averge;
//    len = sizeof(scorres) / sizeof(scorres[0]);
//    //��ʼ������
//    initScores(scorres, len);
//    printScores(scorres, len);
//    max=getMax(scorres, len);
//    printf("max=%d\n", max);
//    min=getMin(scorres, len);
//    printf("min=%d\n", min);
//    averge=getAve(scorres, len);
//    printf("ƽ����Ϊ%f\n", averge);
//    return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int* p1;
//	int* p2;
//	p2 = &b;
//	p1 = &a;
//
//	printf("%p\n",p1);
//	printf("%p\n", p2);
//	printf("%d\n", *p1);
//
//		return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//    int i;
//    int* p;
//    int a[5];
//    int* p[4];
//    int(*p)[4];
//    int f();
//    int* p();
//
//
//
//}
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void myput(char* p)
//{
//    while (*p!='\0')
//    {
//        putchar(*p++);
//    }
//}
//int mystrlen(char* str)
//{
//    int count = 0;
//    while (*str++ != '\0')
//    {
//        count++;
//
//    }
//    return count;
//}
//void mymemset(char* p, char c, int size)
//{
//    while()
//}
//int main()
//{
//    char* str = NULL;
//    str = (char*)malloc(128);
//    memset(str, 'a', 128);
//    str[128] = '\0';
//    myput(str);
//    char str[128] = { '\n' };
//    char* p = "liruiniui";
//    printf("���ȣ�%d\n", mystrlen(p));
//    myput(p);
//    myput("����������ַ�����\n");
//   gets(str);
//    myput(str);
//    return 0;
//}
#include <stdio.h>

struct Student//�Զ��������
{
	int score;
	char name[128];
};
int main()
{
	struct Student  stu1 = { 98,"����" };
	printf("�ṹ�壺score=%d\n", stu1.score);
}