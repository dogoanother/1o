#include <stdio.h>
#include <stdlib.h>

int main (){
int i;
float din[4], pg[15];
char cod[15];

    for(i=0; i<15; i++){
    printf("\ndigite o valor ");
    scanf("%f", &pg[i]);
    printf("\ndigite a forma de pagamento. v ou p:");
    scanf("%s", &cod[i]);
    }

    for(i=0;i<15;i++){
        if (cod[i]=='v'){
            din[1]=din[1]+pg[i];
        }
        else if(cod[i]=='p'){
            din[2]=din[2]+pg[i];
        }
    din[3]=din[3]+pg[i];
    }
    
    printf("\nvalor das compras a vista: %.2f", din[1]);
    printf("\nvalor das compras a prazo: %.2f", din[2]);
    printf("\nvalor total das compras: %.2f", din[3]);
    
    for(i=0;i<15;i++){
    if(cod[i]=='v'){
        pg[i]=(pg[i]/3);
        printf("\na primeira parcela do produto %d tera o preco de %.2f", i, pg[i]);
    }
    }

    return 0;
}