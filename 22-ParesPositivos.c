#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia dois números pares e positivos e imprima todos os pares entre eles.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero1;
	int numero2;
	int contador = 0;
	
	printf("Qual é o primeiro número?\n");
	scanf("%d",&numero1);
	printf("Qual é o segundo número?\n");
	scanf("%d",&numero2);
	
	while(numero1 <= numero2)
	{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente números positivos!");break;
		}
	printf("%d\n", numero1);
	numero1 = numero1 + 2;
	contador = contador + 1;
	}
}
//if (contador == 0)
//printf("O bloco não foi repetido.");
//else
//printf("O bloco foi repetido %d vezes.", contador);

