/*
File name : restart.c
Project name : BOXESCAPE
Authour : GyuYoung Park.
Copyright :
“All content © 2018 DigiPen(USA) Corporation, all rights reserved."
*/ 
#include "initmap.h"

//A function that lets the Player restart a game.
void restart(int* x)
{
	int i = 0;
	int j = 0;
	if (*x == 1)
	{
		for (j = 0; j < SIZE; j++)
		{
			for (i = 0; i < SIZE; i++)
			{
				MAP1[j][i] = CopyMap1[j][i];
			}
		}
		
	}
	else if (*x == 2)
	{
		for (j = 0; j < SIZE; j++)
		{
			for (i = 0; i < SIZE; i++)
			{
				MAP2[j][i] = CopyMap2[j][i];
			}
		}
	
	}
	else if (*x == -1)
	{
		for (j = 0; j < SIZE; j++)
		{
			for (i = 0; i < SIZE; i++)
			{
				MAPTUTORIAL1[j][i] = MAPTU1[j][i];
			}
		}
	}
	else if (*x == 0)
	{
		for (j = 0; j < SIZE; j++)
		{
			for (i = 0; i < SIZE; i++)
			{
				MAPTUTORIAL2[j][i] = MAPTU2[j][i];
			}
		}
	}
	else if (*x == 3)
	{
		for (j = 0; j < SIZE; j++)
		{
			for (i = 0; i < SIZE; i++)
			{
				MAPFINAL[j][i] = MAPFI[j][i];
			}
		}
	}
}