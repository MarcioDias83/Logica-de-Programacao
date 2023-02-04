#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Dados tr�s valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo, se forem, verificar se comp�e um tri�ngulo equil�tero, is�celes ou escaleno.
// Informar se n�o compusere nenhum tri�ngulo.
// Dados de entrada: tr�s lados de um suposto tri�ngulo (A,B C).
// Dados de sa�da - mensagens: n�o comp�es tri�ngulo, triangulo equil�tero, tri�ngulo is�celes, tri�ngulo escaleno.

// O que � um tri�ngulo?
// Resposta: figura geom�trica fechada de tr�s lados, em que cada um � menor que a soma dos outros dois.

// O que � um tri�ngulo equil�tero?
// Resposta: Um tri�ngulo com tr�s lados iguais.

// O que � um tri�ngulo is�celes?
// Resposta: Um tri�ngulo com dois lados iguais.

// O que � um tri�ngulo escaleno?
// Resposta: Um tri�ngulo com todos os lados diferentes.

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
            printf("Esse � um tri�ngulo equil�tero.");
        }

        else if (a == b || b == c || a == c)
        {
            printf("Esse � um tri�ngulo is�celes.");
        }

        else
        {
            printf("Esse � um tri�ngulo escaleno.");
        }
	}
        else
		{
            printf("N�o � um tri�ngulo");
        }	
    }
