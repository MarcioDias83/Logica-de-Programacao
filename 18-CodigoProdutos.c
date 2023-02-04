// Contrua um algoritmo que, tendo como dados de entrada o pre�o de um produto e seu c�digo 
// de origem, mostre o pre�o junto a sua proced�ncia. Caso o c�digo n�o seja nenhum dos 
//especificados, o produto deve ser encarado como importado. Siga a tabela de c�digos a seguir:

// C�digo de origem				Proced�ncia
// 		1							Sul
// 		2							Norte
// 		3							Leste
// 		4							Oeste

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float preco;
	int codigo, procedencia;

	printf("Qual � o valor do produto?\nR$ ");
	scanf("%f",&preco);
	printf("Qual � o c�digo do produto?\n");
	scanf("%d",&codigo);
	switch(codigo){
	
	case 1:
		printf("O valor do produto � de R$ %.2f e vem da regi�o Sul.",preco);break;
	case 2:
		printf("O valor do produto � de R$ %.2f e vem da regi�o Norte.",preco);break;
	case 3:
		printf("O valor do produto � de R$ %.2f e vem da regi�o Leste.",preco);break;
	case 4:
		printf("O valor do produto � de R$ %.2f e vem da regi�o Oeste.",preco);break;
	default:
		printf("O valor do produto � de R$ %.2f e � importado.",preco);
	}
}
