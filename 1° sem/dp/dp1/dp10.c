#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, c, aux=1;
    printf("Digite o preco do produto.\n");
    scanf("%d", &p);
    while(aux==1){
    printf("Digite o codigo de origem.\nna duvida digite 0 para ajuda.\n");
    scanf("%d", &c);
    if(c==0){
        printf("1 para sul\n2 para norte\n3 para leste\n4 para oeste\n5 e 6 para nordeste\n7 a 9 para sudeste\n10 a 20 para centro-oeste\n21 a 30 para nordeste\n");
        scanf("%d", &c);
    }
    aux=0;
    switch(c){
        case 1:
        printf("Procedencia = SUL");
        break;
        case 2:
        printf("procedencia = norte");
        break;
        case 3:
        printf("procedencia=leste");
        break;
        case 4:
        printf("procedencia=oeste");
        break;
        case 5:
        printf("procedencia=nordeste");
        break;
        case 6:
        printf("procedencia=nordeste");
        break;
        default:
        if(c>6 && c<10){
            printf("procedencia=sudeste");
        }
        else if(c>9 && c<21){
            printf("procedencia=centro-oeste");
        }
        else if(c>20 && c<31){
            printf("procedencia=nordeste");
        }
        else{
            printf("codigo invalido");
        aux=1;
        }
        break;                                                                                                                                                                                                          
    }
    }
    return 0; 
}