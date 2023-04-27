#include <stdio.h>
#include <stdlib.h>

/* Uma rede de Pet Shop esta fazendo um levantamento junto a moradores de um determinado bairro de Porto Alegre que possuem animais de estimacao sobre seus custos mensais com seu bichinho.
Para isso contratou voce para desenvolver um aplicativo que faca o cadastro dessas informacoes e depois imprima uma serie de resultados. O numero de entrevistados que deverao responder a
enquete e de 200.
O aplicativo perguntar? o
- Tipo de animal : (1- Cao Pequeno, 2- Cao Grande, 3- Gato, 4- Roedor);
- Idade aproximada;
- Gasto Mensal com Alimentacao;
- Gasto Mensal com higiene (Banho e Tosa);
Armazene essas informacoes em vetores, onde o primeiro animal cadastrado tera suas informacoes armazenadas no indice 0 (zero) de cada um dos vetores, o segundo animal tera suas informacoes
cadastradas no indice 1... e assim sucessivamente.
O programa devera:
a) Fazer a validacao de dados no campo Tipo de Animal, impedindo que sejam aceitos valores diferentes de 1, 2, 3 ou 4 ; (0,6 pt)
b) Mostrar a contagem do numero de Caes Pequenos e Gatos (separadamente); (0,6 pt)
c) Mostrar a media de idade de todos os Caes(todos) (0,6 pt)
d) Guardar em outro vetor somente os Gastos Mensais de Roedores com Alimentacao; (0,6 pt)
e) Mostrar o maior e menor valor com Higiene (Geral) (0,6 pt)*/

int main()
{
	int entrevistados, contador = 1, TipoAnimal, CaoPequeno = 0, CaoGrande, Gato = 0, Roedor;
	float idade, GastoAlimentacao, GastoHigiene, MedIdadeCaes, MaiorValor = 0, vetor[entrevistados], MenorValor = 9999, SomaTotal, SomaCP, SomaCG;

	printf("Quantas pessoas serao entrevistadas? (Ex.: 200)\n"); // Essa parte do codigo foi feita para simplificar os testes.
	scanf("%d", &entrevistados);
	system("cls");

	while (contador <= entrevistados)
	{

		do
		{
			printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
			printf("Qual e o tipo de PET?\n");
			printf("1 - Cao Pequeno\n");
			printf("2 - Cao Grande\n");
			printf("3 - Gato\n");
			printf("4 - Roedor\n\n");
			scanf("%d", &TipoAnimal);
			system("cls");

			switch (TipoAnimal)
			{
			case 1:
				CaoPequeno++;
				break;
			case 2:
				CaoGrande++;
				break;
			case 3:
				Gato++;
				break;
			case 4:
				Roedor++;
				break;
			default:
				printf("Opcao invalida. Digite uma opcao valida!\n\n");
			}
		} while (TipoAnimal < 0 || TipoAnimal > 4);

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual e a idade aproximada do PET?\n");
		scanf("%f", &idade);
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual e o seu gasto mensal com alimentacao?\nR$ ");
		scanf("%f", &GastoAlimentacao);
		if (TipoAnimal == 4)
		{
			vetor[entrevistados] += GastoAlimentacao;
		}
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual e o seu gasto mensal com higiene? (Banho e tosa)\nR$ ");
		scanf("%f", &GastoHigiene);
		system("cls");

		if (GastoHigiene > MaiorValor)
		{
			MaiorValor = GastoHigiene;
		}
		if (GastoHigiene < MenorValor)
		{
			(MenorValor = GastoHigiene);
		}

		if (TipoAnimal == 1)
		{
			SomaCP += idade;
		}
		if (TipoAnimal == 2)
		{
			SomaCG += idade;
		}

		SomaTotal = SomaCP + SomaCG;
		MedIdadeCaes = SomaTotal / entrevistados;
		contador++;
	}
	printf("A quantidade de caes pequenos e de %d e de gatos e de %d.\n", CaoPequeno, Gato);
	printf("A media de idade de todos os caes e de %.1f anos.\n", MedIdadeCaes);
	printf("O valor da quantidade de gastos mensais com alimentacao de todos os roedores e de R$ %.2f.\n", vetor[entrevistados]);
	printf("O maior valor gasto com higiene foi de R$ %.2f e o menor valor foi de R$ %.2f.\n", MaiorValor, MenorValor);
}
