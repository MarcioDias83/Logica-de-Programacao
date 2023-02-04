#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia dois números pares e positivos e imprima a soma de todos os pares entre eles.
  
int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma = 0;
  
	printf ("Qual é o primeiro número?\n");
	scanf ("%d", &numero1);
	printf ("\nQual é o segundo número?\n");
	scanf ("%d", &numero2);

	while(numero1 <= numero2)
	{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente números positivos!");break;
		}
	soma = soma + numero1;
	numero1 = numero1 + 2;
	}
	printf("\nA soma de todos os pares entre primeiro e o segundo numero é %d.", soma);
}
