#include<stdio.h>
#include<stdlib.h>

int main(){
    float coin;
    int aux;

    printf("digite o valor investido ");
    scanf("%f", &coin);
    printf("agr escolha o tipo de investimento\n1 para pupanca\n2 para fundos de renda\n");
    scanf("%d", &aux);

    switch(aux){
        case 1:
            coin= coin*1.03;
            printf("\nseu dinheiro esta rendendo 3/100 esse mes\n");
            break;
        case 2:
            coin=coin*1.04;
            printf("\nseu dinheiro esta rendendo 4/100 esse mes\n");
            break;
    }
    printf("\nseu dinheiro sera %.2f proximo mes", coin);

}