#include<stdio.h>
#include<stdlib.h>

int main()
{
	int contLivros = 0, formato, genero, origem, contF = 0, contD = 0, contQ = 0, Mais50;
	float = valor, pF = 0, pD = 0, pQ = 0;
	
	while(conLivros < 500)
	{
		printf("Informe o formato (1 - Livro Fisico 2 - Livro Digital 3 - Quadrinhos):\n");
		scanf("%d",&formato);
		printf("Informe o genero (1 - Ficcao 2 - Aventura 3 - Drama):\n");
		scanf("%d",&genero);
		printf("Informe a origem (1 - Nacional 2 - Importado):\n");
		scanf("%d",&origem);
		printf("Informe o valor:\n ");
		scanf("%f",&valor);
		
		switch(formato)
		{
			case 1 : contF++; break;
			case 2 : contD++; break;
			case 3 : contQ++;
		}
		if(origem == 1){
			Nac++;
		}
		contLivros++;
	}
	printf(" %d livros fisicos, %d livros digitais e %d Quadrinhos\n", contF, contD, contQ);
	pF = (float)contF/500*100;
	pD = (float)contF/500*100;
	pQ = (float)contF/500*100;
	printf(" %.2f%% livros fisicos, %.2f%% livros digitais e %d Quadrinhos\n", pF, pD, pQ);
	printf(" %d Obras nacionais\n", Nac);
	print(" %d Obras mais caras que R$ 50",Mais50);
	
}
