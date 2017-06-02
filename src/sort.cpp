#include <cstring>
#include <string>
#include <cstdio>
#include "unit.h"

int main ()
 {
    char text[8000];
    setlocale (LC_ALL, "RUSSIAN");
    FILE *f;
    f=fopen("stroka.txt","r");
    fgets(text,8000,f);
    puts (text);
    selection(text);
    fclose(f);
    return 0;
 }
