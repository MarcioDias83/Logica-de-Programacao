#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// O Campeonato Brasileiro conta com 20 times na s�rie A no ano de 2018. Sabendo que cada time disputa 38 rodadas e que vit�rias contabilizam 3 pontos, empates 1 ponto e
// derrotas 0 pontos, crie um programa na linguagem C que:
// a) Leia o nome do time e n�meros de vit�rias, empates e derrotas dos 20 times e calcule e imprima sua pontua��o e aproveitamento
// b) Mostre o nome e pontua��o do Campe�o e do Vice-Campe�o
// c) Mostre a diferen�a de pontos entre Campe�o e Vice-Campe�o
// d) Mostre o nome e aproveitamento do pen�ltimo e �ltimo colocados
// e) Mostre a diferen�a de pontos entre pen�ltimo e �ltimo colocados

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int time, rodada, vitoria, empate, derrota, contador, pontos;
	
	printf("Qual � o nome do time?\n");
	scanf("%d",&time);
	printf("Quantas vit�rias esse time possui?\n");
	scanf("%d",&vitoria);
	if (vitoria > 0){
		
		vitoria * 3;
		
	}
	printf("Quantos empates ele possui?\n");
	scanf("%d",&empate);
	if(empate > 0){
		
		empate * 1;
		
	}
	printf("Quantas derrotas ele possui?\n");
	scanf("%d",&derrota);
	if(derrota > 0){
		
		derrota * 0;
		
	}
	(pontos = vitoria + empate);
	printf("O %d possui %d pontos.",time,pontos);
		
	contador++;
}
