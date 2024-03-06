#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n1=0, n2=0, n3=0, n4=0, n5=0 ,idd[3];
    char aux;
//while (aux != 'x'){
    printf("digite as idades: ");
    for(i=0; i>3; i++){
        scanf("%d", &idd[i]);
    }
    printf("faixa etarias: ");
    for(i=0; i>3; i++){
        if(idd[i]<16){
            n1++;
        }
        else if(idd[i]>15 && idd[i]<31){
            n2++;
        }
        else if(idd[i]>31 && idd[i]< 46){
            n3++;
        }
        else if(idd[i]>45 && idd[i]<61){
            n4++;
        }
        else if(idd[i]>60){
            n5++;
        }
        else{
            printf("alguma coisa deu errado");
        }
        break;
        }
        printf("primeira faixa etaria %d", n1);
        printf("segunda faixa etaria %d", n2);
        printf("terceira faixa etaria %d", n3);
        printf("quarta faixa etaria %d", n4);
        printf("quinta faixa etaria %d", n5);
    
    printf("enter pra continuar e x para finalizar");
  //  scanf("%c", &aux);
//}
    return 0;
}