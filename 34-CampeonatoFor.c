#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// O Campeonato Brasileiro conta com 20 times na série A no ano de 2018. Sabendo que cada time disputa 38 rodadas e que vitórias contabilizam 3 pontos, empates 1 ponto e
// derrotas 0 pontos, crie um programa na linguagem C que:
// a) Leia o nome do time e números de vitórias, empates e derrotas dos 20 times e calcule e imprima sua pontuação e aproveitamento
// b) Mostre o nome e pontuação do Campeão e do Vice-Campeão
// c) Mostre a diferença de pontos entre Campeão e Vice-Campeão
// d) Mostre o nome e aproveitamento do penúltimo e último colocados
// e) Mostre a diferença de pontos entre penúltimo e último colocados

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int time, rodada, vitoria, empate, derrota, contador, pontos;
	
	printf("Qual é o nome do time?\n");
	scanf("%d",&time);
	printf("Quantas vitórias esse time possui?\n");
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
