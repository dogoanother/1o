#include <stdio.h> //1
#include <stdlib.h>
//1.4.6.8.15.20
int main(){
 int i, k, n, res=0;

printf("digite um numero positivo: ");
scanf("%d", &n);
k=n;
    for (i=0; i<n ; i++){
        res=res+k;
        k=k-1;
    }
    printf("o resultado do numero somado com os inteiros anteriores e' %d", res);
    return 0;
}