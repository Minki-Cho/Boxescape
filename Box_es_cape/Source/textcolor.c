/*
File name : textcolor.c
Project name : BOXESCAPE
Authour : MinKi Cho.
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/

#include "Header.h"

// Function that provides text color
void textcolor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);

}