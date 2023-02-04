#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escrever um algoritmo que leia um peso na Terra e o n�mero de um planeta e imprimir 
// o valor do seu peso neste planeta. A rela��o � dada a seguir juntamente com o valor
// das gravidades relativas � Terra:

// #	Gravidade relativa			Planeta
// 1		0,37					Merc�rio
// 2		0,88					V�nus
// 3		0,38					Marte
// 4		2,64					J�piter
// 5		1,15					Saturno
// 6		1,17					Urano

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int peso, numero, relacao_peso;
	
	printf("Qual � o peso na Terra?\n");
	scanf("%d", &peso);
	printf("Qual � o n�mero do planeta?\n");
	printf("1 - Merc�rio\n");
	printf("2 - V�nus\n");
	printf("3 - Marte\n");
	printf("4 - Jupiter\n");
	printf("5 - Saturno\n");
	printf("6 - Urano\n\n");
	scanf("%d", &numero);
	
	switch(numero){
	case 1: relacao_peso = peso * 0.37;
		printf("\nEste peso em Merc�rio � de %d.", relacao_peso); break;
	case 2: relacao_peso = peso * 0.88;
		printf("\nEste peso em V�nus � de %d.", relacao_peso); break;
	case 3: relacao_peso = peso * 0.38;
		printf("\nEste peso em Marte � de %d.", relacao_peso); break;
	case 4: relacao_peso = peso * 2.64;
		printf("\nEste peso em Jupiter e de %d.", relacao_peso); break;
	case 5: relacao_peso = peso * 1.15;
		printf("\nEste peso em Saturno e de %d.", relacao_peso); break;
	case 6: relacao_peso = peso * 1.17;
		printf("\nEste peso em Urano e de %d.", relacao_peso); break;
	default: printf("\nSelecione uma da op��es!"); break;
	}
}
