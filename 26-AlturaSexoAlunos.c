//Crie um programa em C que leia a altura e o sexo de 20 alunos (1- Masc. 2-Fem.) e informe :
//a) Número de alunos
//b) Número de alunas
//c) Média de altura dos alunos
//d) Média de altura das alunas

#include <stdio.h>

int main() {
    int i = 1, sexo, num_alunos = 0, num_alunas = 0;
    float altura, media_altura_alunos = 0.0, media_altura_alunas = 0.0;

    while (i <= 20) {
        printf("Digite a altura (em metros) e o sexo (1-Masc. 2-Fem.) do aluno %d: ", i);
        scanf("%f %d", &altura, &sexo);
        
        if (sexo == 1) { // se for masculino
            num_alunos++;
            media_altura_alunos += altura;
        } else if (sexo == 2) { // se for feminino
            num_alunas++;
            media_altura_alunas += altura;
        }
        
        i++;
    }

    media_altura_alunos /= num_alunos;
    media_altura_alunas /= num_alunas;

    printf("Numero de alunos: %d\n", num_alunos);
    printf("Numero de alunas: %d\n", num_alunas);
    printf("Media de altura dos alunos: %.2f metros\n", media_altura_alunos);
    printf("Media de altura das alunas: %.2f metros\n", media_altura_alunas);

    return 0;
}
