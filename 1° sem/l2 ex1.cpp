#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // para fazer com que os números não se repitam.
  srand(time(NULL));

  // definição das variáveis.
  int cara=0, coroa=0, numero_total_de_lancamentos=0, i, lancamento;

  // for para contagem de 1 a 10000.
  for (i = 0; i < 10000; i++) {

    // fórmula para gerar 0 ou 1.
    lancamento = rand()%2;

    // contagem total dos lançamentos.
    numero_total_de_lancamentos++;

    // definição de cara ou coroa.
    if (lancamento==0) {
      cara++;
    } else coroa++;

    /* uso do switch case para impressão do número total de lançamentos, para
       os casos de 1, 10, 20, 50, 100, 1000 e 10000 lançamentos.              */
    switch (numero_total_de_lancamentos) {
      case 1:
        printf("1 Lancamento = %d cara e %d coroa.\n", cara, coroa);
        break;
      case 10:
        printf("10 Lancamentos = %d caras e %d coroas.\n", cara, coroa);
        break;
      case 20:
        printf("20 Lancamentos = %d caras e %d coroas.\n", cara, coroa);
        break;
      case 50:
        printf("50 Lancamentos = %d cara e %d coroa.\n", cara, coroa);
        break;
      case 100:
        printf("100 Lancamentos = %d cara e %d coroa.\n", cara, coroa);
        break;
      case 1000:
        printf("1000 Lancamentos = %d cara e %d coroa.\n", cara, coroa);
        break;
      case 10000:
        printf("10000 Lancamentos = %d cara e %d coroa.\n", cara, coroa);
        break;
    }
  }

  system("pause");
  return 0;
}

