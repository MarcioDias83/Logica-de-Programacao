#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escrever um algoritmo que leia um peso na Terra e o número de um planeta e imprimir 
// o valor do seu peso neste planeta. A relação é dada a seguir juntamente com o valor
// das gravidades relativas à Terra:

// #	Gravidade relativa			Planeta
// 1		0,37					Mercúrio
// 2		0,88					Vênus
// 3		0,38					Marte
// 4		2,64					Júpiter
// 5		1,15					Saturno
// 6		1,17					Urano

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int peso, numero, relacao_peso;
	
	printf("Qual é o peso na Terra?\n");
	scanf("%d", &peso);
	printf("Qual é o número do planeta?\n");
	printf("1 - Mercúrio\n");
	printf("2 - Vênus\n");
	printf("3 - Marte\n");
	printf("4 - Jupiter\n");
	printf("5 - Saturno\n");
	printf("6 - Urano\n\n");
	scanf("%d", &numero);
	
	switch(numero){
	case 1: relacao_peso = peso * 0.37;
		printf("\nEste peso em Mercúrio é de %d.", relacao_peso); break;
	case 2: relacao_peso = peso * 0.88;
		printf("\nEste peso em Vênus é de %d.", relacao_peso); break;
	case 3: relacao_peso = peso * 0.38;
		printf("\nEste peso em Marte é de %d.", relacao_peso); break;
	case 4: relacao_peso = peso * 2.64;
		printf("\nEste peso em Jupiter e de %d.", relacao_peso); break;
	case 5: relacao_peso = peso * 1.15;
		printf("\nEste peso em Saturno e de %d.", relacao_peso); break;
	case 6: relacao_peso = peso * 1.17;
		printf("\nEste peso em Urano e de %d.", relacao_peso); break;
	default: printf("\nSelecione uma da opções!"); break;
	}
}
