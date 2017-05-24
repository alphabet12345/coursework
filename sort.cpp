#include <iostream>
#include <string.h>
#include <locale.h>
#include <cstring>

using namespace std;

int selection();
int curNumb;
char text[100];

int main ()
 {
   setlocale (LC_ALL, "RUSSIAN");	
   FILE *f;
   f=fopen("stroka.txt","r");
   fgets(text,100,f);
   puts (text);
   selection();
   fclose(f);
   return 0;
 }

int selection ()
 {
   string words[20] = {""};
   int wordsAmount = -1;
   curNumb=0;
   int k, q , c, o, p, l;
   int d;
   int y[p];
   char slovo[13];
   char u[o];
   char temp;
   k=strlen(text);
   int i=0, j=0;
   while (i<k) 
    {
      j=0;
      wordsAmount++;
      while((text[i]!=' ')&&(text[i]!='\0')) 
	{
	  slovo[j]=text[i];
          words[wordsAmount] += text[i];
          i++;
          j++;
        }
      i++;
    } 
 }

bool isLess(string a, string b) 
 {
   int aLen = a.length();
   int bLen = b.length();
   int len = aLen;
   if (bLen < aLen) len = bLen;
    for(int i=0; i<len; i++) 
      {		
	if (a[i] < b[i]) 
          {			
    	    return 1;	
	  }
        if (a[i] > b[i]) 
          {			
	    return 0;	
          }
       }
	
   return 0;
 }

