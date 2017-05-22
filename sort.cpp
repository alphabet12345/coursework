#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

int selection();
char text[100];

int selection ()
 {
   curNumb=0;
   int k, q ,c;
   int d;
   char slovo[13];
   k=strlen(text);
   int i=0, j=0;
   while (i<k) 
	{
      j=0;
      while((text[i]!=' ')&&(text[i]!='\0')) 
		{
		  slovo[j]=text[i];
          i++;
          j++;
        }
      i++;
      slovo[j]='\0';
	  puts(slovo);
	 
	  d=strlen(slovo); 
	}
 }

