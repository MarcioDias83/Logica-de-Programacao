#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia dois valores para as vari�veis A e B,
//e efetue a troca dos valores de forma que a vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B passe a ter o valor da vari�vel A. 
//Apresentar os valores trocados.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, A2, B2;
	
	printf("Qual � o valor da vari�vel A?\n");
	scanf("%f",&A);
	printf("Qual � o valor da vari�vel B?\n");
	scanf("%f",&B);
	B2 = A;
	A2 = B;
	A = A2;
	B = B2;
	printf("Invertendo, os valores ficam dessa forma:");
	printf("\nA = %.f.",A2);
	printf("\nB = %.f.",B2);
}
