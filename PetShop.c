#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Marcio Dias e Andreina Paula

/* Uma rede de Pet Shop est� fazendo um levantamento junto a moradores de um determinado bairro de Porto Alegre que possuem animais de estima��o sobre seus custos mensais com seu bichinho.
Para isso contratou voc� para desenvolver um aplicativo que fa�a o cadastro dessas informa��es e depois imprima uma s�rie de resultados. O n�mero de entrevistados que dever�o responder a
enquete � de 200.
O aplicativo perguntar� o
- Tipo de animal : (1- C�o Pequeno, 2- C�o Grande, 3- Gato, 4- Roedor);
- Idade aproximada;
- Gasto Mensal com Alimenta��o;
- Gasto Mensal com higiene (Banho e Tosa);
Armazene essas informa��es em vetores, onde o primeiro animal cadastrado ter� suas informa��es armazenadas no �ndice 0 (zero) de cada um dos vetores, o segundo animal ter� suas informa��es
cadastradas no �ndice 1... e assim sucessivamente.
O programa dever�:
a) Fazer a valida��o de dados no campo Tipo de Animal, impedindo que sejam aceitos valores diferentes de 1, 2, 3 ou 4 ; (0,6 pt)
b) Mostrar a contagem do n�mero de C�es Pequenos e Gatos (separadamente); (0,6 pt)
c) Mostrar a m�dia de idade de todos os C�es(todos) (0,6 pt)
d) Guardar em outro vetor somente os Gastos Mensais de Roedores com Alimenta��o; (0,6 pt)
e) Mostrar o maior e menor valor com Higiene (Geral) (0,6 pt)*/

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int entrevistados, contador = 1, TipoAnimal, CaoPequeno = 0, CaoGrande, Gato = 0, Roedor;
	float idade, GastoAlimentacao, GastoHigiene, MedIdadeCaes, MaiorValor = 0, vetor[entrevistados], MenorValor = 9999, SomaTotal, SomaCP, SomaCG;

	printf("Quantas pessoas ser�o entrevistadas? (Ex.: 200)\n"); // Essa parte do c�digo foi feita para simplificar os testes.
	scanf("%d", &entrevistados);
	system("cls");

	while (contador <= entrevistados)
	{

		do
		{
			printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
			printf("Qual � o tipo de PET?\n");
			printf("1 - C�o Pequeno\n");
			printf("2 - C�o Grande\n");
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
				printf("Op��o inv�lida. Digite uma op��o v�lida!\n\n");
			}
		} while (TipoAnimal < 0 || TipoAnimal > 4);

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual � a idade aproximada do PET?\n");
		scanf("%f", &idade);
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual � o seu gasto mensal com alimenta��o?\nR$ ");
		scanf("%f", &GastoAlimentacao);
		if (TipoAnimal == 4)
		{
			vetor[entrevistados] += GastoAlimentacao;
		}
		system("cls");

		printf("Entrevistado %d de %d.\n\n", contador, entrevistados);
		printf("Qual � o seu gasto mensal com higiene? (Banho e tosa)\nR$ ");
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
	printf("A quantidade de c�es pequenos � de %d e de gatos � de %d.\n", CaoPequeno, Gato);
	printf("A m�dia de idade de todos os c�es � de %.1f anos.\n", MedIdadeCaes);
	printf("O valor da quantidade de gastos mensais com alimenta��o de todos os roedores � de R$ %.2f.\n", vetor[entrevistados]);
	printf("O maior valor gasto com higiene foi de R$ %.2f e o menor valor foi de R$ %.2f.\n", MaiorValor, MenorValor);
}
