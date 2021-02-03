#define _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include <conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	const float pi = 3.1415926;//定义Pi变量
	int width = 800;//画面宽度
	int height = 600;//画面高度
	initgraph(width, height);//初始化画面
	setbkcolor(RGB(255, 255, 255));//设置白色背景
	setlinestyle(PS_SOLID, 3);//线宽3，

	float lineLength = 160;//针的长度
	float xEnd, yEnd;//针终点坐标
	float rotataSpeed = pi / 360;//针的旋转速度
	int lineNum = 0;//针旋转的个数
	float Angles[1000];//在旋转的个数
	int score = 0;//得分
	int i;

	BeginBatchDraw();//开始批量绘制
	while (1)
	{
		cleardevice();//以背景色清空背景
		setlinecolor(RGB(0, 0, 0));//设置针的颜色为黑色
		line(0, height / 2, lineLength, height / 2);//左边发射区域的一根针

		for (i = 0; i < lineNum; i++)
		{
			Angles[i] = Angles[i] + rotataSpeed;//角度增加
			if (Angles[i] > 2 * pi)
				Angles[i] = Angles[i] - 2 * pi;//如果超过2pi
			xEnd = lineLength * cos(-Angles[i]) + width / 2;
			yEnd = lineLength * sin(-Angles[i]) + height / 2;//计算针末端坐标
			setlinecolor(RGB(0, 0, 255));
			if (i == lineNum - 1)
				setlinecolor(RGB(255, 0, 0));
			line(width / 2, height / 2, xEnd, yEnd);
		}
		if (_kbhit() && rotataSpeed != 0)
		{
			char input = _getch();
			if (input == ' ')
			{ 
				lineNum++;
				Angles[lineNum - 1] = pi;
				xEnd = lineLength * cos(-Angles[lineNum-1]) + width / 2;
				yEnd = lineLength * sin(-Angles[lineNum-1]) + height / 2;//计算针末端坐标
				line(width / 2, height / 2, xEnd, yEnd);
				for (i = 0; i < lineNum-1; i++)
				{
					if (abs(Angles[lineNum - 1] - Angles[i] )< pi / 60)
					{
						rotataSpeed=0;
							break;
					}
				}
				score = score + 1;
			}
		}
		setfillcolor(HSVtoRGB(0, lineNum / 60.0, 0.8));
		setlinecolor(HSVtoRGB(0, 0.9, 0.8));
		fillcircle(width / 2, height / 2, 60);
		TCHAR s[20];
		_stprintf(s, _T("%d"),score);
		settextstyle(50, 0, _T("Times"));
		settextcolor(RGB(50, 50, 50));
		outtextxy(65, 200, s);

		FlushBatchDraw();
		Sleep(10);

	}
	closegraph();
	return 0;
}