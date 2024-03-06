#include <stdio.h>
#include <stdlib.h>

float potencia(float fato,float  exp){
    float aux, i;
    aux=fato;

    for (i=1;i<exp; i++){
        fato=fato*aux;
    }
    printf ("%f\n", fato);
    return (fato);    
}

float fatorial(float x){
    int i, aux;
    aux=x;
    for(i=1;i<aux;i++){
    x=x*aux;
    }
    return(x);
}

float exp_dir(float x, int n){
    float n1, n2, n3, n4, n5, n6, n7, n8, e;
    n1=potencia(x, n);
    n2=potencia(-1, n);
    n3=potencia(x, 2);
    n4=potencia(x, 3);
    n6=fatorial(2);
    n7=fatorial(3);
    n8=fatorial(n);
    e=1-x+(n3/n6)-(n4/n7)+n1*(n2/n8);
    n5=potencia(e, -(x));
    return (n3);
}
float exp_spsn(float x,int n){
    float n1, n2, n3, n4, n5, n6, sp, sn, soma;

    n1=potencia(x , 2);
    n2=fatorial(2);
    n3=potencia(x, 4);
    n4=fatorial(4);
    n5=potencia(x, 3);
    n6=fatorial(3);

    sp=1+(n1/n2)+(n3/n4);
    sn=x+(n5/n6);

    soma=sp-sn;
    return (soma);
}
float exp_inv(float x, int n){
    float n1, n2, n3, n4, n5, e;

    n2=potencia(x, 2);
    n3=fatorial(2);
    n4=potencia(x, 3);
    n5=fatorial(3);
    n1=potencia(e, +(x));

    e=1+x+(n2/n3)+(n4/n5);

    
    return (e);
}
double exp_invD(double x, int n){
    float n1, n2, n3, n4, n5, e;

    n2=potencia(x, 2);
    n3=fatorial(2);
    n4=potencia(x, 3);
    n5=fatorial(3);
    n1=potencia(e, -5);

    e=1+x+(n2/n3)+(n4/n5);

   
    return (e);
}

float main(){
    float i, aux, fato, exp;
    float p, n1, n2, n3;
    long double n4;
    
    printf("manda o number");
    scanf("%f", &fato);
    printf("expoente bro");
    scanf("%f", &exp);

    p=potencia( fato, exp);

    n1=exp_dir(fato, exp);

    n2=exp_spsn(fato, exp);

    n3=exp_inv(fato, exp);

    n4=exp_invD(fato, exp);


    printf("\npotencia: %f.2\n", p);
    printf("a: %.f\n", n1);
    printf("b: %f\n", n2);
    printf("c: %f\n", n3);
    printf("d: %f\n", n4);

}