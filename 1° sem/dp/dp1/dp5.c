#include <stdio.h>
#include<stdlib.h>

int main(){
    float coin;

    printf("digite seu salario: ");
    scanf("%f", &coin);

    if(coin<=300){
        coin=coin*1.35;
    }
    else if(coin>300){
        coin=coin*1.15;
    }
    printf("\nseu salario com reajuste sera: %.2f", coin);

}