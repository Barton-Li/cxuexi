#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
int main()
{
	
	float Pi = 3.14159;
	int centerX = 100;//圆心x坐标
	int centerY = 100;//圆心y坐标
	int radius = 100;//圆半径
	initgraph(800, 600);//打开一个600*600窗口
    srand(time(0));//随=随机种子函数
	circle(centerX, centerY, radius);
	int left = centerX - radius;
	int right = centerX + radius;
	int top = centerY - radius;
	int botton = centerY + radius;
	setbkcolor(RGB(128, 128, 128));
	cleardevice();//以背景颜色清空画布
	int i;
	float offset;//同一半径各组扇形之间的角度偏移量
	
	
	while (1)//重复执行
	{
		for (centerX = 100; centerX < 800; centerX = centerX + 200)//对圆心X坐标循环
		{
			for (centerY = 100; centerY < 600; centerY = centerY + 250)//对圆心Y坐标循环
			{
				float tolffset=0;//同一半径各组扇形之间的角度偏移量
				float h = rand() % 180;//随机色调
				COLORREF color1 = HSVtoRGB(h, 0.9, 0.8);
				COLORREF color2 = HSVtoRGB(h + 180, 0.9, 0.8);

				for (radius = 100; radius > 0; radius = radius - 20)
				{
					int left = centerX - radius;
					int right = centerX + radius;
					int top = centerY - radius;
					int botton = centerY + radius;
					for (i = 0; i < 20; i++)
					{

						offset = i * Pi / 10 + tolffset;

						setfillcolor(color1);//设置填充颜色为青色
						solidpie(left, top, right, botton, offset, 2 * Pi / 60 + offset);//画填充扇形
						setfillcolor(RGB(255, 255, 255));//填充颜色为白色
						solidpie(left, top, right, botton, 2 * Pi / 60 + offset, 3 * Pi / 60 + offset);//画填充扇形
						setfillcolor(color2);//填充颜色为红色；
						solidpie(left, top, right, botton, 3 * Pi / 60 + offset, 5 * Pi / 60 + offset);
						setfillcolor(RGB(0, 0, 0));
						solidpie(left, top, right, botton, 5 * Pi / 60 + offset, 6 * Pi / 60 + offset);
					}
					tolffset = tolffset + Pi / 20;
				}
			}
		}
		_getch();//暂停，等待按键输入
	}
		

		return 0;
}