#include <stdio.h>
#include <stdlib.h>

void teste_explique2(void);

int main(){
	teste_explique2();
	
	return 0;
}

void teste_explique2(void){
	char letter, *p;
	p=&letter;
	letter='A';
	printf("letter=%c, *p=%c\n", letter, *p);
	printf("letter=%p, *p=%p\n", &letter, &p);
	
}
