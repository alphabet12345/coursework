#include <iostream>
#include <cstring>
#include <string>
#include <locale.h>

using namespace std;

int selection();
bool isLess(string a, string b);
void selectSort(string a[], int N);
int curNumb;
char text[100];
char temp;
int const n = 100;

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
   int k, q ,c, o, p, l;
   int y[p];
   int d;
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
	selectSort(words,wordsAmount);
	for(int _i=0; _i<wordsAmount; _i++) 
     {
		cout << words[_i] << endl;
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

int swap(char a[], char b[]) 
 {
   int aLen = strlen(a);
   int bLen = strlen(b);
   int len = aLen;
   if (bLen > aLen) len = bLen;
    for(int i=0; i<=len; i++) 
     {
       char buf;
       buf = a[i];
       a[i] = b[i];
       b[i] = buf;
     }
   return 0;
 }

void selectSort(string a[], int N) 
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

