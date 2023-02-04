#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa para realizar o cálculo da quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. 
//Deverão ser fornecidos o tempo gasto na viagem e a velocidade média. Utilizar as seguintes fórmulas: distância = tempo x velocidade. litros usados = distância / 12.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, velocidade, tempo, litrosUsados;
	
	printf("Quanto tempo em horas durou a viagem?\n");
	scanf("%f",&tempo);
	printf("Qual foi a velocidade média da viagem?\n");
	scanf("%f",&velocidade);
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	printf("A quantidade de combustível usados para essa viagem foi de %.2f litros.",litrosUsados);
}
