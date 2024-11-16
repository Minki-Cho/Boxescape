/*
File name: backgroundsound.h
Project name: BOXESCAPE
Authour : UiJin Lee - find bgm, WonJu Cho - find bgm, MinKi Cho - did coding.
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/

#include "Header.h"
#pragma comment(lib, "winmm.lib")

//basic background music function of game
void Basic_Sound(void);

//background music function in the happy ending
void HappyEnd(void);

//background music function in the bad ending
void DeadEnding(void);

//background music function in the hidden stage
void hidden(void);