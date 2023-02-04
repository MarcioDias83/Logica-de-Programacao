#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Marcio Dias e Andreina Paula

/* Uma rede de Pet Shop está fazendo um levantamento junto a moradores de um determinado bairro de Porto Alegre que possuem animais de estimação sobre seus custos mensais com seu bichinho.
Para isso contratou você para desenvolver um aplicativo que faça o cadastro dessas informações e depois imprima uma série de resultados. O número de entrevistados que deverão responder a
enquete é de 200.
O aplicativo perguntará o
- Tipo de animal : (1- Cão Pequeno, 2- Cão Grande, 3- Gato, 4- Roedor);
- Idade aproximada;
- Gasto Mensal com Alimentação;
- Gasto Mensal com higiene (Banho e Tosa);
Armazene essas informações em vetores, onde o primeiro animal cadastrado terá suas informações armazenadas no índice 0 (zero) de cada um dos vetores, o segundo animal terá suas informações
cadastradas no índice 1... e assim sucessivamente.
O programa deverá:
a) Fazer a validação de dados no campo Tipo de Animal, impedindo que sejam aceitos valores diferentes de 1, 2, 3 ou 4 ; (0,6 pt)
b) Mostrar a contagem do número de Cães Pequenos e Gatos (separadamente); (0,6 pt)
c) Mostrar a média de idade de todos os Cães(todos) (0,6 pt)
d) Guardar em outro vetor somente os Gastos Mensais de Roedores com Alimentação; (0,6 pt)
e) Mostrar o maior e menor valor com Higiene (Geral) (0,6 pt)*/

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int entrevistados, contador = 1, TipoAnimal, CaoPequeno = 0, CaoGrande, Gato = 0, Roedor;
	float idade, GastoAlimentacao, GastoHigiene, MedIdadeCaes, MaiorValor = 0, vetor[entrevistados], MenorValor = 9999, SomaTotal, SomaCP, SomaCG;

	printf("Quantas pessoas serão entrevistadas? (Ex.: 200)\n"); // Essa parte do código foi feita para simplificar os testes.
	scanf("%d", &entrevistados);
	system("cls");

	while (contador <= entrevistados)
	{

		do
		{
			printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
			printf("Qual é o tipo de PET?\n");
			printf("1 - Cão Pequeno\n");
			printf("2 - Cão Grande\n");
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
				printf("Opção inválida. Digite uma opção válida!\n\n");
			}
		} while (TipoAnimal < 0 || TipoAnimal > 4);

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual é a idade aproximada do PET?\n");
		scanf("%f", &idade);
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual é o seu gasto mensal com alimentação?\nR$ ");
		scanf("%f", &GastoAlimentacao);
		if (TipoAnimal == 4)
		{
			vetor[entrevistados] += GastoAlimentacao;
		}
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual é o seu gasto mensal com higiene? (Banho e tosa)\nR$ ");
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
	printf("A quantidade de cães pequenos é de %d e de gatos é de %d.\n", CaoPequeno, Gato);
	printf("A média de idade de todos os cães é de %.1f anos.\n", MedIdadeCaes);
	printf("O valor da quantidade de gastos mensais com alimentação de todos os roedores é de R$ %.2f.\n", vetor[entrevistados]);
	printf("O maior valor gasto com higiene foi de R$ %.2f e o menor valor foi de R$ %.2f.\n", MaiorValor, MenorValor);
}
