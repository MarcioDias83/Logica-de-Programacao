#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.
// Utilize para tal uma seleção encadeada.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int primeiro, segundo, terceiro, temporario;

	printf("Digite o primeiro valor:\n");
	scanf("%d",&primeiro);
	printf("Digite o segundo valor:\n");
	scanf("%d",&segundo);
	printf("Digite o terceiro valor:\n");
	scanf("%d",&terceiro);

    if (primeiro < terceiro) {
        temporario = terceiro;
        terceiro = primeiro;
        primeiro = temporario;
        
        	if (primeiro < segundo) {
        	temporario = segundo;
        	segundo = primeiro;
        	primeiro = temporario;
    	
    			if (segundo < terceiro) {
        		temporario = terceiro;
        		terceiro = segundo;
        		segundo = temporario;
    		}
		}
    }
    
    
    printf("Os valores invertidos são %d %d %d.", primeiro, segundo, terceiro);
}
