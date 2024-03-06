#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declaracao da matriz 4x4
    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {0, 0, 0, 0}, {-1, -2, -3, -4}};
    int i, j, l, tmp;

    printf("ANTES DA TROCA:\n\n"); // Impressao da matriz antes da troca
    for (j = 0; j < 4; j++) {
    
        for (l = 0; l < 4; l++){
            printf(" %d", matriz[j][l]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) { // Codigo para troca de linha 1 para linha 3

        tmp = matriz[0][i];
        matriz[0][i] = matriz[2][i];
        matriz[2][i] = tmp;
    }

    printf("\nDEPOIS DA TROCA:\n\n"); // Impressao da matriz depois da troca
    for (j = 0; j < 4; j++) {
    
        for (l = 0; l < 4; l++){
            printf(" %d", matriz[j][l]);
        }
        printf("\n");
    }

    return 0;
}

