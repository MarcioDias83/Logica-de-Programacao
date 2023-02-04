#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia dois valores para as variáveis A e B,
//e efetue a troca dos valores de forma que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. 
//Apresentar os valores trocados.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, A2, B2;
	
	printf("Qual é o valor da variável A?\n");
	scanf("%f",&A);
	printf("Qual é o valor da variável B?\n");
	scanf("%f",&B);
	B2 = A;
	A2 = B;
	A = A2;
	B = B2;
	printf("Invertendo, os valores ficam dessa forma:");
	printf("\nA = %.f.",A2);
	printf("\nB = %.f.",B2);
}
