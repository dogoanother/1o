#include <stdio.h>
#include <stdlib.h>
#define N 4
#define K 4
#define M 4


void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k){
int i, s;
double prod;//valor final
int choice;//variavel para operação desejada

printf("escolha entre: 1=ab, 2=ac, 3=bc");//opção de escolha para o produto final 
scanf("%d", &choice);

switch(choice){//opções de escolha
case 1:
for(i=0;i<4;i++){
    for(s=0;s<4;s++){
       prod=prod+(a[i][s]*b[s][i]);//soma do produto    
    }
}
printf("o produto das matrizes a, b e igual a %d", prod);//resultado final
break;
case 2:
for(i=0;i<4;i++){
    for(s=0;s<4;s++){
       prod=prod+(a[i][s]*c[s][i]);    
    }
}
printf("o produto das matrizes a, c e igual a %d", prod);
break;
case 3:
for(i=0;i<4;i++){
    for(s=0;s<4;s++){
       prod=prod+(c[i][s]*b[s][i]);    
    }
}
printf("o produto das matrizes b, c e igual a %ld", prod);
break;
default://caso a escolha seja invalida
printf("escolha invalida");
break;
}
}

int main(){
    double a[N][K], b[K][M], c[N][M];//matrizes 4x4
    int n, m, k;//valores auxiliares

    printf("digite os valores da matriz a: ");
    for(n=0; n<4; n++){//loop para matriz a
        for(k=0;k<4;k++){
    scanf("%ld", &a[n][k]);
            }  
    }

    printf("digite os valores da matriz b: ");
    for(k=0; k<4; k++){//loop para matriz b 
        for(m=0;m<4;m++){
    scanf("%d", &b[k][m]);
            }  
    }

    printf("digite os valores da matriz c: ");
    for(n=0; n<4; n++){//loop para matriz z
        for(m=0;m<4;m++){
    scanf("%d", &c[n][m]);
            }  
    }
n=0;m=0;k=0;

    produto_matrizes(a, b, c, n, m, k);//entra na função 

    return 0;
}
