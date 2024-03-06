#include <stdio.h>//6
#include <stdlib.h>

int main(){
  
    char sexo;
    float peso, altura, pi;

    printf("Digite o seu sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("Digite a sua altura(METROS): ");
    scanf(" %f", &altura);

    if(sexo=='M' || sexo=='m'){
            pi = (72.7*altura)-58;
            printf("O seu peso ideal e: %0.2f\n", pi);

        }else if(sexo=='F'|| sexo =='f'){
            pi = (62.1*altura)-44.7;
            printf("O seu peso ideal e: %0.2f\n", pi);

        }                                

        return 0;
}