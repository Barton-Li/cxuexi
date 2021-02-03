#define _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include <conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	const float pi = 3.1415926;//����Pi����
	int width = 800;//������
	int height = 600;//����߶�
	initgraph(width, height);//��ʼ������
	setbkcolor(RGB(255, 255, 255));//���ð�ɫ����
	setlinestyle(PS_SOLID, 3);//�߿�3��

	float lineLength = 160;//��ĳ���
	float xEnd, yEnd;//���յ�����
	float rotataSpeed = pi / 360;//�����ת�ٶ�
	int lineNum = 0;//����ת�ĸ���
	float Angles[1000];//����ת�ĸ���
	int score = 0;//�÷�
	int i;

	BeginBatchDraw();//��ʼ��������
	while (1)
	{
		cleardevice();//�Ա���ɫ��ձ���
		setlinecolor(RGB(0, 0, 0));//���������ɫΪ��ɫ
		line(0, height / 2, lineLength, height / 2);//��߷��������һ����

		for (i = 0; i < lineNum; i++)
		{
			Angles[i] = Angles[i] + rotataSpeed;//�Ƕ�����
			if (Angles[i] > 2 * pi)
				Angles[i] = Angles[i] - 2 * pi;//�������2pi
			xEnd = lineLength * cos(-Angles[i]) + width / 2;
			yEnd = lineLength * sin(-Angles[i]) + height / 2;//������ĩ������
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
				yEnd = lineLength * sin(-Angles[lineNum-1]) + height / 2;//������ĩ������
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