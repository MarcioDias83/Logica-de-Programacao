#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Crie um programa em C que leia a idade dos alunos de uma turma e depois calcule a idade do mais velho e a idade do mais novo.
// Obs.: Para finalizar a leitura das idades, digite um valor negativo para idade.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, maisVelho = 0, maisNovo = 150, soma;
	
	while(idade >=0){
	printf("Qual é a sua idade?\n");
	scanf("%d",&idade);
	
	if(idade > maisVelho){
		maisVelho = idade;
	}
	if((idade < maisNovo) && (idade >= 0)){
		(maisNovo = idade);
	}
}
	soma = maisVelho + maisNovo;
	printf("O aluno mais velho tem %d anos e o mais novo tem %d anos. A soma das suas idades é de %d.", maisVelho, maisNovo, soma);
}
