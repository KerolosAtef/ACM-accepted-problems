
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(void) {
         int gdriver = DETECT, gmode, errorcode;
            int midx, midy;
               int stangle = 45, endangle = 135;
                  int radius = 100;
       initgraph(&gdriver, &gmode, "");

errorcode = graphresult();
    if (errorcode != grOk) {

      printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
        getch();
              exit(1);
        }
   midx = getmaxx() / 2;
     midy = getmaxy() / 2;
        setcolor(getmaxcolor());

     arc(midx, midy, stangle, endangle, radius);
      getch();
       closegraph();
          return 0;
          }
