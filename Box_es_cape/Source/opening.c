/*
File name : opening.c
Project name : BOXESCAPE
Authour : GyuYoung Park
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved.”
*/

#include "Header.h"
#include "Printing.h"
#define BLACK_WHITE SetConsoleTextAttribute(COL, 0x000f);
#include "textcolor.h"

//Function that provides opening dialogue.
void Opening()
{
    BLACK_WHITE
        printf("Want you skip the story?\n\n ((y)es/(n)o) \n");
    int command = getchar();
    if (command == 'n' || command == 'N')
    {
        printf("I am a Road Man. Who lives on the road.\n\n");
        Wait(1500);

        printf("I had slept on the road as same as the other days.\n\n");
        Wait(1500);

        printf("I slept as long... long... long...\n\n");
        Wait(1500);

        printf("I slept 10 Hour? I don't know. I have no clock.\n\n");
        Wait(1500);

        printf("I woke up. But... there are different view which I had not seen.\n\n");
        Wait(1500);

        printf("Boxes? I can't understand.\nBut I know only One Thing.\n\n");
        Wait(1500);

        printf("Escape. Escape Here. That's What I need To Do.");
        Wait(1500);
    }
    else if (command == 'y' || command == 'Y')
    {

    }
    printf("\n\nEnter the ENTER key for start...");
    getchar();
    getchar();

}