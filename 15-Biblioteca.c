#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// A biblioteca de uma universidade deseja fazer um algoritmo que leia o tipo de usu�rio (1 - Aluno; 2 � Funcion�rio; 3 � Professor; 4 � Outros) e
// imprima um recibo com o n�mero de dias que o usu�rio poder� ficar com o livro:
// Aluno : 7 dias
// Funcion�rio: 7 dias
// Professor: 14 dias
// Outros: O dias (consulta local)

int main() {	
	setlocale(LC_ALL, "Portuguese");

	int usuario;
	
	printf("Qual � o tipo de usu�rio? (1 - Aluno, 2 - Funcion�rio, 3 - Professor, 4 - Outros)\n");
	scanf("%d",&usuario);
	switch(usuario) {
		case 1: printf("Pode ficar com o livro por 7 dias.");
		break;
		case 2: printf("Pode ficar com o livro por 7 dias.");
		break;
		case 3: printf("Pode ficar com o livro por 14 dias.");
		break;
		default: printf("0 dias, pois a consulta � local.");
	}
}
