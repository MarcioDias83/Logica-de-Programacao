#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir da escolha
// do usuário que deverá informar o prato, a sobremesa e bebida (veja a tabela a seguir).

//			PRATO							SOBREMESA						BEBIDA
//		Vegetariano 180cal				Abacaxi 75cal					Chá 20cal
//		Peixe 230cal					Sorvete diet 110cal				Suco de laranja 70cal
//		Frango 250cal					Mousse diet 170cal				Suco de melão 100cal
//		Carne 350cal					Mousse chocolate 200cal			Refrigerante diet 65cal

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int prato, sobremesa, bebida, total;
	
	printf("Qual prato você deseja?\n");
	printf("1 - Vegetariano\n");
	printf("2 - Peixe\n");
	printf("3 - Frango\n");
	printf("4 - Carne\n\n");
	scanf("%d",&prato);
	switch(prato){
		case 1: prato = 180;break;
		case 2: prato = 230;break;
		case 3: prato = 250;break;
		case 4: prato = 350;break;
		default: printf("Selecione uma das opções!");
	}
	
	printf("\nQual sobremesa você deseja?\n");
	printf("1 - Abacaxi\n");
	printf("2 - Sorvete diet\n");
	printf("3 - Mousse diet\n");
	printf("4 - Mousse de chocolate\n\n");
	scanf("%d",&sobremesa);
	switch(sobremesa){
		case 1: sobremesa = 75;break;
		case 2: sobremesa = 110;break;
		case 3: sobremesa = 170;break;
		case 4: sobremesa = 200;break;
		default: printf("Selecione uma das opções!");
	}
	
	printf("\nQual bebida você deseja?\n");
	printf("1 - Chá\n");
	printf("2 - Suco de laranja\n");
	printf("3 - Suco de melão\n");
	printf("4 - Refrigerante diet\n\n");
	scanf("%d",&bebida);
	switch(bebida){
		case 1: bebida = 20;break;
		case 2: bebida = 70;break;
		case 3: bebida = 100;break;
		case 4: bebida = 65;break;
		default: printf("Selecione uma das opções!");
	}
	total = prato + sobremesa + bebida;
	printf("\nO total de calorias da sua refeição é de %d cal.", total);
}
