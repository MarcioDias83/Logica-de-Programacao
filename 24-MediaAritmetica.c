// Crie um programa em C que leia dois números pares positivos e imprima a média aritmética de todos os pares entre eles.

#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int numero1, numero2, soma = 0, cont=0, media;
  
	printf ("Qual e o primeiro numero?\n");
	scanf ("%d", &numero1);
	printf ("Qual e o segundo numero?\n");
	scanf ("%d", &numero2);

    // incrementa o primeiro número em 2
    numero1 += 2;

    // soma todos os números pares entre os dois números informados
    while(numero1 < numero2) {
        soma += numero1;
        numero1 += 2;
        cont++;
    }
    media = soma/cont;
	printf("\nA media de todos os pares entre primeiro e o segundo numero e %d.", media);
}

