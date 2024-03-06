#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, media;
    
    printf ("media aritimetica\n Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\ndigite a segunda nota: ");
    scanf("%f", &n2);
    media=n1+n2;
    media=media/2;

    if( 7 <= media && media <= 10){
        printf ("\naprovado");
    }
    else if(4 <= media  && media < 7){
        printf ("\nexame");
    }
    else if( 0 <= media && media < 4){
        printf("\nreprovado");
    }
    else if(0 > media > 10){
        printf("\nvalor invalido");
    }
    return 0;
}