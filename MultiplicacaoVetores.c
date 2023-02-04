#include <stdio.h>
#include <stdlib.h>

//Crie um programa em C que leia dois vetores de 10 posições de
//números inteiros e guarde em um terceiro vetor de 10 posições suas
//multiplicações:

int main()
{
    int vetor1[10],vetor2[10],vetor3[10],cont;

    for(cont=0;cont<10;cont++)
{

    printf("Informe o primeiro numero:");
    scanf("%d",&vetor1[cont]);
    printf("\nInforme o segundo numero:");
    scanf("%d",&vetor2[cont]);

    vetor3[cont]= vetor1[cont]*vetor2[cont];

}
    for(cont=0;cont<10;cont++)
    {

        printf("\nO resultado das multiplicacoes: %d",vetor3[cont]);

    }

}
