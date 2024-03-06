#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x, m , k, media, final;
    m=0.5;
    k=2;

//    printf("digite o valor desejado para x");//usuario escolhe um valor
//    scanf("%lf", &x);

//    media=2*(k-sin(x));

    x=m/k; //formula adaptada para descobrir x
    media=sin(x); //descobrer o seno de x e passa para a variavel media 

    final=pow(media, 2); //tira a raiz da media 

    printf("%f", final); //imprime o resultado final 

    return 0;
}