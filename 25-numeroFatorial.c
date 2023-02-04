// Crie um programa em C que leia um número inteiro e imprima o fatorial desse número.
// Ex.: fatorial de 5 = 5*4*3*2*1, ou seja 120

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, fatorial;
	
	printf("Digite um numero!\n");
	scanf("%d",&numero);
	fatorial = 1;
	
	while(numero > 1){
		
		fatorial = fatorial * numero;
		numero -= 1; 
}
	printf("\nO fatorial desse numero e %d.",fatorial);
}
