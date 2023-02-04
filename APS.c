#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Um instituto de Porto Alegre deseja fazer um levantamento sobre dados clim�ticos na cidade de Porto Algre. Para isso, voc� foi contratado para cria��o de
// um c�digo na linguagem C para ler a temperatura e o clima (1- Ensolarado, 2- Nublado e 3- Chuvoso) de todos os dias do ano.
// Esse programa dever� informar no final:
// a)Menor e Maior temperatura do ano
// b)Temperatura m�dia anual
// c)O n�mero de dias que a temperatura foi superior a 30�:
// d) N�mero de dias chuvosos

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int clima, contador = 1, contEnsolarado, contNublado, contChuvoso, soma = 0, acimaDe30 = 0, dias;
	float temperatura, menorTemperatura = 100, maiorTemperatura, media;

	printf("Estat�sticas do clima.\n");
	printf("by Marcio Dias\n\n");
	printf("Digite a quantidade de dias que voc� deseja saber as estat�sticas: (Ex.: 365)\n");
	scanf("%d", &dias);
	system("cls");

	while (contador <= dias)
	{
		printf("Estat�sticas do clima.\n");
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
			printf("Op��o inv�lida");
		}
		
		soma += temperatura;
		contador++;
	}

	media = soma / dias;
	
	printf("Estat�sticas do clima no per�odo solicitado.\n\n");
	printf("Menor temperatura: %.1f�.\n", menorTemperatura);
	printf("Maior temperatura: %.1f�.\n", maiorTemperatura);
	printf("Dias chuvosos: %d dias.\n", contChuvoso);
	printf("Temperatura m�dia anual: %.1f�.\n", (float)media);
	printf("Temperatura acima de 30�: %d dias.", acimaDe30);
}
