#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa para realizar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. 
//Dever�o ser fornecidos o tempo gasto na viagem e a velocidade m�dia. Utilizar as seguintes f�rmulas: dist�ncia = tempo x velocidade. litros usados = dist�ncia / 12.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, velocidade, tempo, litrosUsados;
	
	printf("Quanto tempo em horas durou a viagem?\n");
	scanf("%f",&tempo);
	printf("Qual foi a velocidade m�dia da viagem?\n");
	scanf("%f",&velocidade);
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	printf("A quantidade de combust�vel usados para essa viagem foi de %.2f litros.",litrosUsados);
}
