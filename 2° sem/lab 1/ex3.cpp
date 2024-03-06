#include <stdio.h>
#include <stdlib.h>

int mystrlen (char s[]);
int nystrlen (char s[]);

int main(){
char *s="douglas", *ps;
int aux;
	ps = &*s;
	aux=mystrlen(ps);
	printf (" numero de caracteres %d", aux);
	return 0;
}


int mystrlen(char s[]){
	int n;
	
	for (n=0;*s;s++)
		n++;

	return (n);
}
