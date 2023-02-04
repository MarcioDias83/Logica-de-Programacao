#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// A biblioteca de uma universidade deseja calcular a multa por atraso de cada tipo de 
// usuário (1 - Aluno; 2 - Funcionário; 3 - Professor). O programa deverá ler o tipo de 
// usuário e o número de dias de atraso e calcular o valor da multa:

// Aluno: R$ 1,00 por dia de atraso
// Funcionário: R$ R$ 1,50 por dia de atraso
// Professor: R$ 2,50 por dia de atraso

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int usuario;
	int dias_de_atraso = 0;
	float multa;
	
	printf("Qual é o tipo de usuário? 1 - Aluno, 2 - Funcionário, 3 - Professor. \n");
	scanf("%d",&usuario);
	printf("Quantos dias está em atraso? \n");
	scanf("%d",&dias_de_atraso);
		switch(usuario) {
		case 1: multa = 1 * dias_de_atraso;
			printf("O aluno deverá pagar R$ %.2f.", multa); break;
		case 2: multa = 1.5 * dias_de_atraso;
			printf("O funcionário deverá pagar R$ %.2f.", multa); break;
		case 3: multa = 2.5 * dias_de_atraso;
			printf("O professor deverá pagar R$ %.2f.", multa); break;
		default: printf("Selecione uma das opções!", multa);
	}
}
