#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"c://turboc3//bgi");
  
  //translation
  int x1,y1,x2,y2;
  cout << "Enter rectangle coords (x1,y1,x2,y2): ";
  cin >> x1 >> y1 >> x2 >> y2;
  
  int tx,ty;
  cout << "Enter translation factor (tx,ty): ";
  cin >> tx >> ty;
  getch();
  
  rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
  getch();
  
  
  //scaline
  cleardevice();
  int a1,b1,a2,b2;
  cout << "Enter rectangle coords (x1,y1,x2,y2): ";
  cin >> a1 >> b1 >> a2 >> b2;
  
  int sx,sy;
  cout << "Enter scaline factor (sx,sy): ";
  cin >> sx >> sy;
  getch();
  cleardevice();
  rectangle(x1,y1,(x2-x1)*sx,(y2-y1)*sy);
  getch();
  
  
  //rotation
  cleardevice();
  int m1,n1,m2,n2;
  cout << "Enter rectangle coords (x1,y1,x2,y2): ";
  cin >> m1 >> n1 >> m2 >> n2;
  
  int angle;
  cout << "Enter angle: ";
  cin >> angle;
  
  angle = angle*(3.14/180);
  
  int xx1,yy1,xx2,yy2,xx3,yy3,xx4,yy4;
  int ax1,ay1,ax2,ay2,ax3,ay3,ax4,ay4;
  
  xx1 = yy1 = yy2 = xx4 = m1;
  xx2 = xx3 = yy3 = yy4 = m2;
  
  int refx,refy;
  refx = refy = x1;
  
  ax1 = refy + (xx1-refx)*cos(angle) - (yy1-refy)*sin(angle);
  ay1 = refy + (xx1-refx)*sin(angle) + (yy1-refy)*cos(angle);
  
  ax2 = refy + (xx2-refx)*cos(angle) - (yy2-refy)*sin(angle);
  ay2 = refy + (xx2-refx)*sin(angle) + (yy2-refy)*cos(angle);
  
  ax3 = refy + (xx3-refx)*cos(angle) - (yy3-refy)*sin(angle);
  ay3 = refy + (xx3-refx)*sin(angle) + (yy3-refy)*cos(angle);
  
  ax4 = refy + (xx4-refx)*cos(angle) - (yy4-refy)*sin(angle);
  ay4 = refy + (xx4-refx)*sin(angle) + (yy4-refy)*cos(angle);
  cleardevice();
  line(ax1,ay1,ax2,ay2);
  line(ax2,ay2,ax3,ay3);
  line(ax3,ay3,ax4,ay4);
  line(ax4,ay4,ax1,ay1);
  getch();
  return 0;
}
