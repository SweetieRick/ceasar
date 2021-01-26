#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

#define MAX 200

int main(void) 
{
   char string[MAX];

   cout << "Insert Phrase to encrypt" << endl;
   cin.getline(string,MAX);

   printf("Normalized string: %s\n", string);
   printf("Encrypted phrase: ");

   for (int i=0, len=strlen(string) ; i<len; i++) 
   {
      if ( (string[i]>='A' && string[i]<='W') || (string[i]>='a' && string[i]<='w') ) 
      {
         printf("%c", string[i] + 3);
      }
      else if (isalpha(string[i]))
      {
         printf("%c", string[i] - 23);
      }
      else 
      {
         printf("%c", string[i]);
      }
   }
   cout << endl;
   
   return 0;
}