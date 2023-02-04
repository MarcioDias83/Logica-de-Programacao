#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um vetor de 10 posições de números inteiros e informe:
// a) Média
// b) Maior valor
// c) Menor valor

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num[10], maior = 0, menor = 9999;
	float media = 0, somatorio = 0;
	
	for(cont = 0; cont < 10; cont++)
	{
		printf("Digite um número:\n");
		scanf("%d",&num[cont]);
		somatorio += num[cont];
		
		if(num[cont]>maior)
		{
			maior = num[cont];
		}
		
		if(num[cont]<menor)
		{
			menor = num[cont];
		}
		
	}
	media = somatorio / 10;
	printf("A média é %.2f.\n", media);
	printf("O menor número é %d.", menor);
	printf("O maior número é %d.", maior);
}

