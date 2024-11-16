/*
File name : Printing_Ending.c
Project name : BOXESCAPE
Authour : Primary - WonJu Cho, secondary - UiJin Lee.
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/

#include "Header.h"
#include "Printing_Ending.h"
#include "printIndent.h"

//Function that provides a graphic of ending score.
void Printing_Ending(int score)
{


    static const char * SCORE[] =
    {
            " ___  ___ ___  _ __ ___ ",
            "/ __|/ __/ _ \\| '__/ _ \\",
            "\\__ \\ (_| (_) | | |  __/",
            "|___/\\___\\___/|_|  \\___|"
    };

    printf("\n\n\n\n\n\n\n");
    for (int i = 0; i < _countof(SCORE); i++)
    {
        PrintIndent(25, SCORE[i]);
    }


    printf("\n\n\n%40d\n\n\n\n", 1000 - score);
    PrintIndent(23, "thanks for playing :)  ");

    Sleep(2000);


    for (int i = 0; i < 50; i++)
    {
        printf("\n             ");
        Sleep(10);
    }


}