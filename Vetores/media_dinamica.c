#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    float media;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;

    printf("\nA media final e de: %.2f\n", media);

    return 0;
}