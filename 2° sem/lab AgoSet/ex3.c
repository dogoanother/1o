#include <stdio.h>
#include <stdlib.h>

int funcaomath(int k, int x, int max);

int main(){
int f, k=1, x, max=2;
 
    printf("digite os valores de sua funcao: \n o valor de x: ");
    scanf("%d", &x);
    printf("o valor inicial=1 ");
    //scanf("%d", &k);
    printf("\nvalor maximo: ");
    scanf("%d", &max);

    f=funcaomath(k, x, max);
    printf("%d", f);
    
return 0;
}

int funcaomath(int k, int x, int max){
int i, final=0;

for (i=0;i<=max;i++){
final=final+(x*k);
}
return (final);
}

/*int main(){
    int n, soma=0, i=1;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        soma=soma+i*(i+1);
    }
    printf("%d\n", soma);
    return 0;
}*/