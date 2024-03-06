#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Prototipo da funcao produto_matrizes
void produto_matrizes(int x[2][2], int[2][2]);

int main(void) {

  // Declaracao das variaveis
  int a[2][2], b[2][2];

  // Escaneamento da matriz a
  printf("PARA O VETOR A: \n");
  scanf("\n  %d", &a[0][0]);
  scanf("\n  %d", &a[0][1]);
  scanf("\n  %d", &a[1][0]);
  scanf("\n  %d", &a[1][1]);

  // Escaneamento da matriz b
  printf("\nPARA O VETOR B: \n");
  scanf("\n  %d", &b[0][0]);
  scanf("\n  %d", &b[0][1]);
  scanf("\n  %d", &b[1][0]);
  scanf("\n  %d", &b[1][1]);

  // Impressao das matrizes a e b
  printf("\n\nA MATRIZ A E: \n");
  printf("\n[%d][%d]\n[%d][%d]", a[0][0], a[0][1], a[1][0], a[1][1]);
  printf("\n\nA MATRIZ B E: \n");
  printf("\n[%d][%d]\n[%d][%d]", b[0][0], b[0][1], b[1][0], b[1][1]);

  printf("\n\nO PRODUTO DAS MATRIZES E: \n");
  produto_matrizes(a, b); // Chamada da funcao produto_matrizes

  return 0;
}

void produto_matrizes(int x[2][2], int y[2][2]) { // Inicio da funcao produto_matrizes

  int z[2][2];

  z[0][0] = (x[0][0]*y[0][0]) + ((x[0][1]*y[1][0]));
  z[0][1] = (x[0][0]*y[0][1]) + ((x[0][1]*y[1][1]));
  z[1][0] = (x[1][0]*y[0][0]) + ((x[1][1]*y[1][0]));
  z[1][1] = (x[1][0]*y[0][1]) + ((x[1][1]*y[1][1]));

  // Impressao do produto das matrizes
  printf("\n[%d][%d]\n[%d][%d]", z[0][0], z[0][1], z[1][0], z[1][1]);

}

