#include <stdio.h>
#include <stdlib.h>

int mystrcmp(char s1[],char s2[]);

int main(){
	char s1[]="taf", s2[]="ata";
	int aux=0;
	
	aux=mystrcmp(s1,s2);
	printf ("retorno= %d",aux);
	
	return 0;
}

int mystrcmp(char s1[],char s2[]){
	int i=0;
	while (s1[i]==s2[i])
		if(s1[i++]=='\0')
		return (0);
	return(s1[i]-s2[i]);
}
