#include <stdio.h>
#include <stdlib.h>

int main(){
    float v[10], c[10], f[10], f2=0;
    char n[10][15];
    int i, k;

    printf("\ndigite o nome dos vendedores: "); //nome 
    for (i=0; i<10; i++){
        scanf ("%s", &n[i]);
    }
    printf("\ndigite o total das vendas: ");  //vendas
    for (i=0; i<10; i++){
        printf ("\npara %s", n[i]);
        scanf ("%f", &v[i]);
    }
    printf("\ndigite a comissao dos vendedores em x/100: ");  //comissoes 
    for (i=0; i<10; i++){
        printf ("\npara %s", n[i]);
        scanf ("%f", &c[i]);
    }


    printf("\nRESULTADOS\n"); //resultados pessoais
    for (i=0; i<10; i++){
        printf ("\n%s", n[i]);
        f[i]=v[i]*(c[i]/100);
        printf (" recebera %fR$\n", f[i]);
    }

    for(i=0;i<10;i++){  //soma das vendas 
        f2=f2+v[i];
        }
    printf("\no total de vendas para todos sera igual %f\n", f2);

    
        f2=f[0];
    for(i=1;i<10;i++){ //maior valor 
        if(f[i]>=f2){
            f2=f[i];
            k=i;
        }
    }
    printf("%s recebera o maior valor: %f",n[k], f2);
    
    
    f2=f[0];
    for(i=1;i<10;i++){   //menor valor
        if(f[i]<=f2){
            f2=f[i];
            k=i;
        }
    }
    printf("%s recebera o menor valor: %f",n[k], f2);
    
}