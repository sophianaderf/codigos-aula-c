#include <stdio.h>
#include <locale.h>

void calcularViagem(float distancia, float consumo, float precoGasolina, float precoEtanol) {
    float litros = 0;
    float gastoGasolina = 0;
    float gastoEtanol = 0;

    litros = distancia / consumo;

    gastoGasolina = litros * precoGasolina;
    gastoEtanol = litros * precoEtanol;

    printf("\nLitros necessários: %.2f L\n", litros);
    printf("Gasto com gasolina: R$ %.2f\n", gastoGasolina);
    printf("Gasto com etanol: R$ %.2f\n", gastoEtanol);

    if (gastoGasolina < gastoEtanol) {
        printf("A gasolina é a opção mais vantajosa.\n");
    }
    else if (gastoEtanol < gastoGasolina) {
        printf("O etanol é a opção mais vantajosa.\n");
    }
    else {
        printf("As duas opções possuem o mesmo custo.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float distancia = 0;
    float consumo = 0;
    float precoGasolina;
    float precoEtanol = 0;

    printf("Digite a distância da viagem (km): ");
    scanf("%f", &distancia);

    printf("Digite o consumo do veículo (km/L): ");
    scanf("%f", &consumo);

    printf("Digite o preço da gasolina (R$): ");
    scanf("%f", &precoGasolina);

    printf("Digite o preço do etanol (R$): ");
    scanf("%f", &precoEtanol);

    calcularViagem(distancia, consumo, precoGasolina, precoEtanol);

    return 0;
}