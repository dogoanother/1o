#include <stdlib.h>
#include <stdio.h>
#define maxtam 6

typedef struct {
    int item[maxtam], topo;
}TPilha;

void inicia(TPilha *p){
    p->topo = -1;
}

int vazia(TPilha *p){
    if(p->topo== -1){
        return 1;
    }
    else{
        return 0;
    }
}

int cheia(TPilha *p){
    if(p->topo==maxtam-1){
        return 1;
    }
    else{
        return 0;
    }
}

void insere(TPilha *p, int x){
    if (cheia(p)==1){
        printf("erro: pilha esta cheia");
    }
    else {
        p->topo++;
        p->item[p->topo]=x;
    }
}

int retira(TPilha *p){
    int aux;
    if(vazia(p)==1){
        printf("erro: pilha vazia");
    }
    else{
        aux=p->item[p->topo];
        p->topo--;
        return aux;
    }
}

int main(){
    int aux;
    TPilha *p = (TPilha*)malloc(sizeof(TPilha));
    inicia(p);

    insere(p, 420);
    insere(p, 69);

    aux=retira(p);
    printf("\n saiu %d", aux);

    aux=retira(p);
    printf("\n saiu %d", aux);
}