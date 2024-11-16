/*
File name: backgroundsound.c
Project name: BOXESCAPE
Authour : UiJin Lee - find bgm, WonJu Cho - find bgm, MinKi Cho - did coding.
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/
#include "backgroundsound.h"

//basic background music of game
void Basic_Sound(void)
{
    PlaySound(TEXT("Butchers.wav"), NULL, SND_ASYNC | SND_LOOP);
}

//background music function in the happy ending
void HappyEnd(void)
{
    PlaySound(TEXT("Plenty_Step.wav"), NULL, SND_ASYNC | SND_LOOP);
}

//background music function in the bad ending
void BadEnd(void)
{
    PlaySound(TEXT("Fioj.wav"), NULL, SND_ASYNC | SND_LOOP);
}

//background music function when player dead because of limited movement
void DeadEnding(void)
{
    PlaySound(TEXT("Gaia_in_Fog.wav"), NULL, SND_ASYNC | SND_LOOP);
}

//background music function in the hidden stage
void hidden(void)
{
    PlaySound(TEXT("A_Rising_Wave.wav"), NULL, SND_ASYNC | SND_LOOP);
}