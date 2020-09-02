#define row 5
#define col 5
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initboard(char board[row][col], int ow,int ol);
void displayboard(char board[row][col], int ow, int ol);
void playmove(char board[row][col], int ow, int ol);
void computermove(char board[row][col], int ow, int ol);
char iswin(char board[row][col], int ow, int ol);