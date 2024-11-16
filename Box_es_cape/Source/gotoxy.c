/*
File name: gotoxy.c
Project name: BOXESCAPE
Authour : MinKi Cho
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/
#include "Header.h"


//set player's position, erase the underbar function
void gotoxy(int x, int y) {

    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
    CONSOLE_CURSOR_INFO cur;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);
    cur.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);
}