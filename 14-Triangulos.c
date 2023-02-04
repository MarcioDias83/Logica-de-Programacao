#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Dados três valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um triângulo, se forem, verificar se compõe um triângulo equilátero, isóceles ou escaleno.
// Informar se não compusere nenhum triângulo.
// Dados de entrada: três lados de um suposto triângulo (A,B C).
// Dados de saída - mensagens: não compões triângulo, triangulo equilátero, triângulo isóceles, triângulo escaleno.

// O que é um triângulo?
// Resposta: figura geométrica fechada de três lados, em que cada um é menor que a soma dos outros dois.

// O que é um triângulo equilátero?
// Resposta: Um triângulo com três lados iguais.

// O que é um triângulo isóceles?
// Resposta: Um triângulo com dois lados iguais.

// O que é um triângulo escaleno?
// Resposta: Um triângulo com todos os lados diferentes.

int main()
{	
	setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    a = 0;
    b = 0;
    c = 0;

    printf("Digite o valor do lado A!\n");
    scanf("%f", &a);
    printf("Digite o valor do lado B!\n");
    scanf("%f", &b);
    printf("Digite o valor do lado C!\n");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("Esse é um triângulo equilátero.");
        }

        else if (a == b || b == c || a == c)
        {
            printf("Esse é um triângulo isóceles.");
        }

        else
        {
            printf("Esse é um triângulo escaleno.");
        }
	}
        else
		{
            printf("Não é um triângulo");
        }	
    }
