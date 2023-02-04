#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont,cont2,tam=0; // declaração da variavel index's e da variavel que receberá o tamanho da string
    char frase[100],conversao[100]; // declaração de vetores

    printf("Digite uma frase: ");
    gets(frase); // ler a string incluindo o espaço
    printf("\n");

    tam = strlen(frase); // a funcao strlen() lê o tamanho da string e atribui a variavel tam.

    for (cont=0,cont2=0;cont<=tam;cont++) // inicio do laco de repeticao
    {
        conversao[cont2]=frase[cont]; // conversao na posicao j recebendo frase na posicao i
        conversao[cont2+1]=frase[cont]; // conversao na posicao j+1 recebendo frase na posicao i novamente.
        cont2=cont2+2; // a cada dois caracteres o vetor conversao na posicao j tera de receber frase na posicao i duas vezes
               // portanto, faz-se necessário que j pule duas posições para que conversao na posicao j não seja substituido por frase na posicao i
    }

    printf("A String modificada e: %s",conversao); // resultado final

}
