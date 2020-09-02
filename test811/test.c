#include<stdio.h>

//getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=getmax(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
#include <stdio.h>
int is_prime(int n)
{
	int j=0;
	for (j = 1; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
			return 1;
		

}
int main()
{
	int i = 0;
	for (i = 101; i<= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d", i);
	}
	return 0;
}