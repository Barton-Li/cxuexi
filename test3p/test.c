#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//float p;
//float r=0.07;
//float n=10;
//int main()
//{
//	p = pow(1 + r, n);
//	printf("%f\n", p);
//	return 0;
//}

//float l = 1000;
//float r1 = 0.015;
//float r2 = 0.021;
//float r3 = 0.0275;
//float r5 = 0.03;
//float h1 = 0.35;
//float p1,p2,p3,p4,p5;
//int n = 5;
//int main()
//{
//	p5 = 1000 * (1 + 5 * r5);
//	p2 = 1000 * (1 + 2 * r2 )*(1+3*r3);
//	p3 = 1000 * (1 + 3 * r3) * (1 + 2 * r2);
//	p4 = 1000 * pow(1 + r1, n);
//	p1 = 1000 * pow(1 + h1 / 4, 4*n);
//	printf("%f,%f,%f,%f,%f\n", p5, p2, p3, p4, p1);
//	return 0;
//
//}
//int d = 300000;
//int p = 6000;
//float r= 0.01;
//float m;
//int main()
//{
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("m=%f", m);
//	return 0;
//}
//int main ()
//{
//	int a;
//	int b;
//	float x;
//	float y;
//	char c1;
//	char c2;
//	scanf("%d,%d", &a, &b);
//	scanf("%f,%f", &x, &y);
//	scanf("%c,%c", &c1, &c2);
//	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c", a, b, x, y, c1, c2);
//
//	return 0;
//}
//int main()
//{
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	putchar('\n');
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//
//	putchar('\n');
//
//}
//int main()
//{
//	char c1;
//	char c2;
//	c1 = getchar();
//	c2 = getchar();
//	printf("%c,%c\n", c1, c2);
//
//	return 0;
//}
//int main()
//{
//
//	int year;
//	int leap;
//	printf("please enter year\n");
//	scanf("%d", &year);
//	//if (year % 4 == 0)
//	//{
//	//	if (year % 100 == 0)
//	//	{
//	//		if (year % 400 == 0)
//	//		{
//	//			leap = 1;
//	//		}
//	//		else
//	//			leap = 0;
//	//	}
//	//	else
//	//		leap = 1;
//	//}
//	//else
//	//	leap = 0;
//	if (year % 4 != 0)
//		leap = 0;
//	else if (year % 100 != 0)
//		leap = 1;
//	else if (year % 400 == 0)
//		leap = 1;
//	else
//		leap = 0;
//	if (leap)
//	{
//		printf("%d is \n", year);
//	}
//	else
//		printf("%d is not\n", year);
//
//	return 0;
//
//}
