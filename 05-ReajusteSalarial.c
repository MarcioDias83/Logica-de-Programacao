#include<stdio.h>
#include<stdlib.h>

// Crie um programa que efetue o c�lculo do sal�rio l�quido de um funcion�rio. Os dados fornecidos ser�o: valor da hora t�cnica, n�mero de aulas trabalhadas no m�s e percentual de desconto do INSS.

int main (){
	
	float salario, reajuste;
	int sexo, tempo;
	
	printf("Qual e o salario do funcionario?\n");
	printf("R$ ");
	scanf("%f",&salario);
	printf("\nQual e o seu sexo?\n");
	printf("1 - Feminino\n");
	printf("2 - Masculino\n\n");
	scanf("%d",&sexo);
	printf("\nQuanto tempo voce tem de empresa?\n");
	scanf("%d",&tempo);
	
	switch(sexo){
		case 1: 
		if(tempo < 15){
		reajuste = salario / 100 * 5;
		salario += reajuste;
		if((tempo >= 15) && (tempo <= 20))
		reajuste = salario / 100 * 12;
		salario += reajuste;
	}
		else
		reajuste = salario / 100 * 25;
		salario += reajuste;
	
		case 2: 
		if(tempo < 20){
		reajuste = salario / 100 * 3;
		salario += reajuste;
		if((tempo >= 20) && (tempo <= 30))
		reajuste = salario / 100 * 13;
		salario += reajuste;
	}
		else
		reajuste = salario / 100 * 25;
		salario += reajuste;
	}
	printf("\nCom o resjuste o funcionario ira receber R$ %.2f.", salario);	
}
