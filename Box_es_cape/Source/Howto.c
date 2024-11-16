/*
File name: Howto.c
Project name: BOXESCAPE
Authour : UiJin Lee
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/

#pragma once
#include "Header.h"
#include "printIndent.h"
#include "Wait.h"

//Function that provides dialogue to help the Player.
void ToPlay()
{
    system("cls");
    printf("\n\n\n");
    PrintIndent(32, "\n\n\n\n");
    Wait(500);
    PrintIndent(25, "This is a puzzle-maze game.\n");
    Wait(1000);
    PrintIndent(25, "You can move the player using the direction key.\n");
    Wait(1000);
    PrintIndent(25, "This game starts at 'S' and players should move to 'G'.\n");
    Wait(1000);
    PrintIndent(25, "In the maze, Boxes with their own abilities are arranged.\n");
    Wait(1000);
    PrintIndent(25, "You can push that boxes and make your own path.\n");
    Wait(2000);
    PrintIndent(25, "Enter");
    getchar();
    /*PrintIndent(25, "If you want to read next, press enter key");
    getchar();
    Wait(1000);*/
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n");
    PrintIndent(30, "Pupple box : '1' forward.\n");
    Wait(1000);
    PrintIndent(30, "Green box : '2' forward.\n");
    Wait(1000);
    PrintIndent(30, "Yellow box : '1' backward.\n");
    Wait(1000);
    PrintIndent(30, "Gray box : Disappear.\n");
    Wait(2000);
    PrintIndent(30, "Enter");
    getchar();
    system("cls");
    printf("\n\n\n\n\n");
    PrintIndent(25, "The number of movements is limited.\n");
    Wait(1000);
    PrintIndent(25, "As the score approaches zero, the player becomes more dangerous.\n");
    Wait(1000);
    PrintIndent(25, "At last stage, There are four exits.\n");
    Wait(1000);
    PrintIndent(25, "each exits has different ending stories.\n");
    Wait(1000);
    PrintIndent(25, "Just escape from the boxes!!\n\n");
    Wait(1000);
    PrintIndent(25, "Good Luck :)\n\n");
    PrintIndent(25, "PRESS ENTER KEY");
    Wait(1000);

    getchar();

}