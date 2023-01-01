#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>

void dda(int x1,int y1,int x2,int y2,int color)
									{

int x,y,xinc,yinc,dx,dy,length;
dx = x2 - x1;
dy = y2 - y1;

if (abs(dx) >= abs(dy))
{
length = abs(dx);
}
else
{
length = abs(dy);
}

xinc = dx /length;
yinc = dy /length;

x = x1;
y = y1;
putpixel(x,y,color);
for (int i = 0 ; i < length ; i++)
{
x = x + xinc;
y = y + yinc;
putpixel(x,y,color);
}
}


void breh(int xc, int yc ,int radius, int color)
{
	int x,y,d;

	x = 0;
	y = radius;

	d = 3 - 2*radius;

	while(x <= y)
	{
		putpixel(xc+x,yc+y,7);
		putpixel(xc-x,yc-y,7);
		putpixel(xc+x,yc-y,7);
		putpixel(xc-x,yc+y,7);

		putpixel(xc+y,yc+x,7);
		putpixel(xc-y,yc-x,7);
		putpixel(xc+y,yc-x,7);
		putpixel(xc-y,yc+x,7);

		if (d<0)
		{
			d = d + 4 * x + 6;
		}
		else
		{
			d = d + 4 * ( x - y ) +10;
			y--;
		}
		x = x+1;
	}
}






void main()
{
int gd = DETECT ; int gm ;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

dda(200,200,400,200,7);
dda(400,200,400,400,7);
dda(400,400,200,400,7);
dda(200,400,200,200,7);

dda(300,200,400,300,9);
dda(400,300,300,400,9);
dda(300,400,200,300,9);
dda(200,300,300,200,9);

breh(300,300,70,3);
getch();
}