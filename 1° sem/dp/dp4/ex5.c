#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[2][15];
    float m[2], aux;
    int i, k;

    for (i=0; i<2; i++){  // recebe informacoes
        printf("nome: ");
        scanf("%s", &n[i]);
        printf("media final: ");
        scanf("%f", &m[i]);
    }


    for(i=0; i<2 ; i++){  //exame
        if (m[i]<7){
            aux=0;
            printf("\no aluno %s ficou de exame", n[i] );
            aux=10.0-m[i];
            printf(" e precisa de %f para passar", aux);
        }
    }


    aux=m[0];
    for (i=0; i<2; i++){    //melhor nota 
        if(m[i]>aux){
            aux=m[i];
            k=i;
        }
    }
    printf("\n%s teve a melhor nota: ", n[k] );
    printf("%f\n", aux);
    
}
