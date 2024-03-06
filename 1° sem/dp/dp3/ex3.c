#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n1=0, n2=0, n3=0, n4=0, n5=0 ,idd[15];
    char aux;
while (aux != 'x'){
    printf("digite as idades:\n ");
    for(i=0; i<15; i++){
        scanf("%d", &idd[i]);
    }
    printf("faixa etarias:\n ");
    for(i=0; i<15; i++){
        if(idd[i]<=15){
            n1=n1+1;
        }
        else if(idd[i]>=16 && idd[i]<=30){
            n2=n2+1;
        }
        else if(idd[i]>=30 && idd[i]<=45){
            n3=n3+1;
        }
        else if(idd[i]>=46 && idd[i]<=60){
            n4=n4+1;
        }
        else if(idd[i]>=61){
            n5=n5+1;
        }
        else{
            printf("alguma coisa deu errado");
        }
    }
        printf("\nprimeira faixa etaria %d", n1);
        printf("\nsegunda faixa etaria %d", n2);
        printf("\nterceira faixa etaria %d", n3);
        printf("\nquarta faixa etaria %d", n4);
        printf("\nquinta faixa etaria %d", n5);
    
    printf("\nenter pra continuar e x para finalizar:");
    scanf("%c", &aux);
}
    return 0;
}