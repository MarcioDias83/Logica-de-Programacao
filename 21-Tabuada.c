#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um número e imprima a sua tabuada.

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numero;
	int contador;
	int resultado;
	resultado = 0;
	cont = 1;

	printf("Qual número você deseja saber a tabuada?\n\n");
	scanf("%d", &numero);
	printf("\n");
	while(contador <= 10)
	{
	resultado = numero * contador;
	printf("%d * %d é igual a %d.\n", contador, numero, resultado);
	contador++;
	}
}
