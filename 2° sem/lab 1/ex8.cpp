#include <stdio.h>
#include <stdlib.h>

int mystrcmp(char s1[],char s2[]);

int main(){
	char s1[]="abc", s2[]="abd";
	char *p1, *p2;
	int aux=0;
	
	p1= &s1[80];
	p2= &s2[80];
	
	aux=mystrcmp(p1,p2);
	printf ("retorno= %d",aux);
	
	return 0;
}

int mystrcmp(char *s1,char *s2){
	int i=0;
	while (*s1==*s2)
		if(*s1=='\0')
		return (0);
	return(*s1-*s2);
}
