/*Uma revendedora de automóveis está fazendo um levantamento de automóveis e seus
valores. Faça um programa C que leia - Tipo de automóvel : (1- Popular, 2- Esportivo, 3-
Picape, 4- SUV) e o seu valor. A pesquisa será feita com 500 automóveis.
Armazene essas informações em 2 vetores, onde o primeiro automóvel corresponde ao
primeiro valor e assim sucessivamente.
O programa deverá:
a) Fazer a correta leitura das informações; (0,8 pt)
b) Imprimir a contagem de Picapes; (0,8 pt)
c) Imprimir o valor médio dos SUVs; (0,8 pt)
d) Mostrar a porcentagem de Populares do total de automóveis; (0,8pt)
e) Guardar em outro vetor e imprimir, somente os valores dos Esportivos; (0,8 pt)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carro[5], popular = 0, esportivo = 0, picape = 0, suv = 0, cont;
    float valorCarro[5], somaSUV, percentPop;

    for (cont = 1; cont < 5; cont++)
    {
        printf("%d\n",cont);
        printf("\n1 - Popular");
        printf("\n2 - Esportivo");
        printf("\n3 - Picape");
        printf("\n4 - SUV\n");
        printf("Digite o tipo do carro: ");
        scanf("%d", &carro[cont]);

        switch (carro[cont])
        {
        case 1:
            printf("Qual é o valor do popular? R$ ");
            scanf("%f", &valorCarro[cont]);
            popular++;break;
        case 2:
            printf("Qual e o valor do esportivo? R$ ");
            scanf("%f", &valorCarro[cont]);
            esportivo++;break;
        case 3:
            printf("Qual e o valor da Picape? R$ ");
            scanf("%f", &valorCarro[cont]);
            picape++;break;
        case 4:
            printf("Qual e o valor do SUV? R$ ");
            scanf("%f", &valorCarro[cont]);
            somaSUV += valorCarro[cont];
            suv++;break;
        default:
            printf("Opção inválida!\n");
            cont--;
            break;
        }
    }
    percentPop = (popular * 100) / 5;
    printf("Existem %d picapes no estoque.\n", picape);
    printf("O valor medio dos SUV's e de R$ %.2f.\n", somaSUV/suv);
    printf("Do total de carros, %.1f%% sao populares.\n", percentPop);
    printf("Valor dos carros esportivos:\n");
    for (int cont = 0; cont < 5; cont++)
    {
        if (carro[cont] == 2)
        {
            printf("R$ %.2f\n", valorCarro[cont]);
        }
    }
}