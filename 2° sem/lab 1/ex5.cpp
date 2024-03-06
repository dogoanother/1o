0#include <stdio.h>
#include <stdlib.h> 

void mystrcpy(char s[],char t[]);

int main(){
	char t[80]="teste", s[80]="troca";
	int aux;
	
	mystrcpy (s,t);

	printf ("s = %s\n", s);
	printf ("t = %s",t);
	
	return 0;
}

void mystrcpy(char s[],char t[]){
	int i=0;
	while((s[i]=t[i])!='\0')
	i++;
}
