#include <stdio.h>
#include <stdlib.h>

void sobrenome(char aluno);
void inicial(char aluno);
void telefone(char aluno); 
void cpf(char aluno);



int main(char aluno){
int aux;

    printf("\noq deseja saber sobre os alunos?\n1 para sobrenome\n2 para as iniciais\n3 para telefone\n4 para informacoes pessoais ");
    scanf("%d", aux);

    switch (aux)
    {
    case (1):
       sobrenome(aluno);
        break;
    case (2):
       inicial(aluno);
        break;
    case (3):
       telefone(aluno);
        break;
    case (4):
       cpf(aluno);
        break;
    
    default:
    printf("opcao invalida");
        break;
    }

    return 0;
}