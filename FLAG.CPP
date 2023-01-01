#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>


void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
for(int i=0;i<=300;i+=5){
bar(250,120,255,450);

if(i<300){

  bar(258,410-i,300,430-i);
  delay(110);
 cleardevice();
}
else if(i==300){
rectangle(258,120,400,210);
line(258,150,400,150);
line(258,180,400,180);
circle(329,165,13);

setfillstyle(SOLID_FILL,BROWN);
floodfill(260,122,WHITE);

setfillstyle(SOLID_FILL,WHITE);
floodfill(260,152,WHITE);

setfillstyle(SOLID_FILL,GREEN);
floodfill(260,182,WHITE);
}
}
getch();

}