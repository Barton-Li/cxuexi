# include <graphics.h>//ͼ��
#include <conio.h>
#include <stdio.h>
int main()
{
	float y = 100;//С��y����
	float x =100;//С��X����
	float vx = 5;//С��X������ٶ�
	float vy = 1;//С����ٶ�
	float g = 2.8;//���ٶ�
	initgraph(800, 600);//��ʼ����Ϸ����
	while (1)
	{
		vy = vy + g;//���º���ٶ�
		y = y + vy;//С�������
		x = x + vx;

		if (y > 580)
		{
		
			vy = -0.95*vy;
		}
		if (x > 780)
		{
			vx = -0.95 * vx;
		}
		if (y >= 580)//��ֹС�򳬳�����
			y = 580;
		cleardevice();//���֮ǰ�Ļ��Ƶ�����
		fillcircle(x, y, 20);//��һ��20��Բ
		Sleep(10);//��ͣ10����
		
		
		
	}
	_getch();//�ȴ�����
	closegraph();//�رմ��� 
	return 0;
}