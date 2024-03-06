#include <stdio.h>
                             /* Chapter 4 - Program 1 - INTASIGN.C */
/* This program will illustrate the assignment statements          */

int main()
{
int a, b, c;    /* Integer variables for examples */

   a = 12;
   b = 3;
   c = a + b;          /* simple addition                */
   printf ("soma: %d\n", c);
   c = a - b;          /* simple subtraction             */
   printf ("subtração: %d\n", c);
   c = a * b;          /* simple multiplication          */
   printf ("multiplicação %d\n", c);
   c = a / b;          /* simple division                */
   printf ("divisão %d\n", c);
   c = a % b;          /* simple modulo (remainder)      */
   printf ("porcentagem %d\n", c);
   c = 12*a + b/2 - a*b*2/(a*c + b*2);
   printf ("operacao %d\n", c);
   c = c/4+13*(a + b)/3 - a*b + 2*a*a;
   printf ("operacao %d\n", c);
   a = a + 1;          /* incrementing a variable        */
   printf ("soma %d\n", a);
   b = b * 5;
   printf ("multiplicação %d\n", b);
   a = b = c = 20;     /* multiple assignment            */
   printf ("igualdade %d\n", c);
   a = b = c = a + b * c/ 3;
   printf ("operacao %d\n", a, b, c);
   a = (b = (c = 20)); /* Identical to line 22           */
   printf ("igualdade %d\n", a,b, c);
   return 0;
}



/* Result of execution

(No output from this program.)

*/
