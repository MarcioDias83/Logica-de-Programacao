#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que leia um vetor de 20 posições de números inteiros e informe
a) A soma de todos os números pares
b) A soma de todos os números ímpares
c) Os múltiplos de 5 */

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[20], somatorio, pares, impares, multiplos, cont, i;
	
	
	for(cont = 0; cont <= 19; cont++)
	{
	printf("Digite um número:\n");
	scanf("%d",&num[cont]);
	
	if(num[cont] % 2 == 0 )
	{
		pares += num[cont];
	}
	
	else
	{
		impares += num[cont];
	}
}
	for(i = 0; i < 999999; i++)
	{
		if(num[cont] % 5 == 0)
	{
		multiplos += num[cont];
	}

}
	printf("A soma de todos os pares é %d.\n",pares);
	printf("A soma de todos os ímpares é %d.\n",impares);
	printf("Os números múltiplos de 5 são %d.\n",multiplos);
}
