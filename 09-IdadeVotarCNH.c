#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e, também, 
// verifique e mostre se ela já tem idade para votar (16 anos ou mais) e para conseguir a Carteira de habilitação (16 anos ou mais).

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, anoAtual, idade;
	
	idade = 0;
	anoAtual = 2022;
	
	printf("Qual é o seu ano de nascimento?\n");
	scanf("%d",&nascimento);
	idade = 2022 - nascimento;
	if(idade >= 18)
	{
		printf("Pode votar e pode tirar CNH.");
	}
	else
	{
		if(idade>=16)
		{
			printf("Você pode votar.");
		}
		else
		{
			printf("Você não pode votar, nem tirar CNH.");
		}	
	}		
}
	
	
	




