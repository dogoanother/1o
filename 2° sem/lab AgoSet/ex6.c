#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, *vet1, *vet2;

    vet1=malloc(10* sizeof(int));
    vet2=calloc(10, sizeof(int));

    printf("\ncom malloc:\n");
    for (i=0;i <10; i++){
        printf("  %d  ", vet1[i]);
    }
    printf("\ncom calloc:\n");
    for (i=0;i <10; i++){
        printf("  %d  ", vet2[i]);
    }

return 0;
}