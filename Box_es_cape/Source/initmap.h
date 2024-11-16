/*
File name: initmap.h
Project name: BOXESCAPE
Authour : MinKi Cho - make base coding, GyuYoung Park - makse base coding, WonJu Cho - make maps, UiJin Lee - make maps.
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/
#pragma once
#pragma once
#include "define.h"

#define SPACE 0
#define WALL 1
#define BOX_1 2             //move one step
#define START 3
#define EXIT 4
#define BOX_2 5            //move two step
#define BOX_BACK 6         //move back one step
#define BOX_DISSAPEAR 7    //box that dissapear

#define END1 40
#define END2 41
#define END3 42
#define END4 43
#define END 44
#define BAD_END 45



void initMap(int x, int count, int* running);

int MAP1[SIZE][SIZE];

int MAZING(int MAP[SIZE][SIZE], int MAZE[SIZE][SIZE]);

int MAZE[SIZE][SIZE];

int MAP2[SIZE][SIZE];

int CopyMap1[SIZE][SIZE];

int CopyMap2[SIZE][SIZE];

int MAPTUTORIAL1[SIZE][SIZE];

int MAPTUTORIAL2[SIZE][SIZE];

int MAPTU2[SIZE][SIZE];

int MAPTU1[SIZE][SIZE];

int MAPFINAL[SIZE][SIZE];

int MAPFI[SIZE][SIZE];