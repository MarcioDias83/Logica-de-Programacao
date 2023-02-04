#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Um instituto de Porto Alegre deseja fazer um levantamento sobre dados climáticos na cidade de Porto Algre. Para isso, você foi contratado para criação de
// um código na linguagem C para ler a temperatura e o clima (1- Ensolarado, 2- Nublado e 3- Chuvoso) de todos os dias do ano.
// Esse programa deverá informar no final:
// a)Menor e Maior temperatura do ano
// b)Temperatura média anual
// c)O número de dias que a temperatura foi superior a 30º:
// d) Número de dias chuvosos

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int clima, contador = 1, contEnsolarado, contNublado, contChuvoso, soma = 0, acimaDe30 = 0, dias;
	float temperatura, menorTemperatura = 100, maiorTemperatura, media;

	printf("Estatísticas do clima.\n");
	printf("by Marcio Dias\n\n");
	printf("Digite a quantidade de dias que você deseja saber as estatísticas: (Ex.: 365)\n");
	scanf("%d", &dias);
	system("cls");

	while (contador <= dias)
	{
		printf("Estatísticas do clima.\n");
		printf("by Marcio Dias\n\n");
		printf("Dia %d de %d.\n\n", contador, dias);
		printf("Digite o clima do dia:\n");
		printf("1- Ensolarado\n");
		printf("2- Nublado\n");
		printf("3- Chuvoso\n\n");
		scanf("%d", &clima);
		printf("\nDigite a temperatura do dia:\n");
		scanf("%f", &temperatura);
		system("cls");

		if (temperatura > maiorTemperatura)
		{
			maiorTemperatura = temperatura;
			if (temperatura > 30)
			{
				acimaDe30++;
			}
		}

		if (temperatura < menorTemperatura)
		{
			(menorTemperatura = temperatura);
		}

		switch (clima)
		{
		/*case 1:
			clima = 1;
			contEnsolarado += 1;
			break;
		case 2:
			clima = 2;
			contNublado += 1;
			break;*/
		case 3:
			clima = 3;
			contChuvoso += 1;
			break;
		default:
			printf("Opção inválida");
		}
		
		soma += temperatura;
		contador++;
	}

	media = soma / dias;
	
	printf("Estatísticas do clima no período solicitado.\n\n");
	printf("Menor temperatura: %.1fº.\n", menorTemperatura);
	printf("Maior temperatura: %.1fº.\n", maiorTemperatura);
	printf("Dias chuvosos: %d dias.\n", contChuvoso);
	printf("Temperatura média anual: %.1fº.\n", (float)media);
	printf("Temperatura acima de 30º: %d dias.", acimaDe30);
}
