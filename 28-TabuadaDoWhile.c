#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um número e imprima a sua tabuada.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador, resultado;
	resultado = 0;
	contador = 1;
	
	printf("De qual numero voce deseja a tabuada?");
	scanf("%d", &numero);
	
	do{
	resultado = numero * contador;
	printf("%d * %d é igual a %d.\n", contador, numero, resultado);
	contador++;
	}while(contador <= 10);
}
