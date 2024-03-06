#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
	int i, cara=0, coroa=0;
	srand(time(NULL));
	printf ("gerar numeros aleatorios\n");
	
	for (i=0; i<10; i++){
		printf ("%5d", rand() %2);
	/*	if (rand()=0){
			coroa++;
		}else cara++;
*/	}
	printf("\nnumero de caras:%d", cara);
	printf("\nnumero de coroas:%d", coroa);
	
	getch();
	return 0;
}
