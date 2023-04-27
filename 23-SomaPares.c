#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int numero1, numero2, soma = 0;
  
	printf ("Qual e o primeiro numero?\n");
	scanf ("%d", &numero1);
	printf ("\nQual e o segundo numero?\n");
	scanf ("%d", &numero2);

	numero1 += 2;

	while(numero1 < numero2)
	{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente numeros positivos!");break;
		}
	soma = soma + numero1;
	numero1 = numero1 + 2;
	}
	printf("\nA soma de todos os pares entre primeiro e o segundo numero e %d.", soma);
}
