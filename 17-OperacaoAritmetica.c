#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo que leia o valor de dois números inteiros e a operação aritmética 
// desejada; calcule, então, a resposta adequada. Utilize os símbolos da tabela a seguir 
// para ler qual a operação aritmética escolhida:

// Símbolos			Operação aritmética
//	+					Adição
// 	-					Subtração
// 	*					Multiplicação
// 	/					Divisão

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2;
	int operacao;
	
	printf("Qual é o valor 1?\n");
	scanf("%f", &valor1);
	printf("\nQual será o operador?\n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão\n\n");
	scanf("%d", &operacao);
	printf("\nQual é o valor 2?\n");
	scanf("%f", &valor2);
	
	switch(operacao){
		case 1:
			printf("\nA soma entre o primeiro e o segundo valor é %.2f.", valor1 + valor2);break;
		case 2:
			printf("\nA subtração entre o primeiro e o segundo valor é %.2f.", valor1 - valor2);break;
		case 3:
			printf("\nA multiplicação entre o primeiro e o segundo valor é %.2f.", valor1 * valor2);break;
		case 4:
			printf("\nA divisão entre o primeiro e o segundo valor é %.2f.", valor1 / valor2);break;
		default:
			printf("\nOperação inválida!");
	}
}
