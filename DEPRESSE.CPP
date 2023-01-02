#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

class scene
{
public:
void animate();
void animate(int i);
};

void scene::animate()
{
setcolor(RED);
int x,y;
x = getmaxx();
y = getmaxy();
outtextxy(random(x),random(y-75),"/");
}

void scene::animate(int i)
{
setcolor(WHITE);
line(10+i,320,10+i,250);   //BODY
line(10+i,275,40+i,275);   //HAND
circle(10+i,235,15);        //HEAD

line(40+i,275,40+i,210);	//UMBRELLA_HANDLE
line(-10+i,210,90+i,210);  //UMBRELLA_HORIXZONTAL_LINE
arc(35+i,275,180,360,5);
arc(40+i,210,0,180,50);

if (i%2==0)
{
line(10+i,320,0+i,400);
line(10+i,320,20+i,400);
}
else
{
line(10+i,320,10+i,400);
//line();
}
}






void main()
{
int gd = DETECT ,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

scene s;

for (int i = 0;i<750;i+=5)
{
	setcolor(BROWN);
	line(0,400,800,400);

	for (int j = 0 ;j<100;j++)
	{
	s.animate();
	}

	s.animate(i);

	delay(100);
	cleardevice();
}


getch();
}