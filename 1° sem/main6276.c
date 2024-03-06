#include <stdio.h>

int main(){
	int num;
	
	printf("==-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Type the correct number: ");
	scanf("%d", &num);	
	while (num != 10){
		printf("Try again!!\n");
		printf("==-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
		printf("Type the correct number: ");
		scanf("%d", &num);
		if(num == 10){
			printf("Congrats that`s the correct number\n");
			break;
		}
		else{
			continue;
		}
	}
	return 0;
}
