#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, aux;
    int choice;

    printf("teus numbers bro: ");
    scanf("%f", &n1 );
    scanf("%f", &n2);

    printf("chose your way: \n\n 1 para media entre os numeros\n 2 paradeferenca do maior para menor\n 3 para o produto entre eles\n");
    scanf("%d", &choice);

    switch(choice){
        case 1: 
        aux=(n1-n2)/2;
        break;
        case 2:
        if(n1>n2){
            aux=n1-n2;}
        else{
            aux=n2-n1;}
            break;
        case 3:
            aux=n1-n2;
            break;
    }
    printf("resultado da sua operacao e %.2f", aux);
}