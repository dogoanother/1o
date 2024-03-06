#include <stdio.h>
#include <stdlib.h>

int main(){
float n1, n2, result;
int choice;
printf("digite seus 2 valores: ");
scanf("%f", &n1 );
scanf("%f", &n2);

printf("escolha a sua operacao matematica:\n\nmedia entre os numeros: 1 \ndiferenca entre os numeros: 2\nproduto entre os numeros 3 \ndivisao do 1 pelo 2: 4\n");
scanf("%d", &choice);
switch(choice){
    case 1:
        result=(n1+n2)/2;
        break;
    case 2:
        if(n1>n2){
        result=n1-n2;}
        else{
            result=n2-n1;}
        break;
    case 3:
        result=n1-n2;
        break;
    case 4:
        result=n1/n2;
}
printf("o resultado da sua operacao: %.2f \n", result);
}