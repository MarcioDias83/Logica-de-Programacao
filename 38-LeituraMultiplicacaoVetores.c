#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que leia dois vetores de 10 posi��es de
n�meros inteiros e guarde em um terceiro vetor de 10 posi��es suas
multiplica��es:
Exemplo

Crie um programa em C que leia um vetor de 10 posi��es de n�meros inteiros e guarde
em um segundo vetor os n�meros invertidos.
Ex.: O n�mero que estava na posi��o 9 do primeiro ficar� na posi��o 0 do segundo, o
que estava na posi��o 8 do primeiro ficar� na posi��o 1 do segundo... E assim
sucessivamente.

[0] ... [9]

Vetor1 5 ... 3
Vetor2 4 ... 6
VetorResult 20 ... 18 */

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int vet1[10], vet2[10], vetRe[10], cont;
	{
		printf("\n Informe o n�mero da posi��o %d de um n�mero do PRIMEIRO vetor:",cont);
		scanf("%d", &vet1[cont]);
		printf("\n Informe o n�mero da posi��o %d de um n�mero do SEGUNDO vetor:",cont);
		scanf("%d", &vet1[cont]);
		vetRe=[cont] = vet1[cont]*vet2[cont];
	}
	
	for(cont=0; cont<10;cont++)
	{
		printf(" %d -", vetRe[cont]);
	}
}
