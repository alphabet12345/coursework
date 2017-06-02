#ifndef UNIT
#define UNIT

#include <string.h>
#include <stdio.h>

int selection(char text[]);
int isLess(char a[], char b[]);
int isMore(char a[], char b[]);
int selectSort(char a[][100], int N);
int swap(char a[], char b[]);

#endif
