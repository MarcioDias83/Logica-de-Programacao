#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>

/* Crie um programa em C que leia uma frase e logo leia uma letra. A letra informada deverá ser eliminada em todas as posições que apareça nessa frase.
Ex: 
	Digite uma frase: analise e desenvolvimento de sistemas
    Digite uma letra: e
    Resultado: analis  dsnvolvimnto d sistmas */

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	char frase1[20], frase2[20]="", letra;//Nunca esquecer de inicializar a string!
	int x=0, tamanho=0, y=0;

	printf("Qual é a sua frase?\n");
	gets(frase1);
	printf("Informa uma letra!\n");
	scanf("%c",&letra);
	tamanho = strlen(frase1);
	
	for(x=0; x < tamanho; x++)
	{
		if(frase1[x]!=letra)
		{
			frase2[y] = frase1[x];
			y++;
		}
	}
	printf("Sua nova frase é %s.", frase2);
	strcpy(frase1,frase2); // Atualizar a primeira variável
}
