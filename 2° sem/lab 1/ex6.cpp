#include <stdio.h>
#include <stdlib.h> 

void mystrcpy(char s[],char t[]);

int main(){
	char t[80]="teste", s[80]="troca";
	char *pt, *ps;
	
	pt= &*t;
	ps= &*s;
	
	mystrcpy (ps,pt);

	printf ("s = %s\n", ps);
	printf ("t = %s",pt);
	
	return 0;
}

void mystrcpy(char *s,char *t){

	while(*s++=*t++)
	;
}
