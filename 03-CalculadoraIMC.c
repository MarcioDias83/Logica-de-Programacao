#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia altura e massa e calcule o IMC (Índice de Massa Corpórea). Sabendo que a fórmula é: IMC = massa/ (altura*altura).

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Peso, Altura, IMC;
	
	printf("Informe o seu peso!\n");
	scanf("%f",&Peso);
	printf("Informe a sua altura!\n");
	scanf("%f",&Altura);
	IMC = Peso / (Altura * Altura);
	printf("O seu IMC é de %.2f.", IMC);
}
