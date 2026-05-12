#include <stdio.h>

int main() {
    printf("Vamos calcular as notas do aluno");

    int qtNotas = 0;
    float nota = 0;
    float totalNotas = 0;
    float mediaFinal = 0;

    printf("\n Quantas notas deseja calcular?");
    scanf("%i", &qtNotas);

    for (int i=0; i < qtNotas; i++) {
        printf("\n Qual a nota do aluno?");
        scanf("%f", &nota);

        //totalNotas += nota;
        totalNotas = totalNotas + nota;
    }

    mediaFinal = totalNotas / qtNotas;

    printf("A media final e %.2f", mediaFinal);

    if (mediaFinal >= 6) {
        printf("\n Aprovado");
    
    } else {
        printf("\n Reprovado");
    }

        return 0;
}