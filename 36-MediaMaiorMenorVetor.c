#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa em C que leia um vetor de 10 posi��es de n�meros inteiros e informe:
// a) M�dia
// b) Maior valor
// c) Menor valor

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num[10], maior = 0, menor = 9999;
	float media = 0, somatorio = 0;
	
	for(cont = 0; cont < 10; cont++)
	{
		printf("Digite um n�mero:\n");
		scanf("%d",&num[cont]);
		somatorio += num[cont];
		
		if(num[cont]>maior)
		{
			maior = num[cont];
		}
		
		if(num[cont]<menor)
		{
			menor = num[cont];
		}
		
	}
	media = somatorio / 10;
	printf("A m�dia � %.2f.\n", media);
	printf("O menor n�mero � %d.", menor);
	printf("O maior n�mero � %d.", maior);
}

