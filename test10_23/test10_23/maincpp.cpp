# include <graphics.h>//图形
#include <conio.h>
#include <stdio.h>
int main()
{
	float y = 100;//小球y坐标
	float x =100;//小球X坐标
	float vx = 5;//小球X方向的速度
	float vy = 1;//小球的速度
	float g = 2.8;//加速度
	initgraph(800, 600);//初始化游戏界面
	while (1)
	{
		vy = vy + g;//更新后的速度
		y = y + vy;//小球的坐标
		x = x + vx;

		if (y > 580)
		{
		
			vy = -0.95*vy;
		}
		if (x > 780)
		{
			vx = -0.95 * vx;
		}
		if (y >= 580)//防止小球超出地面
			y = 580;
		cleardevice();//清除之前的绘制的内容
		fillcircle(x, y, 20);//画一个20的圆
		Sleep(10);//暂停10毫秒
		
		
		
	}
	_getch();//等待按键
	closegraph();//关闭窗口 
	return 0;
}