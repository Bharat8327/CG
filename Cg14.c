#include <graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
   int i, gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   setviewport(0, 0, 639, 440, 1);




   for (i = 0; i <= 420; i += 10)
   {
      rectangle(50 + i, 275, 150 + i, 400);
      rectangle(150 + i, 350, 200 + i, 400);


      circle(100 + i, 450 - 2 * i, 40);

      circle(75 + i, 410, 20);
      circle(175 + i, 410, 20);

      setfillstyle(SOLID_FILL, BLUE);
      fillellipse(50, 400, 100, 250);
      fillellipse(600, 380, 100, 180);

      setcolor(i);
      delay(100);

      if (i == 420)
	 break;

      clearviewport();
   }
   getch();
   cleardevice();
   closegraph();
   return 0;
}