#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia um valor em graus celsius e converta para fahrenheit. Sabendo que a f�rmula � T(�F) = T(�C) � 1.8 + 32.

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	float tempCelsius, tempFahrenheit;
	
	printf("Informe a temperatura em Celsius:\n");
	scanf("%f",&tempCelsius);
	tempFahrenheit = tempCelsius * 1.8 + 32;
	printf("A temperatura em Fahrenheit será de %.2f.",tempFahrenheit);
}
