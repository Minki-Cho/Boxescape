/*
File name: Credit.c
Project name: BOXESCAPE
Authour : UiJin Lee - did coding, WonJu Cho GyuYoung Park MinKi Cho - writing.
Copyright :
“All content © 2018 DigiPen (USA) Corporation, all rights reserved.”
*/
#include "Credit.h"
#include "Wait.h"
#include "printIndent.h"

//A function that provides credit information.
void Printing_Credit()
{
    system("mode con cols=150 lines=27");

    printf("\n\n\n\n\n");
    PrintIndent(60, "President: Claude Comair");
    Wait(1000);
    printf("\n");
    PrintIndent(60, "Executive Producer : David Ly");
    Wait(1000);
    printf("\n\n\n");
    PrintIndent(75, "QWERTY");
    Wait(1000);
    printf("\n\n");
    PrintIndent(60, "Game Producer: Uijin Lee");
    Wait(1000);
    printf("\n");
    PrintIndent(60, "Technical Manager: Minki Cho");
    Wait(1000);
    printf("\n");
    PrintIndent(60, "Game designer: Gyuyoung Park");
    Wait(1000);
    printf("\n");
    PrintIndent(60, "Product Manager: Wonju Cho");
    Wait(1000);
    printf("\n");

    for (int i = 0; i < 40; i++)
    {
        printf("\n");
        Wait(50);
    }
    Wait(250);
    printf("Uijin Lee: this is my first game and team QWERTY and it is the best game DEFINITELY.");
    upping();
    printf("Minki Cho: Box is important, because I don't know what's in it until I open it.");
    upping();
    printf("Gyuyoung Park: BOX is Lie");
    upping();
    printf("Wonju Cho: It's my first game in my life, and I think I'll get a GOTY");
    upping();
    Wait(5000);


}

//make effect function
void upping()
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        Wait(500);
    }
}
