/*
File name : textcolor.h
Project name : BOXESCAPE
Authour : MinKi Cho.
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/
#pragma once

#define GRAY_1 0x8271
#define EMERALD 0x1234
#define WINE 0x5555
#define DARKBLUE 0x1111
#define BLUE 0x0123
#define GRASS 0X66
#define GRAY_2 0x888
#define WHITE 7

#define COL         GetStdHandle(STD_OUTPUT_HANDLE)
#define BLACK_WHITE SetConsoleTextAttribute(COL, 0x000f);
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);


//Function that provides text color
void textcolor(int color_number);