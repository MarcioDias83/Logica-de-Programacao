#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia um número inteiro e imprima seu antecessor e seu sucessor.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero, antecessor, sucessor;
	
	printf("Digite um número!\n");
	scanf("%d",&numero);
	antecessor = numero - 1;
	sucessor = numero + 1;
	printf("O antecessor de %d é %d, e o sucessor é %d.", numero, antecessor, sucessor);

}
