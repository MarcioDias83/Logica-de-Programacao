// Crie um programa em C que leia a altura e o sexo de 20 alunos (1- Masc. 2-Fem.) e informe :
// a) N�mero de alunos
// b) N�mero de alunas
// c) M�dia de altura dos alunos
// d) M�dia de altura das alunas

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int altura, sexo, numAlunos, numAlunas, soma, contador, contAlunos, contAlunas;
float mediaAlturaAlunos, mediaAlturaAlunas;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	for(numAlunos = 1; numAlunos <= 20; numAlunos += 1){
	printf("Digite o seu sexo: 1 - Masculino, 2 - Feminino\n");
	scanf("%d",&sexo);
	contador += 1;
	switch(sexo){
		case 1: sexo = 1;
			printf("Digite a sua altura em cm:\n");
			scanf("%d",&altura);
			contAlunos +=1;
			soma += altura;
			mediaAlturaAlunos = soma / contador;break;
	
		case 2: sexo = 2;
			printf("Digite a sua altura em cm:\n");
			scanf("%d",&altura);
			contAlunas += 1;
			soma += altura;
			mediaAlturaAlunas = soma / contador;break;
			
		default: printf("Escolha uma das op��es!\n\n");
		}
	}	
	printf("\nNessa turma existem %d alunos e %d alunas, sendo que a m�dia da altura dos alunos � de %.1f e das alunas � de %.1f.", contAlunos, contAlunas, mediaAlturaAlunos, mediaAlturaAlunas);
}
