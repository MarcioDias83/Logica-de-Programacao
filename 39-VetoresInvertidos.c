#include <stdio.h>
#include <stdlib.h>

int main ()
{

//Crie um programa em C que leia um vetor de 10 posi��es de n�meros inteiros e guarde
//em um segundo vetor os n�meros invertidos.
//Ex.: O n�mero que estava na posi��o 9 do primeiro ficar� na posi��o 0 do segundo, o
//que estava na posi��o 8 do primeiro ficar� na posi��o 1 do segundo... E assim
//sucessivamente.

int vetor1[10],vetor2[10],cont;

for(cont=0;cont<10;cont++)
{
	printf("Informe um numero:");
	scanf("%d",&vetor1[cont]);
	
	vetor2[10-cont-1]=vetor1[cont];
	
}
for(cont=0;cont<10;cont++)
{
	printf("\nVetor invertido e: %d",vetor2[cont]);	
	printf("\nO vetor e: %d",vetor1[cont]);	
	
}
}
