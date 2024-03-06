#include<stdio.h>
#include<stdlib.h>

int main(){
    float coin, plus;

    printf("digite seu salario");
    scanf("%f", &coin);
    
    if(coin<=350){
        plus=100;
    }
    else if(coin<=600 && coin>350){
        plus=75;
    }
    else if(coin<=900 && coin>600){
        plus=50;
    }
    else {
        plus=35;
    }
    coin=coin*0.93;
    printf("seu salario final fica em: %.2f", coin+plus);

    return 0;
}