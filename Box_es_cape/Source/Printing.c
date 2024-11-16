/*
File name : Printing.c
Project name : BOXESCAPE
Authour : Primary - UiJin Lee, secondary - WonJu Cho.
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved.”
*/

#include "Header.h"
#include "Wait.h"
#include "printIndent.h"

//Function that provides graphic of intro.
void Printing(void)
{
    SetConsoleTitleA("BOX ES CAPE");
    system("color 7");
    system("mode con cols=105 lines=25");


    static const char * QWERTY[] =
    {
            " ____ ____ ____ ____ ____ ____",
            "||Q |||W |||E |||R |||T |||Y ||",
            "||__|||__|||__|||__|||__|||__||",
            "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|"

    };
    static const char * Q[] =
    {
            " ____ ",
            "||Q ||",
            "||__||",
            "|/__\\|"
    };
    static const char * W[] =
    { "      ____ ",
            "      |W ||",
            "      |__||",
            "      /__\\|"
    };
    static const char * E[] =
    { "            ____ ",
            "            |E ||",
            "            |__||",
            "            /__\\|"
    };
    static const char * R[] =
    { "                  ____ ",
            "                  |R ||",
            "                  |__||",
            "                  /__\\|"
    };
    static const char * T[] =
    { "                        ____ ",
            "                        |T ||",
            "                        |__||",
            "                        /__\\|"
    };
    static const char * Y[] =
    { "                              ____",
            "                              |Y ||",
            "                              |__||",
            "                              /__\\|"
    };

    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(Q); i++)
    {

        PrintIndent(35, Q[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(W); i++)
    {

        PrintIndent(35, W[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(E); i++)
    {

        PrintIndent(35, E[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(R); i++)
    {

        PrintIndent(35, R[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(T); i++)
    {

        PrintIndent(35, T[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(Y); i++)
    {

        PrintIndent(35, Y[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(500);
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    PrintIndent(35, "project by TEAM");
    for (int i = 0; i < _countof(QWERTY); i++)
    {

        PrintIndent(35, QWERTY[i]);
    }
    printf("\n");
    PrintIndent(35, "      UIJIN WONJU GYUYOUNG MINKI\n");
    Wait(1500);
    system("cls");

    printf("\n\n\n\n\n\n\n");

    system("mode con cols=150 lines=27");
    static const char * PRESS_ANY_KEY[] =
    {

"		                                             /$$$$$$$$             /$$                               /$$                   ",
"                                                       | $$_____/            | $$                              | $$                          ",
"  /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$ /$$$$$$$      | $$       /$$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$       | $$   /$$  /$$$$$$  /$$   /$$",
" /$$__  $$ /$$__  $$ /$$__  $$ /$$_____//$$_____/      | $$$$$   | $$__  $$|_  $$_/   /$$__  $$ /$$__  $$      | $$  /$$/ /$$__  $$| $$  | $$",
"| $$  \ $$| $$  \__/| $$$$$$$$|  $$$$$$|  $$$$$$         | $$__/   | $$  \ $$  | $$    | $$$$$$$$| $$  \__/        | $$$$$$/ | $$$$$$$$| $$  | $$",
"| $$  | $$| $$      | $$_____/ \____  $$\____  $$        | $$      | $$  | $$  | $$ /$$| $$_____/| $$            | $$_  $$ | $$_____/| $$  | $$",
"| $$$$$$$/| $$      |  $$$$$$$ /$$$$$$$//$$$$$$$/      | $$$$$$$$| $$  | $$  |  $$$$/|  $$$$$$$| $$            | $$ \  $$|  $$$$$$$|  $$$$$$$",
"| $$____/ |__/       \_______/|_______/|_______/        |________/|__/  |__/   \___/   \_______/|__/              |__/  \__/ \_______/ \____     $$",
"| $$                                                                                                                                /$$  | $$",
"| $$                                                                                                                               |  $$$$$$/",
"|__/                                                                                                                                \______/ "
    };

    printf("\n\n\n\n\n\n");
    for (int i = 0; i < _countof(PRESS_ANY_KEY); i++)
    {
        PrintIndent(4, PRESS_ANY_KEY[i]);
    }

    getchar();
    system("cls");

    system("mode con cols=80 lines=27");
}