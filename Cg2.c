#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TC/BIN");
    setbkcolor(WHITE);
    setcolor(RED);
    circle(200, 100, 80);
    line(100, 250, 250, 250);
    ellipse(200, 400, 0, 360, 100, 50);
    getch();
    closegraph();
}