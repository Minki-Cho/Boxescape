/*
File name : printIndent.c
Project name : BOXESCAPE
Authour : UiJin Lee
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved.”
*/

#include <stdio.h>
#include "printIndent.h"

//Function to help you use the indent function easily.
void PrintIndent(int x, char a[])
{
    for (int i = 0; i < x; i++)
    {
        printf(" ");
    }
    printf("%s", a);
    printf("\n");

}