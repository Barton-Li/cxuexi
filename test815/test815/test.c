//#include <stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for(j=0;j<sz-1-i;j++)
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,6,5,7,11,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i =0 ; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char n;
//	double fn;
//	double sn;
//
//	printf("������Ҫ���������\n");
//	scanf("%c", &n);
//
//	printf("����������:>");
//		scanf("%lf %lf", &fn, &sn);
//	switch (n)
//	{
//	case '+':
//			printf("%.1lf+%.1lf=%.1lf", fn, sn, fn + sn);
//			break;
//		case '-':
//			printf("%.1lf-%.1lf=%.1lf", fn, sn, fn - sn);
//			break;
//		case '*':
//			printf("%.1lf*%.1lf=%.1lf", fn, sn, fn * sn);
//			break;
//		case '/':
//			printf("%.1lf/%.1lf=%.1lf", fn, sn, fn /sn);
//			break;
//
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
#include<math.h>
int main()
{
	/*printf("hello,world\n");*/
	//int num;
	//printf("������һ��������>\n");
	//scanf("%d", &num);
	//printf("�����������%d\n",num);
	/*char c = 'A';
	printf("c=%c", c);*/
	/*float f = 3.1415926;
	printf("%f", f);*/
	/*double d = 52.222224586;
	printf("%le",d);*/
	/*char c;
	printf("����һ���ַ���");
	scanf("%c", &c);
	printf("%c ��ASCIIΪ %d" ,c, c);*/
	/*int i = 0;
	for (i = 0; i < 128; i++)
	{
		printf("%-3d��ASCIIΪ %c \n", i, i);
	}*/
	/*int num;
	for (num = 1; num < 100; num++)
	{
		if (num % 2 == 0)
			printf("%-2d��ż��\n", num);
		else
			printf("%-2d������\n", num);
	}*/
	float a, c, b, x1, x2, d;
	printf("���뷽�̵�����ϵ����");
	scanf("%f %f %f", &a, &b, &c);
	if (a != 0)
	{
		d = sqrt(b * b - 4 * a * c);
		x1 = (-b + d) / (2 * a);
		x2 = (-b - d) / (2 * a);
		if (x1 < x2)
			printf("%0.2f %0.2f\n", x2, x1);
		else
			printf(" % 0.2f % 0.2f\n", x1, x2);
	}
	return 0;
}