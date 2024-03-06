#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float nota;
	char conceit;
	
	printf("digite a nota: ");
	scanf ("%f", &nota);
	
	if(nota < 6){
		conceit='f';
	}
	else if (6 <= nota && nota <= 6.9){
		conceit='d';
	}
	else if (7 <= nota && nota <= 7.9){
		conceit='c';
	}
	else if (8 <= nota && nota<= 8.9){
		conceit='b';
	}
	else if (9 <= nota && nota <= 10){
		conceit='a';
	}
	else if ( nota > 10 ){
		conceit='x';
	}
	printf("seu conceito foi: %c", conceit);
	
	return 0;
}
