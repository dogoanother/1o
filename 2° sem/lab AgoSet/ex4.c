#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#define MAXVAL 6     /*  maximo tamanho do stack       */

typedef struct{
        int sp, p;
        double val[MAXVAL];
}TPilha;

void create(TPilha *p){
        p->sp=-1;
}

void push(TPilha *p, double f){
        if (p->sp<MAXVAL){
                p->sp++;
                p->val[p->sp]=f;
        }
        else{
                printf("erro: stack cheio");
        }
}

double pop(TPilha *p){
        double f;
        if (p>=0){
                f=p->val[p->sp];
                p->sp--;
                return f;
        }
        else{
                printf("erro: stack vazio");
                return 0;
        }
}

void peek(TPilha *p){
        double aux;
        int f;
        aux=print1(p->sp, 0);
        pop1(p->val, aux);
        push(p->sp, aux);
        //return push(TPilha p->sp, pop(TPilha p->sp));

}

void clear(TPilha *p){
        p->sp=-1;
}

void print(TPilha *p){
        int i;
        for (i=p->sp; i>=0; i--){
                printf("valor: %lf", p->val[i]);
        }
}

double print1(TPilha *p,int f){
        
        return (p->val[f]);      
}

double pop1(TPilha *p, int x){
        double f;
        if (p>=0){
                f=p->val[x];
                p->sp--;
                return f;
        }
        else{
                printf("erro: stack vazio");
                return 0;
        }
}

int main(){
        double aux, a;
        TPilha *sp=(TPilha*)malloc(sizeof(TPilha));

        printf("digite um valor ");
        scanf("%lf", &aux);

    create(sp);
    push(sp, aux);//

        printf("digite outro valor ");
        scanf("%lf", &a);

    push(sp, a);//
    //peek;
    pop;
    print;

    return 0;
}