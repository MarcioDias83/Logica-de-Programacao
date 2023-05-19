#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[20],somaP=0, somaI=0,x,y=0;
	int vet5[20];
	for(x=0;x<10;x++)
	{
		printf("Informe o %do numero:",x+1);
		scanf("%d",&vet[x]);
		if(vet[x]%2==0)
		{
			somaP = somaP + vet[x];
		}
		else
		{
			somaI = somaI + vet[x];
		}
		if(vet[x]%5==0)
		{
			vet5[y] = vet[x];
			y++;
		}
	}
	printf("A soma dos pares e %d",somaP);
	printf("A soma dos impares e %d",somaI);
	for(x=0;x<y;x++)
	{
		printf("%d - ",vet5[x]);
	}
}
	printf("Media: %f ", mediag);
}
