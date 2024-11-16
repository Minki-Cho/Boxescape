#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include "initmap.h"
#define MAP_HEIGHT 20
#define MAP_WIDTH 20

#define POINT_X 4  //보드시작좌표x
#define POINT_Y 2  //보드시작좌표y

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

#define DELAY 100
#define EXIT 50

void Update()
{

	int temp;

	char b;




	while (_kbhit())
	{
		b = _getch();
		switch (b)
		{
		case UP:
			temp = MAP[y][x];
			MAP[y][x] = 0;
			MAP[y - 1][x] = temp;
			y--;
			break;
		case DOWN:
			temp = MAP[y][x];
			MAP[y][x] = 0;
			MAP[y + 1][x] = temp;
			y++;
			break;
		case LEFT:
			temp = MAP[y][x];
			MAP[y][x] = 0;
			MAP[y][x - 1] = temp;
			x--;
			break;
		case RIGHT:
			temp = MAP[y][x];
			MAP[y][x] = 0;
			MAP[y][x + 1] = temp;
			x++;
			break;

		}
	}
}
