#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia dois n�meros pares e positivos e imprima a soma de todos os pares entre eles.
  
int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma = 0;
  
	printf ("Qual � o primeiro n�mero?\n");
	scanf ("%d", &numero1);
	printf ("\nQual � o segundo n�mero?\n");
	scanf ("%d", &numero2);

	while(numero1 <= numero2)
	{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente n�meros positivos!");break;
		}
	soma = soma + numero1;
	numero1 = numero1 + 2;
	}
	printf("\nA soma de todos os pares entre primeiro e o segundo numero � %d.", soma);
}
