#include <stdio.h>

int main()
{
int a;              /* simple integer type                  */
long int b;         /* long integer type                    */
short int c;        /* short integer type                   */
unsigned int d;     /* unsigned integer type                */
char e;             /* character type                       */
float f;            /* floating point type                  */
double g;           /* double precision floating point      */

   a = 1023;
   b = 2222;
   c = 123;
   d = 1234;
   e = 'X';
   f = 3.14159;
   g = 3.1415926535898;

   printf("a = %d\n", a);      /* decimal output   (compatível)          */
   printf("a = %o\n", a);      /* octal output      (compatível)         */
   printf("a = %x\n", a);      /* hexadecimal output  (compatível)       */
   printf("b = %ld\n", b);     /* decimal long output (compatível)       */
   printf("c = %d\n", c);      /* decimal short output (compatível)      */
   printf("d = %u\n", d);      /* unsigned output     (compatível)       */
   printf("e = %c\n", e);      /* character output    (compatível)       */
   printf("f = %f\n", f);      /* floating output    (compatível, adiciona um 0 e fica com 6 termos depois da vírgula)        */
   printf("g = %f\n", g);      /* double float output (compatível)       */

   printf("\n");
   printf("a = %d\n", a);      /* simple int output  (compatível)        */
   printf("a = %7d\n", a);     /* use a field width of 7  (compatível)   */
   printf("a = %-7d\n", a);    /* left justify in field of 7 (compatível) */

   c = 5;
   d = 8;
   printf("a = %*d\n", c, a);  /* use a field width of 5  (compatível, C representa o número de colunas )   */
   printf("a = %*d\n", d, a);  /* use a field width of 8  (compatível) */

   printf("\n");
   printf("f = %f\n", f);      /* simple float output (compatível, adiciona um 0 e fica com 6 termos depois da vírgula)       */
   printf("f = %12f\n", f);    /* use field width of 12 (compatível, os termos coincidem)     */
   printf("f = %12.3f\n", f);  /* use 3 decimal places   (compatível)    */
   printf("f = %12.5f\n", f);  /* use 5 decimal places    (compatível)   */
   printf("f = %-12.5f\n", f); /* left justify in field   (compatível)   */

   return 0;
}



/* Result of execution

a = 1023
a = 1777
a = 3ff
b = 2222
c = 123
d = 1234
e = X
f = 3.141590
g = 3.141593

a = 1023
a =    1023
a = 1023
a =  1023
a =     1023

f = 3.141590
f =     3.141590
f =        3.142
f =      3.14159
f = 3.14159

*/
