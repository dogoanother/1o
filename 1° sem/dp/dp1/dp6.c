#include <stdio.h>
#include <stdlib.h>

int main(){
 float media, credito;

 printf("digite sua media salarial: ");
 scanf("%f", &media);

 if (media<=200){
    credito=media*0.10;
 }  
 else if(media>200 && media<=300){
    credito=media*0.2;
 } 
 else if(media>300 && media<=400){
    credito=media*0.25;
 }
 else{
    credito=media*0.3;
 }
 printf("seu credito especial vale %.2f", credito);
}