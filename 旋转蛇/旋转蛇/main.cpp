#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
int main()
{
	
	float Pi = 3.14159;
	int centerX = 100;//Բ��x����
	int centerY = 100;//Բ��y����
	int radius = 100;//Բ�뾶
	initgraph(800, 600);//��һ��600*600����
    srand(time(0));//��=������Ӻ���
	circle(centerX, centerY, radius);
	int left = centerX - radius;
	int right = centerX + radius;
	int top = centerY - radius;
	int botton = centerY + radius;
	setbkcolor(RGB(128, 128, 128));
	cleardevice();//�Ա�����ɫ��ջ���
	int i;
	float offset;//ͬһ�뾶��������֮��ĽǶ�ƫ����
	
	
	while (1)//�ظ�ִ��
	{
		for (centerX = 100; centerX < 800; centerX = centerX + 200)//��Բ��X����ѭ��
		{
			for (centerY = 100; centerY < 600; centerY = centerY + 250)//��Բ��Y����ѭ��
			{
				float tolffset=0;//ͬһ�뾶��������֮��ĽǶ�ƫ����
				float h = rand() % 180;//���ɫ��
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

						setfillcolor(color1);//���������ɫΪ��ɫ
						solidpie(left, top, right, botton, offset, 2 * Pi / 60 + offset);//���������
						setfillcolor(RGB(255, 255, 255));//�����ɫΪ��ɫ
						solidpie(left, top, right, botton, 2 * Pi / 60 + offset, 3 * Pi / 60 + offset);//���������
						setfillcolor(color2);//�����ɫΪ��ɫ��
						solidpie(left, top, right, botton, 3 * Pi / 60 + offset, 5 * Pi / 60 + offset);
						setfillcolor(RGB(0, 0, 0));
						solidpie(left, top, right, botton, 5 * Pi / 60 + offset, 6 * Pi / 60 + offset);
					}
					tolffset = tolffset + Pi / 20;
				}
			}
		}
		_getch();//��ͣ���ȴ���������
	}
		

		return 0;
}