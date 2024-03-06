#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;//ponteiro que direciona o arquivo 
	char filename[80], c, abc[]={"abcdefghijklmnopqrstuvwxyz"}; //abcerdario para comparação
	int  i, letter[26]={0}; /* inicializa letter [] com 0 */
	
	printf("Enter filename: ");
    scanf("%s", &filename);//recebe o nome do arquivo
	fp= fopen(filename, "r"); /* abrir arquivo para leitura em formato texto */
	if(fp==NULL) {  //caso o arquivo nao seja encontrado ou não exista
		printf("Erro de abertura de arquivo...");
		exit(0);
	}
   /* ler caracter do arquivo e incrementar contadores */
	while((c=getc(fp)) != EOF) {//transforma os caracteres do arquivo em char
		for(i=0;i<26;i++)//da a volta no abecedario
		if(c==abc[i]){//compara os chars
			letter[i]++;//soma no abecedario
		}
   }
   for(i=0;i<26;i++)//programa responde ao usuario
   printf("%c=%d;", abc[i], letter[i]);

   
   fclose(fp);  /* fechar arquivo */
	return 0;
}

