#define  _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	float width, height;
	width = 600;//宽度
	height = 400;//高度
	initgraph(width, height);//绘制画布
	
	//小球
	float ball_x, ball_y,ball_vy,grav, radius;//小球的圆心坐标，y方向速度，半径大小
	radius = 20;//小球半径
	ball_x = width / 4;//确定小球的x坐标
	ball_y = height - radius;//确定小球的y坐标
	ball_vy = 0;//初速度
	grav = 0.6;//加速度
	//方块
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
		if (_kbhit())//当按键时
		{
			char input = _getch();//键盘输入
			if (input == ' '&& isBallonFloor== 1)
			{
				ball_vy = -18;//给小球一个向上的初速度。
				isBallonFloor = 0;
			}
		}
		ball_vy = ball_vy + grav;//更新速度
		ball_y = ball_y + ball_vy;//位置改变
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
	cleardevice();//清空图像
	fillrectangle(rec_left_x,height-rec_height,rec_left_x+rec_widtn,height);//绘制方块
	fillcircle(ball_x, ball_y, radius);//绘制小球
	TCHAR s[20];
	_stprintf(s, _T("%d"), score);
	settextstyle(40, 0, _T("宋体"));
	outtextxy(50, 30, s);
	Sleep(10);//暂停10毫秒
}
	_getch();
	closegraph();//关闭
	return 0;
}

