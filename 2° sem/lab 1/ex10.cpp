#include <stdlib.h>
#include <stdio.h>

void append(char *s1, char *s2);

int main(){
	char s1[]="abc", s2[]="def", *p1, *p2;
	p1= &*s1;
	p2= &*s2;
	
	append(p1, p2);
	
	printf("somados= %s", p1);
	return 0;
}

void append(char *s1, char *s2){
	while (*s1)
		s1++;
	while (*s1++=*s2++)
		;
}
