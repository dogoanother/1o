#include <stdio.h>
#include <stdlib.h>

void print_string(char*string);

int main(){
	char string[80];
	
	printf ("manda : ");
	fgets (string,80,stdin);
	print_string(string);
	
	return 0;
}

void print_string(char*string){
	while(*string){
		putchar (*string++);}
}
