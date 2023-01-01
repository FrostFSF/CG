#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void dda(int x1,int y1,int x2,int y2,int color)
{
	int dx,dy;
	dx = x2-x1;
	dy = y2-y1;
	
	int length;
	if(abs(dx) >= abs(dy))
	{
		length = dx;
	}
	else
	{
		length = dy;
	}
	
	int xinc,yinc;
	xinc = dx/length;
	yinc = dy/length;
	
	int x,y;
	x = x1;
	y = y1;
	putpixel(x,y,color);
	
	for(int i = 0; i < length; i++)
	{
		x = x + xinc;
		y = y + yinc;
		putpixel(x,y,color);
	}
}




int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	
	dda(200,200,300,200);
	
	getch();
	return 0;
}
