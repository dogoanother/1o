//Capítulo 4 / Seção Exercícios Propostos (pg.124): 2, 4, 8, 11, 14, 19, 26.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n1;
    float s;
    printf("escreva um valor possitivo: ");
    scanf("%d", &n1);
    if(n1>0){
        s=0;
        for (i=1;i<=n1;i++){
            s= s + (1./i);
        }

    printf("resultado= %f", s);
    }

    else{
        printf("valor possitivo bro\n");
    }
    return 0;
}