#include <stdio.h>
#include <stdlib.h>

int main(){
    float price, final;
    int aux, i;

while (aux<1){
    printf("digiter o valor do carro: ");
    scanf("%f", &price);

    printf("em quantas vezes sera o pagamento: ");
    scanf("%d", &i);
if (i==1){
    price=price*0.8;
}
    else{
    i=i/6;
    i=i*3;
    price=i*price;
    }
printf("o preco final do carro sera %f", price);

printf("digite algo diferente de 0 para finalizar");
scanf("%d", &aux);
}
    return 0;
}

