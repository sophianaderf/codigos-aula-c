#include <stdio.h>

int main () {
    float valorLancheRodeio = 0;
    float valorBatata = 0;
    float valorRefriCoca = 0;
    float valorSorvete = 0;

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual o valor da batata?");
    scanf("%f", &valorBatata);

    printf("Qual o valor do refrigerante?");
    scanf("%f", &valorRefriCoca);

    printf("Qual o valor da sobremesa?");
    scanf("%f", &valorSorvete);

    float total = valorLancheRodeio + valorBatata + valorRefriCoca + valorSorvete;

    if (total <40) {
     printf("O valor ficoiu barato R$ %.2f", total);

    C (total >=40 && total <=55) {
     printf("O valor ficou razoavel R$ %.2f", total);

    }else if (total > 55) {
     printf("O valor ficou caro R$ %.2f", total);
    }

    return 0;
}