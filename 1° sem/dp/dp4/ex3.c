#include <stdio.h> //5
#include <stdlib.h> 

int main(){
    int i, a;
    int mat1[15], mat2[10];

    for(i=0 ; i<15; i++){

        printf("matricula do aluno de logica: ");
        scanf("%d", &mat1[i]);
    }

    printf("\n");

    for(i=0; i<10; i++){

        printf("matricula do aluno de programacao: ");
        scanf("%d", &mat2[i]);
    }

    printf("\n");

    for(i=0; i<15; i++){
        for(a=10; a>=0; a--){
            if(mat1[i] == mat2[a] || mat1[a] == mat2[i]) printf("as matriculas que cursam simultaneamente sao: %d\n", mat1[i]);
        }
    }
}