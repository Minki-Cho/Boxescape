/*
File name : boxescape.c
Project name : BOXESCAPE
Authour : GyuYoung Park, MinKi Cho, WonJu Cho, UiJin Lee 
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/
#include "Header.h"
#include "render.h"
#include "Menu.h"
#include "Printing.h"
#include "Printing_Ending.h"
#include "opening.h"
#include "Ending.h"
#include "backgroundsound.h"
#include "Howto.h"
#include "digipenlogo.h"
#include "Credit.h"

int main(void)
{
    digipen_logo();
    Basic_Sound();
    int score = 0;
    int end = 0;

    Printing();

    int key = 0;

    while (key != 'P' || key != 'p' || key != 'h' || key != 'q' || key != 'H' || key != 'Q' || key != 'c' || key != 'C')
    {
        Menu();
        key = _getch();
        if (key != '\0')
        {
            if (key == 'P' || key == 'p')
            {
                system("mode con cols=76 lines=27");
                system("cls");
                Opening();
                Render(&score, &end);
                break;
            }
            if (key == 'h' || key == 'H')
            {
                ToPlay();
                key = 0;
            }
            else if (key == 'q' || key == 'Q')
            {
                system("cls");
                Printing_Ending(1000);
                return 0;
            }
            else if (key == 'c' || key == 'C')
            {
                system("cls");
                Printing_Credit();
            }
            else
            {
                system("cls");

            }
        }
    }

    Ending(score, end);

    Printing_Ending(score);

    return 0;

}
