#define  _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	float width, height;
	width = 600;//���
	height = 400;//�߶�
	initgraph(width, height);//���ƻ���
	
	//С��
	float ball_x, ball_y,ball_vy,grav, radius;//С���Բ�����꣬y�����ٶȣ��뾶��С
	radius = 20;//С��뾶
	ball_x = width / 4;//ȷ��С���x����
	ball_y = height - radius;//ȷ��С���y����
	ball_vy = 0;//���ٶ�
	grav = 0.6;//���ٶ�
	//����
	float rec_top_y, rec_left_x, rec_widtn, rec_height;
	float rec_vx;
	rec_vx = -3;
	rec_height = 100;
	rec_widtn = 20;
	rec_left_x = width * 3 / 4;
	rec_top_y = height - rec_height;

	int score = 0;
	int isBallonFloor = 1;
	while (1)
	{
		if (_kbhit())//������ʱ
		{
			char input = _getch();//��������
			if (input == ' '&& isBallonFloor== 1)
			{
				ball_vy = -18;//��С��һ�����ϵĳ��ٶȡ�
				isBallonFloor = 0;
			}
		}
		ball_vy = ball_vy + grav;//�����ٶ�
		ball_y = ball_y + ball_vy;//λ�øı�
		if (ball_y >= height - radius)
		{
			ball_y = 0;
			ball_y = height - radius;
			isBallonFloor = 1;
		}
		rec_left_x = rec_left_x + rec_vx;
		if (rec_left_x <= 0)
		{
			score++;
			rec_left_x = width;
			rec_height = rand() % int(height / 4) + height / 4;
			rec_vx = rand() / float(RAND_MAX) * 4 - 7;
		}
		if ((rec_left_x <= ball_x + radius) && (rec_left_x + rec_widtn > ball_x - radius) && (height - rec_height <= ball_y + radius))
		{
			score = 0;
			Sleep(100);
		}
	cleardevice();//���ͼ��
	fillrectangle(rec_left_x,height-rec_height,rec_left_x+rec_widtn,height);//���Ʒ���
	fillcircle(ball_x, ball_y, radius);//����С��
	TCHAR s[20];
	_stprintf(s, _T("%d"), score);
	settextstyle(40, 0, _T("����"));
	outtextxy(50, 30, s);
	Sleep(10);//��ͣ10����
}
	_getch();
	closegraph();//�ر�
	return 0;
}

