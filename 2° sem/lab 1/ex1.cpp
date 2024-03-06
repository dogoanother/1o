#include <stdlib.h>
#include <stdio.h>

int mystrlen (char s[]);
int nystrlen (char s[]);

int main(){
	char *s;
	int aux;
	s="ponts";
	aux=mystrlen(s);
	printf("number de letras %d", aux);
	/*printf("bota: ");
	scanf ("%s", &s);
	aux=mystrlen(s);
	printf("vc botou %d letras", aux);*/
	return 0;
}

int nystrlen(char s[]){
	int i;
	i=0;
	
	for (i=0;s[i]!='\0';i++){
		i++;
		return (i);
	}
}
int mystrlen(char s[]){
	int i;
	i=0;
	
	while (s[i]!='\0'){
		i++;
	}
	
	return (i);
}


