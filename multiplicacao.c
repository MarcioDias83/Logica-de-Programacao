// Crie um programa em C que leia um vetor de 10 posições de números inteiros e multiplique por 10 cada um de seus valores.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, vet[10];
	
	for(x = 0; x < 10; x++)
	{
		printf("Informe um numero: ");
		scanf("%d",&vet[x]);
		vet[x] = vet[x] * 10;
	}
	for(x = 0; x < 10; x++)
	{
		printf("%d\n",vet[x]);
	}
}
