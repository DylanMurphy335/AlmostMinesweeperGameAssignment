/*
Author: Dylan Murphy
*/
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "game_func.h"

int main() {
    int bombsDiscovered = 0;
    char col;
    int colInt = 100;
    int row = 100;
    int bombArea[GRID][GRID] ={0,0,0,0,
                               0,0,0,0,
                               0,0,0,0,
                               0,0,0,0};

    bool boardState[GRID][GRID] ={FALSE,FALSE,FALSE,FALSE,
                                  FALSE,FALSE,FALSE,FALSE,
                                  FALSE,FALSE,FALSE,FALSE,
                                  FALSE,FALSE,FALSE,FALSE};

    printBoard(bombArea, boardState);

    //generateBombs( always generates a bomb at 1C and 3B);
    for(int i = 0; i < BOMBNUM; i++) {
        int a = rand() % 4;
        int b = rand() % 4;
        bombArea[a][b] = 20;
    }
    //this sets the bombs location to be 0A and 1B to show the surrounding numbers are generated randomly.
    /*for(int i = 0; i < BOMBNUM; i++) {
        int a = i;
        int b = i;
        bombArea[a][b] = 20;
    }*/

    bombArea[GRID][GRID] = updateState(bombArea);

    // show bombs
    /*for(int i = 0; i <GRID; i++){
        for(int j = 0; j < GRID; j++ ){
            if(bombArea[i][j] == 20) {
                boardState[i][j] = true;
            }
        }
    }*/

    //show all that is not 0
    /*for(int i = 0; i <GRID; i++){
        for(int j = 0; j < GRID; j++ ){
            if(bombArea[i][j] != 0) {
                boardState[i][j] = true;
            }
        }
    }*/

    //show all
    /*for(int i = 0; i <GRID; i++){
        for(int j = 0; j < GRID; j++ ){
            boardState[i][j] = true;
        }
    }*/

    printf("\n\n");
    //printBoard(bombArea, boardState);

    //-----------------------------------------------//

    //phase 1
    for(int i = 0; i < 5; i++) {
        //small bug in this loop, then the above for loop is in its second loop onwards
        //it enters the else clause on the first loop in the while loop but on the second it reads it correctly.
        while (colInt == 100) {
            col = getCharacter();
            if (col == 'a' || col == 'A') {
                colInt = 0;
            } else if (col == 'b' || col == 'B') {
                colInt = 1;
            } else if (col == 'c' || col == 'C') {
                colInt = 2;
            } else if (col == 'd' || col == 'D') {
                colInt = 3;
            } else {
                printf("Invalid entry. Try again.\n");
            }
        }
        while (row == 100) {
            row = getInteger();
            if (row >= 0 && row <= 3) {
                break;
            } else {
                row = 100;
                printf("Invalid entry. Try again.\n");
            }
        }
        printf("\n\n");
        boardState[row][colInt] = true;
        getReply(bombArea[row][colInt]);
        printBoard(bombArea, boardState);
        row = 100;
        colInt = 100;
        printf("\n\n");
    }

    printf("\n\n\n----------Entering phase 2----------\n\n\n");
    //phase 2
    for (int guesses = 0; guesses < 2; guesses++) {
        //small bug in this loop it enters the else clause on the first loop in
        //the while loop but on the second it reads it correctly.
        while (colInt == 100) {
            col = getCharacter();
            if (col == 'a' || col == 'A') {
                colInt = 0;
            } else if (col == 'b' || col == 'B') {
                colInt = 1;
            } else if (col == 'c' || col == 'C') {
                colInt = 2;
            } else if (col == 'd' || col == 'D') {
                colInt = 3;
            } else {
                printf("Invalid entry. Try again.\n");
            }
        }
        while (row == 100) {
            row = getInteger();
            if (row >= 0 && row <= 3) {
                break;
            } else {
                row = 100;
                printf("Invalid entry. Try again.\n");
            }
        }
        printf("\n\n");
        boardState[row][colInt] = true;
        checkBomb(bombArea[row][colInt], bombsDiscovered);
        if (bombArea[row][colInt] >= 20) {
            bombsDiscovered += 1;
        }
        printBoard(bombArea, boardState);
        row = 100;
        colInt = 100;
        printf("\n\n");
        if (guesses == 2) {
            printf("Unfortunately you lost this game. Please feel free to play again!");
        }
    }



}
