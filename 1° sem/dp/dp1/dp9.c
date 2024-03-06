#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, peso;
    int i;

    printf("digite sua altura\n");
    scanf("%f", &h);
    
    printf("digite seu genero\n1 para masculino\n2 para feminino\n"); scanf("%d", &i);
    if(i==1){       
        peso=(72.7*h)-58;
    }
    else if(i==2){
        peso=(62.*h)-44.7;
    }
    else{
        printf("\n!!!genero invalido!!!\n NAO BINARIO O MEU OVO");
    }

    printf("\nseu peso ideal seria: %f", peso);
    return 0;

}