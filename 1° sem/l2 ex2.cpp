#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcula_raiz(double Num){
  double novoChute, ultimoChute;
  int tentativa;

  ultimoChute = 1.0;

  for(tentativa = 1; tentativa; tentativa++){

    novoChute = (0.5 * (ultimoChute + Num / ultimoChute));

    ultimoChute = novoChute;

    if(floor(novoChute*100000) != floor(sqrt(Num)*100000)){
      printf("Falha na tentativa n%d: %.5lf\n", tentativa, ultimoChute);

    } else{
      printf("\nSucesso na tentativa n%d: %.5lf\n\n", tentativa, ultimoChute);
      break;
    }
  }

  return ultimoChute;

}

int main(){
  double Num;

  printf("Insira um valor: ");
  scanf("%lf", &Num);
  printf("\n");

  calcula_raiz(Num);

  printf("Resultado validado por sqrt(): %.5lf\n", sqrt(Num));

  return 0;

}

