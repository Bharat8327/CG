#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm;
int x = 100;
int y = 150;
clrscr();
initgraph(&gd, &gm, "C://TC/BIN");
putpixel(x,y,WHITE);
getch();
closegraph();
}