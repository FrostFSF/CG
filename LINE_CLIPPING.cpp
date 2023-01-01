#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>


static int xmin,ymin,xmax,ymax,LEFT=1,RIGHT=2,TOP=4,BOTTOM=8;
int getcode(int x,int y)
{
  int code = 0;
  if(y > ymax) code |= TOP;
  if(y < ymin) code |= BOTTOM;
  if(x > xmax) code |= RIGHT;
  if(x < xmin) code |= LEFT;
  return code;
}



int main()
{
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"c://turboc3//bgi");
  
  cout << "Enter window's dimension: ";
  cin >> xmin >> ymin >> xmax >> ymax;
  rectangle(xmin,ymin,xmax,ymax);
  
  int x1,y1,x2,y2;
  cout << "Enter line's dimension: ";
  cin >> x1 >> y1 >> x2 >> y2;
  getch();
  
  int code1 = getcode(x1,y1);
  int code2 = getcode(x2,y2);
  int accept = 0;
  
  while(1)
  {
    float slope = (float)(y2-y1)/(x2-x1);
    if(code1 == 0 && code2 == 0)
    {
      accept = 1;
      break;
    }
    else if((code1 & code2) != 0)
    {
      break;
    }
    else
    {
      int x,y,temp;
      if(code1 == 0)
      {
        temp = code2; 
      }
      else
      {
        temp = code1; 
      }
      if(temp & TOP)
      {
        x = x1+(ymax-y1)/slope; 
        y = ymax;
      }
      else if(temp & BOTTOM)
      {
        x = x1+(ymin-y1)/slope;
        y = ymin;
      }
      else if(temp & RIGHT)
      {
        y = y1 + slope*(xmax-x1);
        x = xmax;
      }
      else if(temp & LEFT)
      {
        y = y1 + slope*(xmin-x1);
        x = xmin;
      }
      if(temp == code1)
      {
        x1 = x;
        y1 = y;
        code1 = getcode(x1,y1);
      }
      else
      {
        x2 = x;
        y2 = y;
        code2 = getcode(x2,y2);
      }
    }
  }
  
  if(accept == 1)
  {
    closegraph();
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
  }
  getch();
  return 0;
}
