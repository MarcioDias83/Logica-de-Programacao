#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um código C que receba uma frase e um caractere, e retorne o número de vezes que esse caractere aparece na string.

int main()
{
	char frase[30], letra;
	int tamanho, x;
	
	printf("Digite uma frase!\n");
	gets(frase);
	printf("Escolha uma letra!\n");
	scanf("$s",letra);
	
	tamanho = strlen(frase);
	
	for(x=0; x < tamanho; x++)
	{
		
	}
	
	printf("%s",tamanho);
}
