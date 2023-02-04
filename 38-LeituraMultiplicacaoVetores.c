#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que leia dois vetores de 10 posições de
números inteiros e guarde em um terceiro vetor de 10 posições suas
multiplicações:
Exemplo

Crie um programa em C que leia um vetor de 10 posições de números inteiros e guarde
em um segundo vetor os números invertidos.
Ex.: O número que estava na posição 9 do primeiro ficará na posição 0 do segundo, o
que estava na posição 8 do primeiro ficará na posição 1 do segundo... E assim
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
		printf("\n Informe o número da posição %d de um número do PRIMEIRO vetor:",cont);
		scanf("%d", &vet1[cont]);
		printf("\n Informe o número da posição %d de um número do SEGUNDO vetor:",cont);
		scanf("%d", &vet1[cont]);
		vetRe=[cont] = vet1[cont]*vet2[cont];
	}
	
	for(cont=0; cont<10;cont++)
	{
		printf(" %d -", vetRe[cont]);
	}
}
