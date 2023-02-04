#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um número e imprima a sua tabuada.

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numero, contador, resultado;
	resultado = 0;
	contador = 1;

	printf("Qual número você deseja saber a tabuada?\n\n");
	scanf("%d", &numero);
	printf("\n");
	
	for(contador = 1; contador <= 10; contador += 1)
	{
	resultado = numero * contador;
	printf("%d * %d é igual a %d.\n", numero, contador, resultado);
	}
}
