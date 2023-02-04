#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo que leia o valor de dois n�meros inteiros e a opera��o aritm�tica 
// desejada; calcule, ent�o, a resposta adequada. Utilize os s�mbolos da tabela a seguir 
// para ler qual a opera��o aritm�tica escolhida:

// S�mbolos			Opera��o aritm�tica
//	+					Adi��o
// 	-					Subtra��o
// 	*					Multiplica��o
// 	/					Divis�o

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2;
	int operacao;
	
	printf("Qual � o valor 1?\n");
	scanf("%f", &valor1);
	printf("\nQual ser� o operador?\n1 - Soma \n2 - Subtra��o \n3 - Multiplica��o \n4 - Divis�o\n\n");
	scanf("%d", &operacao);
	printf("\nQual � o valor 2?\n");
	scanf("%f", &valor2);
	
	switch(operacao){
		case 1:
			printf("\nA soma entre o primeiro e o segundo valor � %.2f.", valor1 + valor2);break;
		case 2:
			printf("\nA subtra��o entre o primeiro e o segundo valor � %.2f.", valor1 - valor2);break;
		case 3:
			printf("\nA multiplica��o entre o primeiro e o segundo valor � %.2f.", valor1 * valor2);break;
		case 4:
			printf("\nA divis�o entre o primeiro e o segundo valor � %.2f.", valor1 / valor2);break;
		default:
			printf("\nOpera��o inv�lida!");
	}
}
