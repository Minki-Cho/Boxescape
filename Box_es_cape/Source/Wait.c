/*
File name : Wait.c
Project name : BOXESCAPE
Authour : GyuYoung Park
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/

#include <stdio.h>
#include "Wait.h"
#include "Header.h"

//This function is to Wait while printing
void Wait(long waitTime)
{
    clock_t   wakeTime;
    wakeTime = waitTime + clock();
    while (wakeTime > clock())
    {
    }
}