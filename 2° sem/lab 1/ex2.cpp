#include <stdio.h>
#include <stdlib.h>

int mystrlen (char s[]);
int nystrlen (char s[]);

int main(){
char *s, *ps;
int aux;
	ps = &*s;
	printf("manda: ");
	scanf("%s", s);
	//system ("PAUSE");
	aux=mystrlen(ps);
	printf (" numero de bangs %d", aux);
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
