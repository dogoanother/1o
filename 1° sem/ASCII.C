// ascii.c
// finds ascii code of a character
#include <stdio.h>          // for printf()
#include <conio.h>          // for getche()

int main(void)
   {
   char ch = 'a';           // ensure it's not '\r'

   while ( ch != '\r' )     // quit on '\r'
      {
      printf("\nType a character: ");
      ch=getche();
      printf("\nThe code for %c is %d.\n", ch, ch);
      }
      
   } 
