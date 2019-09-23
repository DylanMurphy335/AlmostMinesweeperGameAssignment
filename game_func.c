/*
Author: Dylan Murphy
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_func.h"

void printBoard(int bombArea[GRID][GRID], bool boardState[GRID][GRID]){
    printf("   A B C D\n");
    for(int i = 0; i <GRID; i++){
        printf("%d: ", i);
        for(int j = 0; j < GRID; j++ ){
            if(boardState[i][j] == false) {
                printf("* ");
            } else {
                if(bombArea[i][j] == 20) {
                    printf("B ");
                } else {
                    printf("%d ", bombArea[i][j]);
                }
            }
        }
        printf("\n");
    }
}

int updateState(int bombArea[GRID][GRID]) {
    for(int i = 0; i <GRID; i++){
        for(int j = 0; j < GRID; j++ ){
            //Here I use greater than or equal to because if two bombs are within one block of each-other,
            //the first run through will set the second bomb to 21 as it starts at 20.

            //I could alternatively have if statements to check for if a point
            //is a bomb 'if(bombArea[i-1][j+1] == 20) {' and have a check for if
            //the point is less than 0 or more than 3 'if(i-1 < 0 || j+1 > 3) {'.
            //using 'bombArea[i-1][j+1]' as an example for above.
            if(bombArea[i][j] >= 20) {
                //check top left
                bombArea[i-1][j+1] += 1;
                //check left
                bombArea[i-1][j] += 1;
                //check bottom left
                bombArea[i-1][j-1] += 1;
                //check top
                bombArea[i][j+1] += 1;
                //check bottom
                bombArea[i][j-1] += 1;
                //check top right
                bombArea[i+1][j+1] += 1;
                //check right
                bombArea[i+1][j] += 1;
                //check bottom right
                bombArea[i+1][j-1] += 1;
            }
        }
    }
    return bombArea;
}

int getInteger() {
    int row;
    printf("\nEnter number: ");
    scanf("%d", &row);
    return row;
}

char getCharacter() {
    printf("Enter character: ");
    char letter = getchar();
    bool isChar = false;
    char extraChar = ' ';
    while (isChar == false) {
        extraChar = getchar();
        if (extraChar == '\n') {
            isChar = true;
        }
    }
    return letter;
}

void getReply(int checkVal) {
    if (checkVal == 0) {
        printf("Missed it this time.\n\n");
    } else if(checkVal >= 20) {
        //Unsure if this was supposed to lose and exit if a bomb was found in phase 1.
        //So i have both just in case and in the case it is not supposed to exit and it is to
        //congratulate you then that code is there and the exit and print statement would then be deleted.

        //printf("Thats a bomb! congrats you found 1.\n\n");
        printf("Thats a bomb! You lose!.\n\n");
        exit(0);
    } else {
        printf("you are very close! %d bomb[s] near this point!\n\n", checkVal);
    }
}

void checkBomb(int checkVal, int found) {
    if (checkVal == 0) {
        printf("Missed it.\n\n");
    } else if(checkVal >= 20 && found == 1) {
        printf("Thats a bomb! Congrats you won the game.\n\n");
        exit(0);
    } else if(checkVal >= 20) {
        printf("Thats a bomb! congrats you found 1.\n\n");
    } else {
        printf("you were very close! %d bomb[s] near this point!\n\n", checkVal);
    }
}
