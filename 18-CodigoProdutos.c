// Contrua um algoritmo que, tendo como dados de entrada o preço de um produto e seu código 
// de origem, mostre o preço junto a sua procedência. Caso o código não seja nenhum dos 
//especificados, o produto deve ser encarado como importado. Siga a tabela de códigos a seguir:

// Código de origem				Procedência
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

	printf("Qual é o valor do produto?\nR$ ");
	scanf("%f",&preco);
	printf("Qual é o código do produto?\n");
	scanf("%d",&codigo);
	switch(codigo){
	
	case 1:
		printf("O valor do produto é de R$ %.2f e vem da região Sul.",preco);break;
	case 2:
		printf("O valor do produto é de R$ %.2f e vem da região Norte.",preco);break;
	case 3:
		printf("O valor do produto é de R$ %.2f e vem da região Leste.",preco);break;
	case 4:
		printf("O valor do produto é de R$ %.2f e vem da região Oeste.",preco);break;
	default:
		printf("O valor do produto é de R$ %.2f e é importado.",preco);
	}
}
