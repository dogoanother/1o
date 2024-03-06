#include <stdio.h>
#include <stdlib.h>

void teste_explique(void);

int main(){
	
	teste_explique();
	
	return 0;
}

void teste_explique(void){
	char letter, character, *p, *q;
	p=&letter;
	letter='A';
	printf("letter=%c,*p=%c\n", letter, *p);
	*p='B';
	printf("letter=%c,*p=%c\n", letter, *p);
	q=p;
	p=&character;
	*p='Z';
	printf("letter=%c,*p=%c\n", letter, *p);
	printf("*q=%c,character=%c\n", *q, character);
}
