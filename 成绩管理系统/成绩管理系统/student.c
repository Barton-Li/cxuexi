#define  _CRT_SECURE_NO_WARNINGS
#include "stduent.h"
void welcome()
{
	printf("***************************************************\n");
	printf("*\t��ӭʹ�ø�Чѧ���ɼ�����ϵͳv1.0\t   *\n");
	printf("***************************************************\n");
	printf("*\t\t*��ѡ�����б�\t\t\t   *\n");
	printf("***************************************************\n");
	printf("*\t\t1.¼��ѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t2.��ӡѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t3.����ѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t4.��ȡѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t5.ͳ������ѧ������\t\t   *\n");
	printf("*\t\t6.����ѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t7.�޸�ѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t8.ɾ��ѧ����Ϣ\t\t\t   *\n");
	printf("*\t\t0.�˳�ϵͳ\t\t\t   *\n");
}
void Inputstudent()
{
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;
	//ͷ�巨
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;

	}
	printf("������ѧ��������\n");
	scanf("%s", pNewNode->stu.name);
	printf("������ѧ�������䣺\n");
	scanf("%d", &pNewNode->stu.age);
	printf("������ѧ����ѧ��:\n");
	scanf("%d", &pNewNode->stu.stuNum);
	printf("������ѧ���ĳɼ���\n");
	scanf("%d", &pNewNode->stu.score);

	printf("ѧ����Ϣ¼��ɹ���\n");
	system("pause");
	system("cls");
}  
void PrintStudent()
{
	system("cls");
	printf("**********************************************\n");
	printf("*\t��ӭʹ�ø�Чѧ���ɼ�����ϵͳv1.0\t   *\n");
	printf("**********************************************\n");

	printf("*\tѧ��\t*\t����\t*\t����\t*\t�ɼ�\t*");
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
	FILE* pf=fopen("D:\\���\\vs\\�ɼ�����ϵͳ\\stuinfo.dat", "w");
	if (pf == NULL)
	{
		printf("�򿪴���\n");
			return;
		}
	Node* p = g_pHead;
	while (p!= NULL)
	{
		fwrite(&p->stu,1, sizeof(Student), pf);
		p = p->pNext;
	}
	fclose(pf);
	printf("�����ļ��ɹ�\n");
}
void ReadStudent()
{
	FILE* pf = fopen("D:\\���\\vs\\�ɼ�����ϵͳ\\stuinfo.dat", "r");
	if (pf == NULL)
	{
		printf("�򿪴���\n");
		return;
	}
	Student stu;
	//���ļ�
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
	printf("��ȡ�ɹ�\n");
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
	printf("������Ҫ���ҵ�ѧ����ѧ�ţ�\n");
	scanf("%d", &nStuNum);

	printf("������Ҫ���ҵ�ѧ����������\n");
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
	printf("��������Ҫ�޸ĵ�ѧ����Ϣ��ѧ�ţ�\n");
	scanf("%d", &nStuNum);

	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNum == nStuNum)
		{
			printf("������Ҫ�޸ĵ�ѧ������ ���� �ɼ���\n");
			scanf("%s %d %d", p->stu.name, p->stu.age, p->stu.score);
			printf("�޸ĳɹ�\n");
			break;
		}
		p = p->pNext;
	}
	if (p == NULL)
	{
		printf("û���ҵ���ѧ����Ϣ��\n");
	}
}
void DeleteStudent()
{
	int nStuNum;
	printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
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
			printf("û���ҵ���ѧԱ��");
		}
}
int main()
{
	while (1)
	{
		welcome();
		char ch = getch();//���ûس���
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
			printf("ѧ��������%d\n", CountStudent());
			system("pause");
			system("cls");
			break;
		case '6':
		{	
			Node* p = findstudent();
		if (p != NULL)
		{
			printf("ѧ�ţ�%d\t������%s\t���䣺%d\n", p->stu.stuNum, p->stu.name, p->stu.age);
		}
		else
		{
			printf("û�ҵ���\n");
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
			printf("���������룡��\n");
			break;
		}
		
	}

	return 0;
}