#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

class pattern
{
public:
void bres(int xc,int yc,int r)
{
int x,y,d;

x =0;
y = r;
d = 3-2*r;

while(x<y)
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,WHITE);

putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc+x,WHITE);

if(d<0)
{
d = d+4*x+6;
}
else
{
d = d+4*(x-y)+10;
y = y-1;
}
x= x+1;
}
}


void dda(int x1,int y1,int x2,int y2)
{
int dx,dy,length;
dx= x2-x1;
dy= y2-y1;

if(abs(dx)>abs(dy))
{
length = abs (dx);
}
else
{
length = abs(dy);
}

int x,y;
x= x1;
y =y1;
putpixel(x,y,WHITE);

int xinc,yinc;
xinc = dx/length;
yinc = dy/length;

for (int i =0;i<length;i++)
{
	x = x+xinc;
	y = y+yinc;
	putpixel(x,y,WHITE);
}
}
};

void main()
{
int gd = DETECT ,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

pattern p;

p.dda(200,200,400,200);
p.dda(400,200,400,400);
p.dda(400,400,200,400);
p.dda(200,400,200,200);

p.dda(300,200,400,300);
p.dda(400,300,300,400);
p.dda(300,400,200,300);
p.dda(200,300,300,200);

p.bres(300,300,70);

getch();
}