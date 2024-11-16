#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define TIME 500
#define HALF_SECOND 300
#define COLOR_1 0x1234
#define COLOR_2 0x8271
#define SIZE 20

void Printing(void)
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_1 | COLOR_2);
    system("mode con cols=50 lines=25");

    printf("   Q"); Sleep(TIME);
    printf("   W"); Sleep(TIME);
    printf("   E"); Sleep(TIME);
    printf("   R"); Sleep(TIME);
    printf("   T"); Sleep(TIME);
    printf("   Y"); Sleep(TIME);
    printf("   !\n\n");
    Sleep(TIME);
    printf("BOX ES CAPE\n\n");
    printf("press any key to start! \n");

}
void maps()
{
    
    int MAP[SIZE][SIZE] =

    {

    { 1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },  //0 is space, 1 is wall, 3 is player

    { 1,0,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,1 },

    { 1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1 },

    { 1,0,1,0,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1 },

    { 1,0,1,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,1 },

    { 1,0,1,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,1 },

    { 1,0,1,0,1,1,1,1,0,1,0,0,1,0,1,0,0,1,0,1 },

    { 1,0,1,0,0,0,0,1,0,1,1,0,1,0,1,0,1,1,0,1 },

    { 1,0,1,0,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1 },

    { 1,0,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1 },

    { 1,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1 },

    { 1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,0 },

    { 1,0,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,1,0,1 },

    { 1,0,1,0,1,0,1,1,1,1,0,1,1,0,1,0,0,1,0,1 },

    { 1,0,0,0,1,0,1,0,0,1,0,1,0,0,0,0,1,1,1,1 },

    { 1,0,1,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1 },

    { 1,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1 },

    { 1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1 },

    { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },

    { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 }

    };
}
void gotoxy(int x, int y) {
    COORD Pos = { x - 1, y - 1};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void Render()
{
    {
        unsigned int x = 1;
        unsigned int y = 1;
        int key;

        gotoxy(x, y);
        while (1) {
            key = _getch();
            if (key == 0 || key == 0xe0) {
                key = _getch();
                if (key == 72) //up
                {
                    y--;
                    if (y<1) y = 1;
                }
                else if (key == 80) //down
                {
                    y++;
                }
                else if (key == 75) //left
                {
                    x--;
                    if (x<1) x = 1;
                }
                else if (key == 77) //right
                {
                    x++;
                }
                else if (key == 27)
                {
                    break;
                }
                system("cls");
                gotoxy(x, y);
                printf("#");
                Beep(1400, 100);
                Sleep(HALF_SECOND);
            }

        }
    }
}
void Checkpoint()
{
    int count = 0;

        printf("%d", count);
        count++;
}

int main(void)
{
    Printing();

    while (1)
    {
        Render();
    }
}