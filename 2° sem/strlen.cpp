#include <stdio.h>
#include <stdlib.h>


main(){
float tempo[2];
int aux;
float media, melhor;

	for (aux=0;aux<=2;aux++){
		printf ("tempo da volta ");
		scanf("%f", &tempo[aux]);	
	}
	printf ("tempo das voltas: ");
	
	for (aux=0;aux<=2;aux++){
		printf ("%-10.2f",tempo[aux]);
	}
	
	for (aux=0;aux<=2;aux++){
	media=tempo[aux]+media;
	}
	media=media/3;
	
	printf ("\no tempo medio da voltas foi: %.2f", media);
	
	for (aux=0; aux<=2;aux++){
		if (aux==0){
			melhor=tempo[aux];
		}
		if (tempo[aux]<melhor){
			tempo[aux]=melhor;
		}	
	}
		printf("\no tempo mais rapido foi %.2f", melhor);

	return 0;
}
