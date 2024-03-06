#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[3], a, big;

    printf("digite 3 valores: ");
    for(a=0; a<3; a++){
        scanf("%d", &num[a]);
    }
    for(a=0; a<3; a++){
            if(num[a]>big){
                big=num[a];
            }
        }
        printf("o maior numero es:%d", big);

}
