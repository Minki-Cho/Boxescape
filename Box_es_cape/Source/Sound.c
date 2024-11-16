/*
File name : Sound.c
Project name : BOXESCAPE
Authour : MinKi Cho.
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/
#include "Header.h"
#include "render.h"
#include  "Sound.h"

//Function that provides an effective sound.
void sound(int x)
{


    int sound = x % 8;

    if (sound < 4)
    {
        Beep((_C + sound * OCTAVE), TIME);
    }
    else if (sound >= 4)
    {
        Beep(_C + sound * OCTAVE2, TIME);
    }



}
