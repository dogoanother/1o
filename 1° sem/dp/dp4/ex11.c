#include <stdio.h> //15
#include <stdlib.h>

int *v;

int main (){
int cont, i, v[15];

printf("digite os valores do seu vetor");

for (i=0; i<15; i++){
    scanf("\n%d", &v[i]);
    if(v[i]%2==0)
        cont++;
}
printf("\no seu vetor contem %d pares", cont);

return 0;
}