#include <stdio.h>
#include <stdlib.h>
int main()
{

int i; /* simple integer type */
char c; /* character type */
double d; /* floating point type */
int a; 

a= -123;
c= 'A';
d=3.1415926535898;

printf("a: decimal: %d\n", a);  /*resultado em decimal normal*/
printf("a: hexadecimal: %x\n", a); /*resultado ffffff85*/
printf("a: unsigned: %u\n", a); /*resultado 4294967173*/
printf("a: character: %c\n", a); /*resultado em letra:à*/
printf("a: float: %f\n", (float)a); /*resultado apresentou virgula no resultado*/
printf("a: double %9lf\n", (float)a); /*resultado apresentou virgula no resultado*/

printf("c: decimal: %d\n", c); /*resultado em decimal:65*/
printf("c: hexadecimal: %x\n", c);/*resultado exadecimal:41*/
printf("c: unsigned: %u\n", c); /* resultado decimal sem sinal*/
printf("c: character: %c\n", c); /*caracter A*/
printf("c: float: %f\n", (float)c); /*valor apresentou virgula: 65.000*/
printf("c: double %9lf\n", (float)c);/*valor apresentou virgula*/

printf("d: decimal: %d\n", d);/*valor apresentou somente numeros dentro da virgula*/
printf("d: hexadecimal: %x\n", d);/*valor apresentou 54442d28 */
printf("d: unsigned: %u\n", d); /*valor decimal sem sinal*/
printf("d: character: %c\n", d); /*valor apresentou resultado: (*/
printf("d: float: %.6f\n",(float)d);/*valor apresentou 6 */
printf("d: double %.9lf\n", d);/*valor apresentor 9 */

return 0;
}
