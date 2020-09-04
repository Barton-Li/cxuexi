//#include <stdio.h>
//#define row 3
//#define col 9
//
//int main()
//{
//	char arr[row][col] =
//	{ {'*',' ',' ',' ',' ',' ',' ',' ',' '},
//	{' ','*',' ','*',' ','*',' ','*',' '},
//	{' ',' ','*',' ',' ',' ','*',' ',' '},
//	};
//	int i = 0;
//	int j = 0;
//	printf("Êä³öÍ¼Ïñ£º\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Êä³ö·­×ªÍ¼Ïñ£º\n");
//	for (i = row-1; i >= 0; i--)
//	{
//		for (j = col-1; j >= 0; j--)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//·­×ªµ¥´Ê
//#include <stdio.h>
//#define num 7
//int main()
//{
//	char arr[num] = { 'G','o','o','d','b','y','e' };
//	char arr1[num] = { 0 };
//	printf("Êä³öÍ¼Ïñ£º\n");
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//
//	i = 0;
//	j = num - 1;
//	while (i < num)
//	{
//		
//		arr1[j] = arr[i];
//		i++;
//		j--;
//	}
//	for (i = 0; i < num; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>
#define num 7
int main()
{
	char arr[num] = { 'G','o','o','d','b','y','e' };
	int i = 0;
	int j = 0;
	int temp = 0;
	printf("Êä³ö£º\n");
	for (i = 0; i < num; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	i = 0;
	j = num - 1;
	while (i < j)
		{
			temp = arr[i];
	        arr[i] = arr[j];
	         arr[j] = temp;
	         i++;
	          j--;
		}
	printf("·­×ª:\n");
	for (i = 0; i <num; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;


}