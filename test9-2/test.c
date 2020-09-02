#include <stdio.h>

//int main()
//{
//	/*char ch = 'c';
//	char* p = &ch;
//	return 0;*/
//	char arr[] = "addasda";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcde";
//	const char* pa = "abcde";
//	const char* pq = "abcde";
//	if (pa = pq)
//	{
//		printf("jsdasj\n");
//	}
//	else
//	{
//		printf("dadasd\n");
//	}
//	return 0;
//}
//指针数组，存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int c = 15;
//	int d = 46;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n" ,*(arr[i]));
//	}
//	return 0;
//}
////用法：
//int main()
//{
//	int arr1[] = { 1,2,5,4,7 };
//	int arr2[] = { 1,2,5,4,7 };
//	int arr3[] = { 1,2,5,4,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针--指针
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//pa是指针，[5]是pa指向的数组是5 个元素，char* pa的数组类型是char*
//	int arr2[10] = { 2 };
//	int(*pa2)[10] = &arr2;
//
//	return 0;
//}
//使用；
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//
	//int(*pa)[10] = &arr;
	//int i = 0;
	///*for (i = 0; i < 10; i++)
	//{
	//	printf("%d", (*pa)[i]);
	//}*/
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d", *(*pa+i));
	//}
//	return 0;
//
//}
print(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			/*printf("%d ", *(*(p + i) + j));*/
			/*printf("%d ", (*(p + i))[j]);*/
			printf("%d ", p[i][j]);

		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}