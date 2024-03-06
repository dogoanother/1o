#include <stdio.h>
#include <stdlib.h>

int main(){
    float x;
    int i, aux;
    printf("digite o numero a ser fatorado: ");
    scanf("%f", &x);
    aux=x;
    for(i=1;i<aux;i++){
    x=x*aux;
    }
    printf("resultado: %.2f", x);
}