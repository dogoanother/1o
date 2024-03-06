#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[7], md[7], mt[7], i;
    float res;

        printf("introduza os numeros: ");
    for(i=0; i<7; i++){
        scanf("%d", &v[i]);
    }    
    for(i=0; i<7; i++){
        if(v[i]!=0){
            res=v[i]%2;
            if(res==0){
                md[i]=v[i];
            }
            else{
                    md[i]=0;
                }
        }
    }
           
    for(i=0; i<7; i++){
        if(v[i]!=0){
            res=v[i]%3;
            if(res==0){
                mt[i]=v[i];
            }
            else{
                mt[i]=0;
            }
        }    
    }
    
        printf("\nmultiplos de 2 -> "); 
        for(i=0; i<7;i++){
            printf("%d   ", md[i]); //quais os numeros
        }
        printf("\nmultiplos de 3 -> ");
        for(i=0; i<7;i++){
        printf("%d   ", mt[i]); //quais os numeros
        }
    
        printf("\nmultiplos de 2 e 3 -> ");
        for(i=0; i<7;i++){
            if(md[i]==mt[i]){
                v[i]=md[i];
            printf("%d   ", v[i]);
            }
        }
}