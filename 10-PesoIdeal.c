#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa em algoritmo que calcule seu peso ideal, utilizando as seguintes f�rmulas:

//para homens: (72.7 * altura) - 58;
//para mulheres: (62.1 * altura) - 44.7;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float altura, pesoIdeal;
	int sexo;
	
	printf("Qual � a sua altura?\n");
	scanf("%f", &altura);
	system("cls");	
	printf("Qual � o seu sexo?\n");
	printf("1 - Masculino\n");
	printf("2 - Feminino\n\n");
	scanf("%f", &sexo);
	system("cls");
	
	if(sexo==1)
	{
		pesoIdeal = 72.7 * altura - 58;
		printf("Seu peso ideal � %.1f.",pesoIdeal);
	} 
	
	else
	{
	pesoIdeal = 62.1 * altura - 44.7;
		printf("Seu peso ideal � %.1f.",pesoIdeal);
	}
}
