#define  _CRT_SECURE_NO_WARNINGS
#include "stduent.h"
void welcome()
{
	printf("***************************************************\n");
	printf("*\t欢迎使用高效学生成绩管理系统v1.0\t   *\n");
	printf("***************************************************\n");
	printf("*\t\t*请选择功能列表\t\t\t   *\n");
	printf("***************************************************\n");
	printf("*\t\t1.录入学生信息\t\t\t   *\n");
	printf("*\t\t2.打印学生信息\t\t\t   *\n");
	printf("*\t\t3.保存学生信息\t\t\t   *\n");
	printf("*\t\t4.读取学生信息\t\t\t   *\n");
	printf("*\t\t5.统计所有学生人数\t\t   *\n");
	printf("*\t\t6.查找学生信息\t\t\t   *\n");
	printf("*\t\t7.修改学生信息\t\t\t   *\n");
	printf("*\t\t8.删除学生信息\t\t\t   *\n");
	printf("*\t\t0.退出系统\t\t\t   *\n");
}
void Inputstudent()
{
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;
	//头插法
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;

	}
	printf("请输入学生姓名：\n");
	scanf("%s", pNewNode->stu.name);
	printf("请输入学生的年龄：\n");
	scanf("%d", &pNewNode->stu.age);
	printf("请输入学生的学号:\n");
	scanf("%d", &pNewNode->stu.stuNum);
	printf("请输入学生的成绩：\n");
	scanf("%d", &pNewNode->stu.score);

	printf("学生信息录入成功！\n");
	system("pause");
	system("cls");
}  
void PrintStudent()
{
	system("cls");
	printf("**********************************************\n");
	printf("*\t欢迎使用高效学生成绩管理系统v1.0\t   *\n");
	printf("**********************************************\n");

	printf("*\t学号\t*\t姓名\t*\t年龄\t*\t成绩\t*");
	printf("**********************************************\n");

	Node* p = g_pHead;
	while (p != NULL)
	{
		printf("*\t%d\t*\t%s\t*\t%d\t*\t%d\t*",p->stu .stuNum ,p->stu .name ,p->stu .age,p->stu .score);
		p = p->pNext;
	}
	printf("**********************************************\n");
	system("pause");
	
}
void SaveStudent()
{
	FILE* pf=fopen("D:\\编程\\vs\\成绩管理系统\\stuinfo.dat", "w");
	if (pf == NULL)
	{
		printf("打开错误\n");
			return;
		}
	Node* p = g_pHead;
	while (p!= NULL)
	{
		fwrite(&p->stu,1, sizeof(Student), pf);
		p = p->pNext;
	}
	fclose(pf);
	printf("保存文件成功\n");
}
void ReadStudent()
{
	FILE* pf = fopen("D:\\编程\\vs\\成绩管理系统\\stuinfo.dat", "r");
	if (pf == NULL)
	{
		printf("打开错误\n");
		return;
	}
	Student stu;
	//读文件
	while (fread(&stu, 1, sizeof(Student), pf))
	{
		Node* pNewNode = ((Node*)malloc(sizeof(Node)));
		
		pNewNode->pNext = NULL;
		memcpy(pNewNode, &stu, sizeof(Student));
		if (g_pHead == NULL)
		{
			g_pHead = pNewNode;
		}
		else
		{
			pNewNode->pNext = g_pHead;
			g_pHead = pNewNode;
		}
	}
	fclose(pf);
	printf("读取成功\n");
}
int CountStudent()
{
	int  nCount = 0;
	Node* p = g_pHead;
	while (p!=NULL)
	{
		nCount++;
		p = p->pNext;
	}
	return nCount;
}
Node* findstudent() 
{
	int nStuNum;
	char szName[20];
	printf("请输入要查找的学生的学号：\n");
	scanf("%d", &nStuNum);

	printf("请输入要查找的学生的姓名：\n");
	scanf("%s", &szName);
	 
	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNum == nStuNum || strcmp(p->stu.name, szName))
		{
			return p;
		}
		p = p->pNext;
	}
	return NULL;
}
void ModifyStudent()
{
	int nStuNum;
	printf("请输入需要修改的学生信息的学号：\n");
	scanf("%d", &nStuNum);

	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNum == nStuNum)
		{
			printf("亲输入要修改的学生姓名 年龄 成绩：\n");
			scanf("%s %d %d", p->stu.name, p->stu.age, p->stu.score);
			printf("修改成功\n");
			break;
		}
		p = p->pNext;
	}
	if (p == NULL)
	{
		printf("没有找到该学生信息：\n");
	}
}
void DeleteStudent()
{
	int nStuNum;
	printf("请输入要删除的学生学号：\n");
	scanf("%d", &nStuNum);
	Node* p1;
	if (g_pHead->stu.stuNum == nStuNum)
	{
		p1 = g_pHead;
		g_pHead = g_pHead->pNext;
		free(p1);
		return;
	}
	Node* p = g_pHead;
	Node* p2;
		while (p->pNext != NULL)
		{
			if (p->pNext->stu.stuNum == nStuNum)
			{
				
			   p2 = p->pNext;
			   free(p2);
			   p->pNext = p->pNext->pNext;
				
			}
		}
		p = p->pNext;
		if (p->pNext == NULL)
		{
			return 0;

		}
		if (p->pNext == NULL)
		{
			printf("没有找到该学员。");
		}
}
int main()
{
	while (1)
	{
		welcome();
		char ch = getch();//不用回车；
		switch (ch)
		{
		case '1':
			Inputstudent();
			break;
		case '2':
			PrintStudent();
			break;
		case '3':
			SaveStudent();
			break;
		case '4':
			ReadStudent();
			break;
		case '5':
			printf("学生总人数%d\n", CountStudent());
			system("pause");
			system("cls");
			break;
		case '6':
		{	
			Node* p = findstudent();
		if (p != NULL)
		{
			printf("学号：%d\t姓名：%s\t年龄：%d\n", p->stu.stuNum, p->stu.name, p->stu.age);
		}
		else
		{
			printf("没找到。\n");
		}
		system("pause");
		system("cls");
		break;
		}
		case '7':
			ModifyStudent();
			break;
		case '8':
			DeleteStudent();
			break;
		case '0':
			printf("Bye!\n");
			return 0;
			
		default:
			printf("请重新输入！！\n");
			break;
		}
		
	}

	return 0;
}