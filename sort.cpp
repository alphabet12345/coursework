#include <iostream>
#include <cstring>
#include <string>
#include <locale.h>

using namespace std;

int selection();
bool isLess(string a, string b);
void selectSort(string a[], int N);
int curNumb;


int main ()
 {
   char text[100];
   char temp;
   int const n = 100;
   setlocale (LC_ALL, "RUSSIAN");	
   FILE *f;
   f=fopen("stroka.txt","r");
   fgets(text,100,f);
   puts (text);
   selection(text);
   fclose(f);
   return 0;
 }
 
int selection (char text[]) 
 {
   char words[20][20];
   int wordsAmount = -1; 
   int curNumb;
   curNumb=0;
   int k, p, l, d;
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
		  words[wordsAmount][j] = text[i];
          i++;
          j++;
        }
      words[wordsAmount][j] = 0;
      i++;
    }
	selectSort(words,wordsAmount+1);
	for(int var = 0; var <= wordsAmount; var++) 
     {
       printf("%s\n",words[var]);
     }
	return 0;		
 }
     

bool isLess(char a[], char b[]) 
 {
   int aLen = strlen(a);
   int bLen = strlen(b);
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

void selectSort(char a[][20], int N) 
 {
   int k; 
   for(int i=0; i<N-1; ++i) 
    {
      k = i;
      for(int j=i+1; j<N; ++j) 
        {
          if (isLess(a[j],a[k])) k = j;
        }
      swap(a[i],a[k]);
     }    
   return;
 }  

