#include <stdio.h> //4
#include <stdlib.h>

int main(){
    float r, i, v;

    printf("digite o raio de sua esfera: ");
    scanf("%f", &r);

    i=r*r*r;

    v=(4/3)*3.14*i;

    printf("o volume da sua esfera e' %.1f", v);
    
    return 0;
}