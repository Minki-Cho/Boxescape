/*
File name : render.c
Project name : BOXESCAPE
Authour : Primary - MinKi Cho, Secondary - GyuYoung Park.
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/
#include "Header.h"
#include "gotoxy.h"
#include "initmap.h"
#include "textcolor.h"
#include "render.h"
#include "Sound.h"
#include "movement.h"
#include "comment.h"
#include "backgroundsound.h"

void Render(int* score, int* end)
{	

	int running = -1;
	int count = 0;
	int d = 0;
	int i;
	{
		unsigned int x = 2;
		unsigned int y = 3;
		int key;
		system("cls");
		gotoxy(x, y);
		
		initMap(running, count, &running);
		gotoxy(x, y);

		/*drawplayer*/
		//textcolor(0x2223);
		//printf("#\b");


		while (running != 4) 
		{
			i = count / 2;
			if (_kbhit())
			{
				
				key = _getch();

				movement(key, &x, &y, &running, &d);
				
				initMap(running, i, &running);
				comment(i, &running, &d);

				gotoxy(x, y);			/*drawplayer*/
				textcolor(0x2223);
				printf(".\b");

				count++;
                                sound(i);
			}
			
			if (i == 700)
			{
				DeadEnding();
			}

		}
		
	}
        *score = i;
		*end = d;
}