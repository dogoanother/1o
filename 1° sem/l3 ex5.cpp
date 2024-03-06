#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 11

int somaVet(int *, int); // Prototipo da funcao somaVet

int main(void) {

    // Declaracao das variaveis
    int vetor[SIZE] = {0};
    int tmp;

    printf("== VETOR COM %d POSICOES ==\n\n", SIZE-1);
    for (tmp = 1; tmp < SIZE; tmp++) { // Funcao for para escaneamento dos vetores
    
        printf("\nINSIRA O VALOR DO VETOR %d: ", tmp);
        scanf("%d", &vetor[tmp]);

        printf("O VETOR %d E: %d\n", tmp, vetor[tmp]);
        
    }

    printf("\n\nSOMA DOS VETORES: %d\n\n", somaVet(vetor, SIZE)); // Chamada da funcao somaVet

    return 0;
}

int somaVet(int vetor[], int tamanho) { // Inicio da funcao somaVet

    int tmp = 0;
    int soma = 0;

    // Soma dos vetores
    for (tmp = 0; tmp < tamanho; tmp++) {
        soma += vetor[tmp];
    }
    return soma; // Retorno da soma

}

