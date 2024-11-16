/*
File name: Ending.c
Project name: BOXESCAPE
Authour : Primary - GyuYoung Park, Secondary - WonJu cho.
Copyright :
"All content © 2018 DigiPen (USA) Corporation, all rights reserved.”This c file give background music of this game."
*/

#include "Header.h"
#include "initmap.h"
#include "Printing.h"
#include "textcolor.h"

//A function that shows different ending dialogue depending on the exits.
void Ending(int x, int y)
{
    system("cls");
    if (y == END1)
    {
        PlaySound(TEXT("Plenty_Step.wav"), NULL, SND_ASYNC | SND_LOOP);
        printf("I escape at Here!\n\n");
        Wait(1500);
        printf("I can leave here! Yeah!\n\n");
        Wait(1500);
        printf("\nAfter that life, I changed my life. Do not experience this MAZE again, I do work.\n\n");
        Wait(1500);
        printf("But I don't know what is that. \n\nWhat's that?\n\n");
        Wait(1500);
    }
    else if (y == END2)
    {
        PlaySound(TEXT("Plenty_Step.wav"), NULL, SND_ASYNC | SND_LOOP);
        printf("There are big shine. What's that?\n\n");
        Wait(1500);
        printf("There are a person. MC? Guest?\n\n");
        Wait(1500);
        printf("Then, person who looks like MC.\n");
        Wait(1500);
        printf("CLEAR!!!! MR! You are the escaped person!\nYou have been a first person who escaped the BOX ES CAPE SHOW!!!\n\n");
        Wait(1500);
        printf("What? I can't understand. I rewalk my memory... Then I remembered one memory.\n\n");
        Wait(1500);
        printf("Some people said there are the TV show which put a person in the MAZE, and make that guy escape there.\n\n");
        Wait(1500);
        printf("That's a TV Show, I remembered.\n\n");
        Wait(1500);
        printf("MC said I had a price for escape there. Get Money. And asked to say \n\n");
        Wait(1500);
        printf("Thank you for Enjoying Box Es Cape\n\n");
        Wait(1500);
    }

    else if (y == END3)
    {
        PlaySound(TEXT("Fioj.wav"), NULL, SND_ASYNC | SND_LOOP);
        printf("Welcome back.\n\n");
        Wait(1500);
        printf("That's what I heard escape there.\n\n");
        Wait(1500);
        printf("How was that?\n\n");
        Wait(1500);
        printf("A guy who wear strange suit said to me.\n\n");
        Wait(1500);
        printf("Who are you?\n\n");
        Wait(1500);
        printf("I asked, and he said.\n\n");
        Wait(1500);
        printf("That's not important. How was that?\n\n");
        Wait(1500);
        printf("I Said Who You Are!\n");
        Wait(1500);
        printf("I tired! HURT! ANGRY! Who! You! ARE!\n\n");
        Wait(1500);
        printf("Okay. Hurt, Angry, Tired. Thank you very much.\n");
        Wait(1500);
        printf("AND, ByeBye.\n\n");
        Wait(1500);
        printf("A gas is come to me. I smelled. What is tha....\n\n");
        Wait(1500);
        printf("Let's continue do project Box es.....\n\n\n\n");
        system("cls");
        Wait(1500);
        printf("\n\n\n\nI woke up at on the my slept place. A normal day.\n\n");
        Wait(1500);
        printf("I think I slept a long time. What happened?\n\n");
        Wait(1500);
        printf("....");
        Wait(1500);
        printf(" I don't know.\n\n");
        Wait(1500);
    }
    else if (y == END4)
    {
        PlaySound(TEXT("Fioj.wav"), NULL, SND_ASYNC | SND_LOOP);
        printf("I escaped...! I'm free!\n\n");
        Wait(1500);
        printf("....What?\n\n");
        Wait(1500);
        printf("What... Why is there another room???\n\n");
        Wait(1500);
        printf("What have I done so far? Why isn't the room finished?\n\n");
        Wait(1500);
        printf(".....................\n\n");
        Wait(1500);
        printf("I don't know. It doesn't matter now. I gave up everything.\n\n");
        Wait(1500);
        printf("I don't have the will or the will to escape now.\n\n");
        Wait(1500);
        printf("I just think why this happened to me. Maybe until I die.\n\n");
        Wait(1500);
        printf("Why me..?\n\n");
        Wait(1500);
        printf("....I feel hungry and weak.\n\n");
        Wait(1500);
        printf("So tired..\n\n");
        Wait(1500);
        printf(".......................\n\n");
        Wait(1500);
        BLOOD
    }
    else if (y == BAD_END)
    {

        printf("The guy have been dead. Among the Boxes. He failed escaping here.\n\n");
        Wait(1500);
        printf("What a poor guy...\n\n");
        Wait(1500);
        printf(".");
        Wait(1000);
        printf(".");
        Wait(1000);
        printf(".\n\n");
        Wait(1500);
        BLOOD;
        printf("Why you didn't?\n\n");
        Wait(1500);
    }
    else if (y == END)
    {
        PlaySound(TEXT("A_Rising_Wave.wav"), NULL, SND_ASYNC | SND_LOOP);
        printf("A strange door. I run into there. \n\n");
        Wait(1500);
        printf("There are a person who see the screen.\n\n");
        Wait(1500);
        printf("That screens are familier to my eyes....\n\n");
        Wait(1500);
        printf("... That's the MAZE which I had been?\n\n");
        Wait(1500);
        printf("A person looks back. And find me. \n\n");
        Wait(1500);
        printf("Oh my... You came to me? That's not scenario...\n\n");
        Wait(1500);
        printf("What are that person said to me? scenario? What's that.\n\n");
        Wait(1500);
        printf("Okay. Delete this data. Let's start to do new data. \n\n");
        Wait(1500);
        printf("Person said that, And pushed a button.\n\n");
        Wait(1500);
        printf("Hey, what are you doing! Who you are! What is....\n\n");
        Wait(1500);
        printf("I fall down to the wall. My eyes become heavier.....\n\n");
        Wait(1500);
        printf("I heard just....\n\n");
        Wait(1500);
        printf("Game Project  Box Es Cape DATA  A-113, Ready for start......\n\n");
        Wait(1500);
        system("cls");
        Wait(1500);
        printf("\n\n\nI am a Road Man. Who lives on the road.\n\n");
        Wait(1500);
    }
    printf("Press Enter key...");
    getchar();
    system("cls");
}