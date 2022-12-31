#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void bresline(int x1,int y1,int x2,int y2)
{
  int dx,dy;
  dx = x2-x1;
  dy = y2-y1;
  
  int d;
  d = 2*dy-dx;
  
  int x,y;
  x = x1;
  y = y1;
  putpixel(x,y,WHITE);
  
  while(x < x2)
  {
    if(d >= 0)
    {
      y = y+1;
      d = d+2*dy-2*dx;
      putpixel(x,y,WHITE);
    }
    else
    {
      d = d+2*dy;
      putpixel(x,y,WHITE);
    }
    x = x+1;
  }
}


int main()
{
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"c://turboc3//bgi");
  
  bresline(200,200,300,200);
  
  getch();
  return 0;
}
