#include <stdio.h>
#include <stdlib.h>
#define TAM 2

double produto_escalar(double a[], double b[], int resultado); //prototipo da funcao

int main(){
	
	double a[TAM], b[TAM];//declaracao de variaveis
	int result;
	
	printf("\n INSIRA OS VETORES DE A\n");
	scanf("%lf %lf", &a[0], &a[1]);
	
	printf("\n INSIRA OS VETORES DE B\n");
	scanf("%lf %lf", &b[0], &b[1]);
	
	printf("\n%lf", produto_escalar(a, b, result)); //funcao do produto escalar
	
	return 0;
}
double produto_escalar(double x[], double y[], int resultado){  //funcao do produto
	
	double z[TAM];
	
	z[0]=x[0]*y[0];
	z[1]=x[1]*y[1];
	
	resultado=z[0]+z[1];
	
	return(resultado);//resposta final 
}
