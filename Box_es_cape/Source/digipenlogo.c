/*
File name: digipenlogo.c
Project name: BOXESCAPE
Authour : UiJinLee
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/
#include "Header.h"
#include "Wait.h"
#include "printIndent.h"
#include "digipenlogo.h"

//Function that makes DigiePenrogo visible
void digipen_logo()
{

    system("color 7");

    static char * DIGIPEN[] =
    {
    "                                _______                  ________              ",
    "             /### /#######     |       \\                |        \\             ",
    "             /### /#########   |        \\  _          _ |   ___   |            ",
    "             /### /##########  |    |    ||_|        |_||         |            ",
    "             /### /########### |    |    | _   ____   _ |    ____/____   _____ ",
    "             /### /########### |    |    || | /    \\ | ||   |    /    \\ |     \\",
    "             /### /##########  |    |    || ||  __  || ||   |   |  --  ||     |",
    "             /### /#########   |        / | ||      || ||   |   |  ____||  |  |",
    "             /### /#######/    |_______/  |_| \\___  ||_||___|    \\____\\ |__|__|",
    "    /####### /### ///////                     /     |                          ",
    "  /######### /###                             \\____/                           ",
    " /########## /###                                                              ",
    "/########### /###                                                              ",
    "/########### /###      _____ ___   ___ __  _  __ ___ __ __       _     _  _    ",
    "//########## /### ||\\||_  | | | | | | |__ | ||__  | |__|  |_||\\|| ||  | || _|_|",
    " //######### /### || |__| | | | |_| | |__ |_||    | |__|__| || ||_||__|_||_| | ",
    "  ///####### /###                                                              ",
    "    ///////  ///                                                               ",
    };

    printf("\n\n\n\n\n");
    for (int i = 0; i < _countof(DIGIPEN); i++)
    {

        PrintIndent(20, DIGIPEN[i]);
    }
    Wait(2000);
    system("cls");
}