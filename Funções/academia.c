#include <stdio.h>
#include <locale.h>

void compararAcademias(int frequencia) {
    float vidaMensal = 49.99;
    float vidaAnual = 12 * 39.99;

    float saudeMensal = 59.99;
    float saudeAnual = 12 * 48.99;

    float fitMensal = 69.99;
    float fitAnual = 12 * 58.99;

    printf("\n=== PLANOS DISPONÍVEIS ===\n");

    printf("\nVIDA SAÚDE");
    printf("\nMensal: R$ %.2f", vidaMensal);
    printf("\nAnual: R$ %.2f\n", vidaAnual);

    printf("\nSAÚDE EM DIA");
    printf("\nMensal: R$ %.2f", saudeMensal);
    printf("\nAnual: R$ %.2f\n", saudeAnual);

    printf("\nFITNESS PRO");
    printf("\nMensal: R$ %.2f", fitMensal);
    printf("\nAnual: R$ %.2f\n", fitAnual);

    printf("\n=== FINAL ===\n");

    if (frequencia <= 2) {
        printf("Você treina poucas vezes por semana\n");
        printf("Recomendação: Vida Saúde (melhor custo-benefício)\n");
    }
    else if (frequencia <= 4) {
        printf("Você treina com frequência moderada\n");
        printf("Recomendação: Saúde em Dia\n");
    }
    else {
        printf("Você treina frequentemente\n");
        printf("Recomendação: Fitness Pro\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int frequencia;

    printf("Quantas vezes por semana você costuma ir à academia? ");
    scanf("%d", &frequencia);

    compararAcademias(frequencia);

    return 0;
}