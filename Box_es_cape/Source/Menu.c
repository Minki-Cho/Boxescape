/*
File name : Menu.c
Project name : BOXESCAPE
Authour : UiJin Lee - make menu, WonJu Cho - make graphic.
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved.”
*/
#include "Header.h"
#include "printIndent.h"

//A function that provides graphics and information about a menu.
void Menu()
{
    system("mode con cols=105 lines=25");
    static const char * BOX_ES_CAPE[] =
    {
            "$$$$$$$\\   $$$$$$\\  $$\\   $$\\       $$$$$$$$\\  $$$$$$\\         $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$$\\ ",
            "$$  __$$\\ $$  __$$\\ $$ |  $$ |      $$  _____|$$  __$$\\       $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|",
            "$$ |  $$ |$$ /  $$ |\\$$\\ $$  |      $$ |      $$ /  \\__|      $$ /  \\__|$$ /  $$ |$$ |  $$ |$$ |      ",
            "$$$$$$$\\ |$$ |  $$ | \\$$$$  /       $$$$$\\    \\$$$$$$\\        $$ |      $$$$$$$$ |$$$$$$$  |$$$$$\\    ",
            "$$  __$$\\ $$ |  $$ | $$  $$<        $$  __|    \\____$$\\       $$ |      $$  __$$ |$$  ____/ $$  __|   ",
            "$$ |  $$ |$$ |  $$ |$$  /\\$$\\       $$ |      $$\\   $$ |      $$ |  $$\\ $$ |  $$ |$$ |      $$ |      ",
            "$$$$$$$  | $$$$$$  |$$ /  $$ |      $$$$$$$$\\ \\$$$$$$  |      \\$$$$$$  |$$ |  $$ |$$ |      $$$$$$$$\\ ",
            "\\_______/  \\______/ \\__|  \\__|      \\________| \\______/        \\______/ \\__|  \\__|\\__|      \\________|"


    };

    system("cls");

    printf("\n\n");
    for (int i = 0; i < _countof(BOX_ES_CAPE); i++)
    {
        PrintIndent(2, BOX_ES_CAPE[i]);
    }

    printf("\n\n\n");
    PrintIndent(50, "MENU");
    printf("\n\n");
    PrintIndent(45, "(P)lay");
    printf("\n");
    PrintIndent(45, "(H)ow to play");
    printf("\n");
    PrintIndent(45, "(C)redit");
    printf("\n");
    PrintIndent(45, "(Q)uit");


}