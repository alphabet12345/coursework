#include <cstring>
#include <string>
#include <cstdio>

#include "unit.h"

int main () {
    char text[1000];
    char temp;
    int const n = 1000;

    setlocale (LC_ALL, "RUSSIAN");
    FILE *f;
    f=fopen("stroka.txt","r");
    fgets(text,1000,f);
    puts (text);
    selection(text);
    fclose(f);
    return 0;
 }
