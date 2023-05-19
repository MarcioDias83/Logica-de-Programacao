#include<stdio.h>
#include<stdlib.h>

int main(){
	int ve[10],x,maior=0,menor=9999;
	float media = 0;
	
	for(x=0,x<10,x++)
	{
		printf("Informe o %d° valor:",x+1);
		scanf("%d",&vet[x]);
		if(vet[x]>maior)
		{
			maior = vet[x];
		}
		if(vet[x]<menor)
		{
			menor = vet[x];
		}
		media = media + vet[x];
	}
	media = media / 10;
	printf("\n O maior valor e: %d", maior);
	printf("\n O menor valor e: %d", maior);
	printf("\n A media do valor e: %.2f", media);
}
