#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um vetor de 10 posições de números inteiros e multiplique por 10 cada um de seus valores.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num[10];
	
	for(cont = 0; cont < 10; cont++)
	{
		printf("Digite um número:\n");
		scanf("%d",&num[cont]);
		num[cont] = num[cont] * 10;
	}
	
	for(cont = 0; cont < 10; cont++)
	{
		printf(" %d - ",num[cont]);
	}	
}



