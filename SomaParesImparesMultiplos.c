#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que leia um vetor de 20 posi��es de n�meros inteiros e informe
a) A soma de todos os n�meros pares
b) A soma de todos os n�meros �mpares
c) Os m�ltiplos de 5 */

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[20], somatorio, pares, impares, multiplos, cont, i;
	
	
	for(cont = 0; cont <= 19; cont++)
	{
	printf("Digite um n�mero:\n");
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
	printf("A soma de todos os pares � %d.\n",pares);
	printf("A soma de todos os �mpares � %d.\n",impares);
	printf("Os n�meros m�ltiplos de 5 s�o %d.\n",multiplos);
}
