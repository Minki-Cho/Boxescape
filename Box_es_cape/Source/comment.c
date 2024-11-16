/*
File name: Comment.c
Project name: BOXESCAPE
Authour : GyuYoung Park
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/


#include "Header.h"
#include "initmap.h"
#include "textcolor.h"

//A function that provides the dialogue that changes with a limited number of turns.
void comment(int x, int* running, int* end)
{
    BLACK_WHITE
        printf("\n");
    switch (x)
    {
    case 0:
    {
        printf("Where am I? There are just many boxes.");

        break;
    }
    case 29:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 30:
    {
        printf("Some boxes move, but the others are not moving. They are wall?								");
        break;
    }

    case 99:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 100:
    {
        printf("Hmm... interesting. Boxes move their own way. How?						");
        break;
    }
    case 199:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 200:
    {
        printf("It looks like game that I played when I was young.								");
        break;
    }
    case 299:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 300:
    {
        printf("How I came here? I slept on the road... Crashed by Truck?					");
        break;
    }
    case 349:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 350:
    {
        printf("Can I exit here?... I can't imagine.							");
        break;
    }
    case 401:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 402:
    {
        printf("I walked long time... I think. But I'm Here. 	");
        break;
    }
    case 449:
    {

        printf("                        	                                                																												\n");
        break;
    }
    case 450:
    {
        printf("Become tired... But I need to Move.							");
        break;
    }
    case 499:
    {

        printf("                        	                                                																											\n");
        break;
    }
    case 500:
    {
        printf("I can feel hungry. Where is the exit door?													");
        break;
    }
    case 549:
    {

        printf("                        	                                                																											\n");
        break;
    }
    case 550:
    {
        printf("Just Boxes.... Noting except Boxes?");
        break;
    }
    case 599:
    {
        printf("                                                                                           \n");

        break;
    }
    case 600:
    {
        printf("Thirsty. I can feel it now. No water, No food in here. Is here are Hell?					");
        break;
    }
    case 649:
    {
        printf("                                                                                            \n");

        break;
    }
    case 650:
    {
        printf("I don't know there are the exit door. This MAZE... Really have a exit?						");
        break;
    }
    case 699:
    {
        printf("                                                                                \n");

        break;
    }
    case 700:
    {	BLOOD
        printf("Why? Why I am here? Why I am here? Why the person in here is Me?");

    break;
    }
    case 749:
    {
        printf("                                                                      	                                                																									\n");

        break;
    }
    case 750:
    {
        BLOOD
            printf("Thisty! Hungry! Hurt! Where am I? Is anybody there? Help me! please! Save me! Please!");
        break;
    }
    case 849:
    {
        printf("	                                                                                 		\n");

        break;
    }
    case 850:
    {
        BLOOD;
        printf("Towirsty Sqve My. WER I M. APZx	");
        break;
    }
    case 899:
    {
        printf("															    	                                                																									\n");

        break;
    }
    case 900:
    {
        BLOOD;
        printf("I'n Sory Plis Sav Me! Plieasx ANy boDi TheR!? Ples");
        break;
    }
    case 949:
    {
        printf("                                                                                                             \n");

        break;
    }
    case 950:
    {
        BLOOD;
        printf("WHy.... wy.....Y....");
        break;
    }
    case 975:
    {
        printf("	                                                                                                     \n");

        break;
    }
    case 976:
    {
        BLOOD;
        printf("................");
        break;
    }
    case 989:
    {
        printf("                        	                                                																													\n");

        break;
    }
    case 990:
    {
        BLOOD;
        printf("I can feel my end.\n																		");
        break;
    }
    case 992:
    {
        BLOOD;
        printf("I can feel my end.\n");
        printf("Foot are heavy...\n");
        break;
    }
    case 994:
    {
        BLOOD;
        printf("I can feel my end.\n");
        printf("Foot are heavy...\n");
        printf("Eyes becomes Heavier....\n");
        break;
    }
    case 996:
    {
        BLOOD;
        printf("I can feel my end.\n");
        printf("Foot are heavy...\n");
        printf("Eyes becomes Heavier....\n");
        printf("Eyes are closing.....\n");
        break;
    }
    case 998:
    {
        BLOOD;
        printf("I can feel my end.\n");
        printf("Foot are heavy...\n");
        printf("Eyes becomes Heavier....\n");
        printf("Eyes are closing.....\n");
        printf("Sle..........\n");
        break;
    }
    case 999:
    {
        BLOOD;
        printf("I can feel my end.\n");
        printf("Foot are heavy...\n");
        printf("Eyes becomes Heavier....\n");
        printf("Eyes are closing.....\n");
        printf("Sle..........\n");
        printf("..........................");
        break;
    }
    case 1000:
    {
        *end = BAD_END;
        *running = 4;
        break;
    }
    }
}