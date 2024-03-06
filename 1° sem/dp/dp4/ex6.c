#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[6], ni[6], qi=0, np[6], qp=0, i;
    float res;

          printf("Introduza os numeros: ");
    for(i=0; i<6; i++){
          scanf("%d",&v[i]);
          if(v[i]!=0){ //Condicional para par ou impar  
              res=v[i]%2;        

              if(res==0){
                  np[i]=v[i];
                  ni[i]=0;
              } else {
                  ni[i]=v[i];
                  np[i]=0;
              }
          }
      }

    for (i=0;i<6;i++){
        qi=qi+ni[i];
        qp=qp+np[i];
    }
    printf("Pares -> %d\n", qp); //soma dos numeros
    printf("Impares -> %d\n", qi);

}