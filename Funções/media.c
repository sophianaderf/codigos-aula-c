#include <stdio.h>
#include <locale.h>

void ola() {
    printf("Seja bem vindo!");
}

void calcularMedia(float n1, float n2) {
    float media = (n1 + n2) / 2;
    printf("\nSua média é de: %.2f", media);

}

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");
    
    ola(); // Executando a função

    float n1 = 0;
    float n2 = 0;

    printf("Insira a nota da primeira avaliação: ");
    scanf("%f", &n1);

    printf("Insira a nota da segunda avaliação: ");
    scanf("%f", &n2);

    calcularMedia(n1, n2);

    return 0;
}