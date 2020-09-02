#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end!="\0")
	{
		end++;
	}
	return end - start;
}
int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}*/
	char arr[] = "bit";

	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}