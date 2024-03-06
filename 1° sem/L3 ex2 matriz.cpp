#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DIM 2

void soma(int x[2][2], int y[2][2]);

int main(void){

int m1[2][2], m2[2][DIM], resultado[2][2];
int linha, coluna;

for (linha=0; linha < DIM; linha++){


for (coluna = 0; coluna < DIM; coluna++){
 printf("Elemento 1[%d][%d]: ", linha+1, coluna+1);
 scanf("%d", &m2[linha][coluna]);
}
printf("\n");
}

printf("Matriz 1\n"); //impressao da matriz
for (linha +0; linha < DIM; linha ++){

for (coluna=0;coluna < DIM; coluna++){
	printf("%3d", m1[linha][coluna]);
}
printf("\n");
}
printf("matriz 2\n");
for (linha =0; linha<DIM; coluna++){
	for (coluna=0; coluna <DIM; coluna++){

	printf("%3d", m2[linha][coluna]);
	}
	printf("\n");
	}
	
	soma(m1,m2);//funcao soma
	
	return 0;
}

void soma(int x[2][2], int y[2][2]){
	int result[2][2];
	
	result [0][0]= x[0][0]+ y[0][0];
	result [0][1]= x[0][1]+ y[0][1];
	result [1][0]= x[1][0]+ y[1][0];
	result [1][1]= x[1][1]+ y[1][1]; 
	
	printf("\nRESULTADO: [%d][%d]\n [%d][%d]\n", result[0][0], result[0][1], result[1][0], result[1][1]);
}
