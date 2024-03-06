#include <stdio.h> //8
#include <stdlib.h>

int main(){
    int i, k;
    float x, aux;

    printf("digite o valor de x! ");
    scanf("%f", &x);

    k=x;
    aux=x;
    for(i=1;i<k;i++){
    aux--;
    x=x*aux;
    }
    printf("o valor do fatorial vale %.2f", x);
}