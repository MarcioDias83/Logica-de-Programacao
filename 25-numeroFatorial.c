#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num, fat=1;//Fatorial recebe 1, pois caso recebesse 0, ao ser multiplicado pelo número o resultado seria 0.
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	while(num>1)//Enquanto o número digitado for maior que 1...
	{
		fat*=num;//Fatorial recebe o fatorial * o número digitado
		num-=1; //Número recebe -1 a cada término de laço
}
printf("O fatorial e: %d.", fat);
}
