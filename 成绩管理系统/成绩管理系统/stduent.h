#include <stdio.h>
#include<conio.h>
#include<string.h>
#pragma warning(disable:4996)
typedef struct _Student
{
	char name[20];
	int age;
	int stuNum;
	int score;
}Student;
typedef struct _Node
{
	Student stu;
	struct _Node* pNext;
}Node;
Node* g_pHead = NULL;
//��ӭ
void welcome();
//¼��
void InputStudent();
//��ӡ
void PrintStudent();
//����
void SaveStudent();
void ReadStudent();
int CountStudent();
Node* findstudent();
void ModifyStudent();
void DeleteStudent();
