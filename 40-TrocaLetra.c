#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Crie um programa em C que leia uma frase e substitua letras ‘a’ por letras ‘o’.

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	char frase[30];
	int x;

	printf("Qual é a sua frase?\n");
	gets(frase);
	for(x=0;x<strlen(frase);x++)
	{
		if(frase[x]=='a')
		{
			frase[x] = 'o';
		}
	}
	printf("Sua nova frase é %s", frase);
}
