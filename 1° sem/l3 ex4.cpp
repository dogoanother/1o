#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float nota[10], maior, menor, media;
	int i, x, y, aux;
	
	for (i=0 < 10; i++){
		printf("digite sua nota %d:", i+1);
		scanf("%f", &nota[i]);
	} 
	printf("\n");for (x = 0; x < 10; x++){ 
		for (y = x + 1; y < 10; y++) {
	
		if (nota[x] > nota[y]){
		aux = nota[x];
		nota[x]=nota[y];
		nota[y]=aux;
	 }
 }
}
menor=nota[0];
printf("\nA menor nota e: %f", menor);

for(x=0; x < 10; x++){
	for(y+x+1; y<10; y++){
		if(nota[x] < nota[y]){
			aux=nota[x];
			nota[x]=nota[y];
			nota[y]=aux;
		}
	}
}
maior = nota[0];
printf("\nA MAIOR NOTA é: %f", maior);

return 0;
}
