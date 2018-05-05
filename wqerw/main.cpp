
#include<graphics.h>


int main()
{
    int gd =DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int x=getmaxx();
    int y = getmaxy();
    setfillstyle(1,YELLOW);
    fillellipse(x/2,y/2,70,70);
    getch();
    closegraph();
    return 0;

}
