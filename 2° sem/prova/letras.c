#include <stdio.h> //lista encadeada; função do zero;
#include <stdlib.h>

char contador(char frase[], char letra){
    int cont, i;

    for ( i = 0; frase[i] != '\0'; i++){
        if(frase[i]==letra){
            cont= cont +1;
        }    
    }    
    printf("\na letra %c repetiu %d em sua frase ", letra, cont);
}

char main(){
    char frase[]="abc", letra='b', *pf;

    printf("digite sua frase: ");
    scanf("%c", &frase);

    fflush(stdin);
    printf("\ndigite a letra a ser procurada na frase: ");
    scanf(" %c", &letra);

    contador(frase, letra);

    return 0;
}