#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	float Nota1, Nota2, Nota3, Nota4, Soma, Media;
	
	Soma = 0;
	Media = 0;
	
	printf("Informe a primeira nota:\n");
	scanf("%f",&Nota1);
	printf("Informe a segunda nota:\n");
	scanf("%f",&Nota2);
	printf("Informe a terceira nota:\n");
	scanf("%f",&Nota3);
	printf("Informe a quarta nota:\n");
	scanf("%f",&Nota4);
	Soma= Nota1 + Nota2 + Nota3 + Nota4;
	Media= Soma / 4;
	printf("Sua média foi: %.2f\n",Media);
}
