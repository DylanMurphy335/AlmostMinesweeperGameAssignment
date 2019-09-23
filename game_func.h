/*
Author: Dylan Murphy
*/
#ifndef GAME_FUNCTIONS_H_INCLUDED
#define GAME_FUNCTIONS_H_INCLUDED
#define GRID 4
#define BOMBNUM 2
#include <stdbool.h>

void printBoard(int bombArea[GRID][GRID], bool boardState[GRID][GRID]);
int updateState(int bombArea[GRID][GRID]);
int getInteger();
char getCharacter();
void getReply(int checkVal);
void checkBomb(int checkVal, int found);

#endif
