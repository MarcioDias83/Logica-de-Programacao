#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia altura e massa e calcule o IMC (�ndice de Massa Corp�rea). Sabendo que a f�rmula �: IMC = massa/ (altura*altura).

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
        printf("O seu IMC � de %.2f. Voce esta obeso.",IMC);
    }
    
    else if ((IMC >= 25) && (IMC < 30))
    {
        printf("O seu IMC � de %.2f. Voce esta acima do peso.",IMC);
    }
    
    else if ((IMC >= 18.5) && (IMC < 25))
    {
        printf("O seu IMC � de %.2f. Voce esta com o peso normal.",IMC);
    }
    
    else if (IMC < 18,5)
    {
        printf("O seu IMC � de %.2f. Voce esta abaixo do peso.",IMC);
    }
}
