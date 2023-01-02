#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void bres_circle(int xc,int yc,int radius)    //xc,yc is center of the circle where you want to put the circle center.
{
  int x,y;
  x = 0;
  y = radius;
  
  int d;
  d = 3-2*radius;
  
  while(x < y)
  {
    pitpixel(xc+x,yc+y, WHITE);
    pitpixel(xc-x,yc-y, WHITE);
    pitpixel(xc+x,yc-y, WHITE);
    pitpixel(xc-x,yc+y, WHITE);
    
    pitpixel(xc+y,yc+x, WHITE);
    pitpixel(xc-y,yc-x, WHITE);
    pitpixel(xc+y,yc-x, WHITE);
    pitpixel(xc-y,yc+x, WHITE);
    if(d < 0)
    {
        d = d+4*x+6;
    }
    else
    {
      d = d+4*(x-y)+10;
      y = y-1;
    }
    x = x+1;
  }
}



int main()
{
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"c://turboc3//bgi");
  
  bres_circle(200,200,30);
  
  getch();
  return 0;
}
