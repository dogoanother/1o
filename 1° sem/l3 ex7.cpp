#include <stdio.h>
#include <stdlib.h>

long int binary(long int v[], long int n, long int x); // Prototipo da funcao binary

int main(void) {

    // Declaracao das variaveis
    long int n = 100000, x;
    long int v[n], resultado;
    int i, j;

    for (i=0; i<n; i++) {
        v[i] = i+1;
    }

    x = n/3;
    resultado = binary(v, n, x); // Chamada da funcao binary

    if (resultado < 0) {
        printf ("PESQUISA NAO ENCONTRADA\n\n");
    } else {
        printf ("ELEMENTO A 1/3 DO INICIO: %ld \n", v[resultado]);
    }

    return 0;
}

long int binary(long int v[], long int n, long int x) { // Funcao binary

    long int j = 0;
    long int low = 0, high = n - 1, mid;

    while (low <= high) { // Busca binaria
        j = j + 1;
        mid = (high+low) / 2;

        if (x < v[(long int)mid]) {
            high = mid - 1;
        } else if (x > v[(long int)mid]) {
            low = mid + 1;
        } else {
            printf("COMPARACOES %ld \n\n", j);
            return(mid); // Retorno de mid
        }
    }

    return(-1); // Retorno de -1
}
