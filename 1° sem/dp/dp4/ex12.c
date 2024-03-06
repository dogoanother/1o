#include <stdio.h> //20
#include <stdlib.h>

int main(){
    char choice='y';
    int f, p;
    float salario, ms, mf, max, ate, aux;

    while(choice=='y'){
        printf("\ndigite o numero de filhos ");
        scanf("%d", &f);
        printf("digite o salario ");
        scanf("%f", &salario);
        p++;
        if (salario > max) max = salario;
        if (salario <= 350.0) ate++;
        mf=mf+f;
        ms=ms+salario;

        printf("\ndeseja continuar com mais informacao ? ( y, n )");
        scanf("%c", &choice);
        if(choice=='n'){
            break;
        }
    } 
    ms = ms / p;
    mf = mf / p;
    ate = (p/100) * ate;

  printf("\nmedia salarial %.2f\n", ms);
  printf("media de natalidade %.2f\n", mf);
  printf("maior salario e %.2f\n", max);
  printf("porcentagem de pessoas com salario maior que 350R$ : %.2f%%\n", ate);

  return 0;

}