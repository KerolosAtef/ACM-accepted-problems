#include <graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


int main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:/tc/bgi");
putpixel(100,100,WHITE);
setcolor(YELLOW);
line(10,10,50,50);
setcolor(BLUE);
circle(200,200,100);
getch();
closegraph();
}
