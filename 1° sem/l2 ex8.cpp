#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float a, b, c; 
	
	printf("Digite o numero de degraus de uma escada que pode ser subida utilizando 1 ou 2 passos.\n");
	scanf("%f", &a); 
	
 	for(b=a; b>=1; b--) 
	{
		c= c+b/2;
	}
	printf("%.0f maneiras de subir a escada de forma nao recursiva.\n", c); 
		
system("pause");
return 0;
}

