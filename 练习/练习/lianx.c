#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	/*int age = 0;
//	scanf("%d",&age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 65)
//	{
//		printf("����\n");
//	}
//	else if (age >= 65 && age > 80)
//	{
//		printf("����\n");
//	}*/
//
//	/*int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		default:
//	   break;
//	   printf("����");
//	}*/
//	/*char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left=0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}*/
//
//	/*int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s\n", &password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		}
//	if(i==3)
//	{
//		printf("��������������˳�����\n");
//	
//	}*/
//	
//		/*int a = 0;
//		int  b = 0;
//		int c = 0;
//		scanf("%d %d %d",&a,&b,&c);
//		if (a < b)
//		{
//			int l = a;
//			a = b;
//			b = l;
//		
//		}
//		if (a < c)
//		{
//			int l = a;
//			a = c;
//			c = l;
//		}
//		if (b < c)
//		{
//			int l = b;
//			b = c;
//			c = l;
//		}
//		printf("%d %d %d\n", a, b, c);*/
////int i = 0;
////for (i = 1; i < 100; i++)
////{
////	if (i % 3 == 0)
////		printf("%d\n", i);
////
////}
////	
////int m = 0;
////int n = 0;
////scanf("%d %d", &m, &n);
////while (m % n)
////{
////	int r = m % n;
////	m = n;
////	n = r;
////}
////printf("%d\n", n);
////	return 0;
//     
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400== 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//
//}
int main()
{
	int i = 0;
	int  j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >sqrt(i))
		{
			count++;
			printf("%d", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}