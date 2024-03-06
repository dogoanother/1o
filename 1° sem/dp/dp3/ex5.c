#include <stdio.h>
#include <stdlib.h>

int main(){
    float media, idd[25], w[25], h[25];
    char y[25], c[25];
    int i,  aux;

    printf("bem vindo, deixe-me anotar suas informacoes...");
    while (i<25){
    printf("\ndigite sua idade: ");
    scanf("%f", &idd[i]);
    printf("\ndigite seu peso:");
    scanf("%f", &w[i]);
    printf("\ndigite sua altura:");
    scanf("%f", &h[i]);
    printf("\ndigite a primira letra da cor de seus olhos");
    scanf("%s", &y[i]);
    printf("\ndigite a primira letra da cor de seu cabelo");
    scanf("%s", &c[i]);

    i++;}

    for(i=0;i<25;i++){
        if(idd[i]>49 && w[i]<60){
            media++;
        }
    }
    printf("\npessoas com mais de 50anos e menos de 60 kg: %.0f", media);
    media=0;

    for(i=0;i<25;i++){
        if(h[i]<1.5){
            media=media+idd[i];
            aux++;
        }
    }
        media=media/aux;
        printf("\nmedia de idade das pessoas com menos de 1,5m: %.0f", media);
        media=0;

    for(i=0;i<25;i++){
        if(y=='a'){
            media++;
        }
    }
    media=media/i;
    media=media * 100;
    printf("\na porcentagem de pessoas com olhos azuis: %.0f", media);
    media=0;

    for(i=0;i<25;i++){
        if(c=='r' && y=!'a'){
            media++;
        }
    }
    printf("\nquantidade de pessoas ruivas sem olhos azuis: %.0f", media);
    
    return 0;
}