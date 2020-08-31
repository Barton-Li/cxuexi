////int main()
////{
////	int a = 10;
////	float f = 10.0;
////	short a = 10;
////	short int b = 10;
////	return 0;
////}
//#include <stdio.h>
//
//int main()
//{
//	int a = 20;//4个字节；32bit
//	//00000000000000000000000000010100--原码
//	//00000000000000000000000000010100--反码
//	//00000000000000000000000000010100--补码
//	int b = -10;
//	//10000000000000000000000000001010原码
//	//11111111111111111111111111110101反码
//	//11111111111111111111111111110110补码
//	return 0;
//
//}
//判断大小端
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	
//	return *(char*)&a;;//返回1，小端；返回0大端
//}
//int main()
//{
//	
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//
//}
#include<stdio.h>

int main()
{
	char a = -1;//补码11111111111111111111111111111111 char a11111111
	signed char b = -1;
	unsigned char c = -1;
	printf("%d,%d,%d", a, b, c);
	return 0;
}