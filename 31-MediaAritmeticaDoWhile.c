// Crie um programa em C que leia dois números pares positivos e imprima a média aritmética de todos os pares entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  
int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma = 0, contador, media;
  
	printf ("Qual é o primeiro número?\n");
	scanf ("%d", &numero1);
	printf ("\nQual é o segundo número?\n");
	scanf ("%d", &numero2);

	do{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente números positivos!");break;
		}
	soma = soma + numero1;
	numero1 = numero1 + 2;
	contador = contador + 1;
	}while(numero1 <= numero2);
	media = soma / contador;
	printf("\nA média de todos os pares entre primeiro e o segundo número é %d.", media);
}
