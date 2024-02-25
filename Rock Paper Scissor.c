/*
DATE: 10 Feb 2024
Idea: A simple Rock, Paper, Scissor game with no bug, no bad inputs
Author: smizxe aka. Vuong Hoang Giang
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Variable Declaration
int input;
int opponent;
char charcheck;
int isValidInput;

int rock = 1;
int paper = 2;
int scissor = 3; 

//User Input Function
int getUserInput () {
    do {
        printf("Please choose your option: ");
        scanf("%d",&input);
        if (input <= 4 && input > 0) {
            isValidInput = 1;
        } else {
            while (getchar() != '\n') {}
            printf("INVALID CHOICE!\n");
            isValidInput = 0;

        }
    } while (isValidInput == 0);
    return input;
}

//1. CPU Rock Situation
void cpuRock (int input) {
    printf("CPU chose ROCK\n");
    if (input == 1) {
        printf("TIED!");
    } else if (input == 2) {
        printf("YOU WIN!");
    } else if (input == 3) {
        printf("YOU LOSE!");
    } else {
        printf("INVALID CHOICE!");
    }
}

//2. CPU Paper Situation
void cpuPaper (int input) {
    printf("CPU chose PAPER\n");
    if (input == 1) {
        printf("YOU LOSE!");
    } else if (input == 2) {
        printf("TIED!");
    } else if (input == 3) {
        printf("YOU WIN!");
    } else {
        printf("INVALID CHOICE!");
    }
}

//3. CPU Scissor Situation
void cpuScissor (int input) {
    printf("CPU chose SCISSOR\n");
    if (input == 1) {
        printf("YOU WIN!");
    } else if (input == 2) {
        printf("YOU LOSE!");
    } else if (input == 3) {
        printf("TIED!");
    } else {
        printf("INVALID CHOICE!");
    }
}
int main() 
{
    do {
        //User Input
        printf("=\n1: Rock\n");
        printf("2: Paper\n");
        printf("3: Scissor\n");
        printf("4: Exit\n");
        getUserInput();
        
        if (input == 4) {
        printf("Exiting...");
        return 0;
        } 

        //CPU Answer
        srand(time(NULL));
        opponent = rand() % 3 + 1;
        


        

        //Result
        switch (opponent)
        {
            case 1:
                cpuRock(input);
                break;

            case 2:
                cpuPaper(input);
                break;
            
            case 3:
                cpuScissor(input);
                break;
            
            default:
                printf("INVALID INPUT!!\n");
                while (getchar() != '\n') {}
                break;
        }
    } while (input != 4);
return 0;
}
