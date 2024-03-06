#include<stdio.h>
#include<stdlib.h>

int num = 10;	

int multiplica(int resultado);

int main(){
	int n1 = 20, j, r; 	
	printf("n1 equivale = %d\n", n1);
	
	r = multiplica(j);
	
	printf("o resultado = %d", r);
	
	return 0;	
}
static int multi = 5;
multiplica(int resultado)
{
	resultado = num * multi;
	return resultado;
}

