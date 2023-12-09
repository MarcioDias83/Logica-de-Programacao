#include <stdio.h>
#include <stdlib.h>

//Crie um programa que leia um valor em graus celsius e converta para fahrenheit. Sabendo que a formula de conversão e: F = C * 1.8 + 32

int main() 
{
	
	float tempCelsius, tempFahrenheit;
	
	printf("Informe a temperatura em Celsius:\n");
	scanf("%f",&tempCelsius);
	tempFahrenheit = tempCelsius * 1.8 + 32;
	printf("A temperatura em Fahrenheit sera de %.2f.",tempFahrenheit);
}
