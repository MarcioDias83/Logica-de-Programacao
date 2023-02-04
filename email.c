#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()

{
	
	char frase1[30]="",frase2[30]="@fadergs.com.br";
	int x,tamanho;
	
	printf("Informe seu nome:");
	gets(frase1);
	tamanho=strlen(frase1);
	strcat(frase1,frase2);
	
	printf("O email sugerido e: %s", frase1);
	
}
