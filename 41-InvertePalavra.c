#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>

// Crie um programa em C que leia uma frase e inverta as letras dessa frase.

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	char frase1[20], frase2[20]="";//Nunca esquecer de inicializar a string!
	int x=0, tamanho=0;

	printf("Qual é a sua frase?\n");
	gets(frase1);
	tamanho = strlen(frase1);
	for(x=0; x < tamanho; x++)
	{
		frase2[tamanho-x-1]=frase1[x];
	}
	printf("Sua nova frase é %s", frase2);
}
