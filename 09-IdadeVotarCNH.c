#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fa�a um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e, tamb�m, 
// verifique e mostre se ela j� tem idade para votar (16 anos ou mais) e para conseguir a Carteira de habilita��o (16 anos ou mais).

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, anoAtual, idade;
	
	idade = 0;
	anoAtual = 2022;
	
	printf("Qual � o seu ano de nascimento?\n");
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
			printf("Voc� pode votar.");
		}
		else
		{
			printf("Voc� n�o pode votar, nem tirar CNH.");
		}	
	}		
}
	
	
	




