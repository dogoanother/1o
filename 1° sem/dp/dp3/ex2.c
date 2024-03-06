#include <stdio.h>
#include <stdlib.h>

float crescente(float, float, float);
float decrescente(float, float, float);

float main(){
    float a, b, c;
    int i , aux;

    while(i<=5){
        printf("\n\ndigite 3 valores");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        //printf("os valores sao\n %f\n %f\n %f\n", a, b, c);
        printf("a ordem crescente: \n");
        crescente(a, b, c);
        printf("a ordem decrescente: \n");
        decrescente(a, b, c);
        i++;
    }
    return 0;
}

float crescente(float a, float b, float c){
if (a<b && a<c){
    printf("%f\n", a);
    if(b<c){
        printf("%f\n%f\n", b, c);
    }
    else{
        printf("%f\n%f\n", c, b);
    }
}
else if (b<a && b<c){
    printf("%f\n", b);
    if(a<c){
        printf("%f\n%f\n", a, c);
    }
    else{
        printf("%f\n%f\n", c, a);
    }
}
else if (c<a && c<b){
    printf("%f\n", c);
     if(a<b){
        printf("%f\n%f\n", a, b);
    }
    else{
        printf("%f\n%f\n", b, a);
    }
}
return 0;
}

float decrescente(float a, float b, float c){
if (a>b && a>c){
    printf("%f\n", a);
    if(b>c){
        printf("%f\n%f\n", b, c);
    }
    else{
        printf("%f\n%f\n", c, b);
    }
}
else if (b>a && b>c){
    printf("%f\n", b);
    if(a>c){
        printf("%f\n%f\n", a, c);
    }
    else{
        printf("%f\n%f\n", c, a);
    }
}
else if (c>a && c>b){
    printf("%f\n", c);
     if(a>b){
        printf("%f\n%f\n", a, b);
    }
    else{
        printf("%f\n%f\n", b, a);
    }
}

return 0;
}