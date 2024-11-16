/*
File name : movement.c
Project name : BOXESCAPE
Authour : GyuYoung Park.
Copyright:
“All content © 2018 DigiPen(USA) Corporation, all rights reserved.”
*/
#include "initmap.h"
#include "render.h"
#include "restart.h"

void movement(int key, int* a, int* b, int* c, int* d)
{
    int running = *c;
    int x = *a;
    int y = *b;
    if (key != '\0')
    {
        if (key == 'q')
        {
            running = 4;

        }
        else if (key == 'r')
        {
            restart(&running);
            if (running == 1)
            {
                x = 2;
                y = 2;
            }
            else if (running == 3)
            {
                x = 10;
                y = 10;
            }
            else if (running == -1)
            {
                x = 2;
                y = 3;
            }
            else if (running == 0)
            {
                x = 2;
                y = 2;
            }
            else if (running == 2)
            {
                x = 2;
                y = 19;
            }
        }
        else if (key == UP)
        {
            if (MAZE[y - 2][x - 1] == BOX_1)
            {
                if (MAZE[y - 3][x - 1] == SPACE)
                {

                    if (running == 1)
                    {
                        MAP1[y - 2][x - 1] = SPACE;
                        MAP1[y - 3][x - 1] = BOX_1;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 2][x - 1] = SPACE;
                        MAP2[y - 3][x - 1] = BOX_1;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL1[y - 3][x - 1] = BOX_1;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL2[y - 3][x - 1] = BOX_1;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 2][x - 1] = SPACE;
                        MAPFINAL[y - 3][x - 1] = BOX_1;
                    }
                    y--;
                }
            }
            else if (MAZE[y - 2][x - 1] == BOX_2)
            {
                if ((MAZE[y - 4][x - 1] == SPACE) && (MAZE[y - 3][x - 1] == SPACE))
                {
                    if (running == 1)
                    {
                        MAP1[y - 2][x - 1] = SPACE;
                        MAP1[y - 4][x - 1] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 2][x - 1] = SPACE;
                        MAP2[y - 4][x - 1] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL1[y - 4][x - 1] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL2[y - 4][x - 1] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 2][x - 1] = SPACE;
                        MAPFINAL[y - 4][x - 1] = BOX_2;
                    }
                    y--;
                }
                else if (MAZE[y - 3][x - 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 2][x - 1] = SPACE;
                        MAP1[y - 3][x - 1] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 2][x - 1] = SPACE;
                        MAP2[y - 3][x - 1] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL1[y - 3][x - 1] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL2[y - 3][x - 1] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 2][x - 1] = SPACE;
                        MAPFINAL[y - 3][x - 1] = BOX_2;
                    }
                    y--;
                }
            }
            else if (MAZE[y - 2][x - 1] == BOX_BACK)
            {
                if (MAZE[y][x - 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 2][x - 1] = SPACE;
                        MAP1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 2][x - 1] = SPACE;
                        MAP2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 2][x - 1] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 2][x - 1] = SPACE;
                        MAPFINAL[y - 1][x - 1] = BOX_BACK;
                    }
                    y++;
                }
            }
            else if (MAZE[y - 2][x - 1] == SPACE)
            {
                y--;
            }
            if (MAZE[y - 2][x - 1] == BOX_DISSAPEAR)
            {
                if (running == 1)
                {
                    MAP1[y - 2][x - 1] = SPACE;
                }
                else if (running == 2)
                {
                    MAP2[y - 2][x - 1] = SPACE;
                }
                else if (running == -1)
                {
                    MAPTUTORIAL1[y - 2][x - 1] = SPACE;
                }
                else if (running == 0)
                {
                    MAPTUTORIAL2[y - 2][x - 1] = SPACE;
                }
                else if (running == 3)
                {
                    MAPFINAL[y - 2][x - 1] = SPACE;
                }
            }
            else if (MAZE[y - 2][x - 1] == EXIT)
            {
                if (running == 1)
                {
                    x = 2;
                    y = 19;
                }
                else if (running == 2)
                {
                    x = 10;
                    y = 10;
                }
                else if (running == -1)
                {
                    x = 2;
                    y = 2;
                }
                else if (running == 0)
                {
                    x = 2;
                    y = 2;
                }
                else if (running == 3)
                {
                    x = 11;
                    y = 11;
                }
                running++;
            }
            else if (y < 1)
            {
                y++;
            }

        }
        else if (key == DOWN)
        {
            if (MAZE[y][x - 1] == BOX_1)
            {
                if (MAZE[y + 1][x - 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y][x - 1] = SPACE;
                        MAP1[y + 1][x - 1] = BOX_1;
                    }
                    else if (running == 2)
                    {
                        MAP2[y][x - 1] = SPACE;
                        MAP2[y + 1][x - 1] = BOX_1;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y][x - 1] = SPACE;
                        MAPTUTORIAL1[y + 1][x - 1] = BOX_1;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y][x - 1] = SPACE;
                        MAPTUTORIAL2[y + 1][x - 1] = BOX_1;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y][x - 1] = SPACE;
                        MAPFINAL[y + 1][x - 1] = BOX_1;
                    }
                    y++;
                }
            }
            else if (MAZE[y][x - 1] == BOX_BACK)
            {
                if (MAZE[y - 2][x - 1] == SPACE)
                {

                    if (running == 1)
                    {
                        MAP1[y][x - 1] = SPACE;
                        MAP1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 2)
                    {

                        MAP2[y][x - 1] = SPACE;
                        MAP2[y - 1][x - 1] = BOX_BACK;
                    }

                    else if (running == -1)
                    {


                        MAPTUTORIAL1[y][x - 1] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 1] = BOX_BACK;

                    }
                    else if (running == 0)
                    {
                        if (y == 1)
                        {
                            y++;
                        }
                        else
                        {
                            MAPTUTORIAL2[y][x - 1] = SPACE;
                            MAPTUTORIAL2[y - 1][x - 1] = BOX_BACK;
                        }
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y][x - 1] = SPACE;
                        MAPFINAL[y - 1][x - 1] = BOX_BACK;
                    }
                    y--;

                }
            }
            else if (MAZE[y][x - 1] == BOX_2)
            {
                if ((MAZE[y + 2][x - 1] == SPACE) && (MAZE[y + 1][x - 1] == SPACE))
                {
                    if (running == 1)
                    {
                        MAP1[y][x - 1] = SPACE;
                        MAP1[y + 2][x - 1] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y][x - 1] = SPACE;
                        MAP2[y + 2][x - 1] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y][x - 1] = SPACE;
                        MAPTUTORIAL2[y + 2][x - 1] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL1[y][x - 1] = SPACE;
                        MAPTUTORIAL2[y + 2][x - 1] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y][x - 1] = SPACE;
                        MAPFINAL[y + 2][x - 1] = BOX_2;
                    }
                    y++;
                }
                else if (MAZE[y + 1][x - 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y][x - 1] = SPACE;
                        MAP1[y + 1][x - 1] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y][x - 1] = SPACE;
                        MAP2[y + 1][x - 1] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y][x - 1] = SPACE;
                        MAPTUTORIAL1[y + 1][x - 1] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y][x - 1] = SPACE;
                        MAPTUTORIAL2[y + 1][x - 1] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y][x - 1] = SPACE;
                        MAPFINAL[y + 1][x - 1] = BOX_2;
                    }
                    y++;
                }
            }
            else if (MAZE[y][x - 1] == BOX_DISSAPEAR)
            {
                if (running == 1)
                {
                    MAP1[y][x - 1] = SPACE;
                }
                else if (running == 2)
                {
                    MAP2[y][x - 1] = SPACE;
                }
                else if (running == -1)
                {
                    MAPTUTORIAL1[y][x - 1] = SPACE;
                }
                else if (running == 0)
                {
                    MAPTUTORIAL2[y][x - 1] = SPACE;
                }
                else if (running == 3)
                {
                    MAPFINAL[y][x - 1] = SPACE;
                }
            }
            else if (MAZE[y][x - 1] == SPACE)
            {
                y++;
            }
            else if (MAZE[y][x - 1] == EXIT)
            {
                if (running == 1)
                {
                    x = 2;
                    y = 19;
                }
                else if (running == 2)
                {
                    x = 10;
                    y = 10;
                }
                else if (running == -1)
                {
                    x = 2;
                    y = 2;
                }
                else if (running == 0)
                {
                    x = 2;
                    y = 2;
                }
                else if (running == 3)
                {
                    x = 11;
                    y = 11;
                }
                running++;
            }
            else if (MAZE[y][x - 1] == END)
            {
                *d = END;
                running++;
            }
        }
        else if (key == LEFT)
        {
            if (MAZE[y - 1][x - 2] == BOX_1)
            {
                if (MAZE[y - 1][x - 3] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 3] = BOX_1;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 3] = BOX_1;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 3] = BOX_1;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 3] = BOX_1;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 3] = BOX_1;
                    }
                    x--;
                }
            }
            else if (MAZE[y - 1][x - 2] == BOX_2)
            {
                if ((MAZE[y - 1][x - 4] == SPACE) && (MAZE[y - 1][x - 3] == SPACE))
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 4] = BOX_2;
                    }
                    x--;
                }
                else if (MAZE[y - 1][x - 3] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 3] = BOX_2;
                    }
                    x--;
                }
            }
            else if (MAZE[y - 1][x - 2] == BOX_BACK)
            {
                if (MAZE[y - 1][x] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 1] = BOX_BACK;
                    }
                    x++;
                }
            }
            else if (MAZE[y - 1][x - 2] == BOX_2)
            {
                if ((MAZE[y - 1][x - 3] == SPACE) && (MAZE[y - 1][x - 4] == SPACE))
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 4] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 4] = BOX_2;
                    }
                    x--;
                }
                else if (MAZE[y - 1][x - 3] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x - 2] = SPACE;
                        MAP1[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x - 2] = SPACE;
                        MAP2[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 3] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x - 2] = SPACE;
                        MAPFINAL[y - 1][x - 3] = BOX_2;
                    }
                    x--;
                }
            }
            else if (MAZE[y - 1][x - 2] == SPACE)
            {
                x--;

            }
            else if (MAZE[y - 1][x - 2] == BOX_DISSAPEAR)
            {
                if (running == 1)
                {
                    MAP1[y - 1][x - 2] = SPACE;
                }
                else if (running == 2)
                {
                    MAP2[y - 1][x - 2] = SPACE;
                }
                else if (running == -1)
                {
                    MAPTUTORIAL1[y - 1][x - 2] = SPACE;
                }
                else if (running == 0)
                {
                    MAPTUTORIAL2[y - 1][x - 2] = SPACE;
                }
                else if (running == 3)
                {
                    MAPFINAL[y - 1][x - 2] = SPACE;
                }
            }
            else if (MAZE[y - 1][x - 2] == EXIT)
            {
                {
                    if (running == 1)
                    {
                        x = 2;
                        y = 19;
                    }
                    else if (running == 2)
                    {
                        x = 10;
                        y = 10;
                    }
                    else if (running == -1)
                    {
                        x = 2;
                        y = 2;
                    }
                    else if (running == 0)
                    {
                        x = 2;
                        y = 2;
                    }

                    running++;
                }
            }
            else if (MAZE[y - 1][x - 2] == END)
            {
                *d = END;
                running++;
            }

            else if (MAZE[y - 1][x - 2] == END1 || MAZE[y - 1][x - 2] == END3)
            {
                if (MAZE[y - 1][x - 2] == END1)
                {
                    *d = END1;
                }

                else if (MAZE[y - 1][x - 2] == END3)
                {
                    *d = END3;
                }
                running++;
            }

            if (x < 1)
            {
                x++;
            }
        }
        else if (key == RIGHT)
        {
            if (MAZE[y - 1][x] == BOX_1)
            {
                if (MAZE[y - 1][x + 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x] = SPACE;
                        MAP1[y - 1][x + 1] = BOX_1;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x] = SPACE;
                        MAP2[y - 1][x + 1] = BOX_1;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x] = SPACE;
                        MAPTUTORIAL1[y - 1][x + 1] = BOX_1;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x] = SPACE;
                        MAPTUTORIAL2[y - 1][x + 1] = BOX_1;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x] = SPACE;
                        MAPFINAL[y - 1][x + 1] = BOX_1;
                    }
                    x++;
                }
            }
            else if (MAZE[y - 1][x] == BOX_2)
            {
                if ((MAZE[y - 1][x + 1] == SPACE) && (MAZE[y - 1][x + 2] == SPACE))
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x] = SPACE;
                        MAP1[y - 1][x + 2] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x] = SPACE;
                        MAP2[y - 1][x + 2] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x] = SPACE;
                        MAPTUTORIAL1[y - 1][x + 2] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x] = SPACE;
                        MAPTUTORIAL2[y - 1][x + 2] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x] = SPACE;
                        MAPFINAL[y - 1][x + 2] = BOX_2;
                    }
                    x++;
                }
                else if (MAZE[y - 1][x + 1] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x] = SPACE;
                        MAP1[y - 1][x + 1] = BOX_2;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x] = SPACE;
                        MAP2[y - 1][x + 1] = BOX_2;
                    }
                    else if (running == -1)
                    {
                        MAPTUTORIAL1[y - 1][x] = SPACE;
                        MAPTUTORIAL1[y - 1][x + 1] = BOX_2;
                    }
                    else if (running == 0)
                    {
                        MAPTUTORIAL2[y - 1][x] = SPACE;
                        MAPTUTORIAL2[y - 1][x + 1] = BOX_2;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x] = SPACE;
                        MAPFINAL[y - 1][x + 1] = BOX_2;
                    }
                    x++;
                }
            }
            else if (MAZE[y - 1][x] == BOX_BACK)
            {
                if (MAZE[y - 1][x - 2] == SPACE)
                {
                    if (running == 1)
                    {
                        MAP1[y - 1][x] = SPACE;
                        MAP1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 2)
                    {
                        MAP2[y - 1][x] = SPACE;
                        MAP2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == -1)

                    {
                        MAPTUTORIAL1[y - 1][x] = SPACE;
                        MAPTUTORIAL1[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 0)

                    {
                        MAPTUTORIAL2[y - 1][x] = SPACE;
                        MAPTUTORIAL2[y - 1][x - 1] = BOX_BACK;
                    }
                    else if (running == 3)
                    {
                        MAPFINAL[y - 1][x] = SPACE;
                        MAPFINAL[y - 1][x - 1] = BOX_BACK;
                    }

                    x--;
                }
            }
            else if (MAZE[y - 1][x] == SPACE)
            {
                x++;

            }
            else if (MAZE[y - 1][x] == BOX_DISSAPEAR)
            {
                if (running == 1)
                {
                    MAP1[y - 1][x] = SPACE;
                }
                else if (running == 2)
                {
                    MAP2[y - 1][x] = SPACE;
                }
                else if (running == -1)
                {
                    MAPTUTORIAL1[y - 1][x] = SPACE;
                }
                else if (running == 0)
                {
                    MAPTUTORIAL2[y - 1][x] = SPACE;
                }
                else if (running == 3)
                {
                    MAPFINAL[y - 1][x] = SPACE;
                }
            }
            else if (MAZE[y - 1][x] == EXIT)
            {
                if (running == 1)
                {
                    x = 2;
                    y = 19;
                }
                else if (running == 2)
                {
                    x = 11;
                    y = 11;
                }
                else if (running == -1)
                {
                    x = 2;
                    y = 2;
                }
                else if (running == 0)
                {
                    x = 2;
                    y = 2;
                }
                running++;
            }
            else if (MAZE[y - 1][x] == END2 || MAZE[y - 1][x] == END4)
            {
                if (MAZE[y - 1][x] == END2)
                {
                    *d = END2;
                }
                else if (MAZE[y - 1][x] == END4)
                {
                    *d = END4;
                }
                running++;
            }
            else if (MAZE[y - 1][x] == END)
            {
                *d = END;
                running++;
            }
        }
        *a = x;
        *b = y;
        *c = running;
    }
}