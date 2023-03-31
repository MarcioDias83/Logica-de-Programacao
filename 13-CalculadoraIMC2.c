#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia altura e massa e calcule o IMC (Índice de Massa Corpórea). Sabendo que a fórmula é: IMC = massa/ (altura*altura).

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float Peso, Altura, IMC;

    printf("Informe o seu peso!\n");
    scanf("%f", &Peso);
    printf("Informe a sua altura!\n");
    scanf("%f", &Altura);
    IMC = Peso / (Altura * Altura);

	if (IMC >= 30)
    {
        printf("O seu IMC é de %.1f. Voce esta obeso.",IMC);
    }
    
    else if ((IMC >= 25) && (IMC < 30))
    {
        printf("O seu IMC é de %.1f. Voce esta acima do peso.",IMC);
    }
    
    else if ((IMC >= 18.5) && (IMC < 25))
    {
        printf("O seu IMC é de %.1f. Voce esta com o peso normal.",IMC);
    }
    
    else
    {
        printf("O seu IMC é de %.1f. Voce esta abaixo do peso.",IMC);
    }
}
