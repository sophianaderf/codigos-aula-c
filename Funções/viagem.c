#include <stdio.h>
#include <locale.h>
int main() {
    float distancia = 0;
    float  consumo;
    float precoGasolina
    float precoEtanol;
    float gastoGasolina, gastoEtanol;
    float litrosNecessarios;

    printf("---Cálculo de gasto de combustível---\n");

    printf("Digite a distância da viagem (km): ");
    scanf("%f", &distancia);

    printf("Digite o consumo do veiculo (km/L): ");
    scanf("%f", &consumo);

    printf("Digite o preco da gasolina (R$): ");
    scanf("%f", &precoGasolina);

    printf("Digite o preco do etanol (R$): ");
    scanf("%f", &precoEtanol);

    litrosNecessarios = distancia / consumo;

    gastoGasolina = litrosNecessarios * precoGasolina;
    gastoEtanol = litrosNecessarios * precoEtanol;

    printf("\n--- Final ---\n");
    printf("Litros necessarios: %.2f L\n", litrosNecessarios);
    printf("Gasto com gasolina: R$ %.2f\n", gastoGasolina);
    printf("Gasto com etanol: R$ %.2f\n", gastoEtanol);

    if (gastoGasolina < gastoEtanol) {
        printf("A gasolina é a opcao mais vantajosa.\n");
    } else if (gastoEtanol < gastoGasolina) {
        printf("O etanol é a opcao mais vantajosa.\n");
    } else {
        printf("As duas opções possuem o mesmo custo.\n");
    }

    return 0;
}