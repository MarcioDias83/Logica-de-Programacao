#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //ao usar toupper ou tolower.

#include <locale.h>

/* Crie um c�digo C que receba uma frase e um caractere, e retorne o n�mero de vezes que esse caractere aparece na string. */

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	char frase1[20]="", frase2[20]="", iguais, letra;//Nunca esquecer de inicializar a string!
	int x=0, tamanho=0, y=0;

	printf("Qual � a sua frase?\n");
	gets(frase1);
	printf("Qual � a letra que voc� deseja verificar?\n");
	scanf("&c",&letra);
	
	tamanho = strlen(frase1);
	
	for(x=0; x < tamanho; x++)
	{
		frase1[x] = toupper(frase1[x]);
		frase2[tamanho-x-1] = frase1[x];
	}
	
	iguais = strcmp(frase1,frase2);
	if(iguais==0)
	{
		printf("E palindromo");
	}
	else
	{
		printf("Não e palindromo");
	}
}
