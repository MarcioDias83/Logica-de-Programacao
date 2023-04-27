#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1, numero2, contador = 0;
	
	printf("Qual e o primeiro numero?\n");
	scanf("%d",&numero1);
	printf("Qual e o segundo numero?\n");
	scanf("%d",&numero2);
	
	numero1+=2; //Acrescenta +2 ao número 1 antes de entrar no laço de repetição
	
	while(numero1 < numero2)
	{
		if(numero1 < 0 || numero2 < 0){
			printf("Use somente numeros positivos!");break;
		}
	printf("%d\n", numero1);
	numero1 = numero1 + 2;
	contador = contador + 1;
	}
}

//if (contador == 0)
//printf("O bloco nao foi repetido.");
//else
//printf("O bloco foi repetido %d vezes.", contador);
