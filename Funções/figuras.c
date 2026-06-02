#include <stdio.h>
#include <locale.h>

void formulaFiguras(int figura, float l1, float l2, float raio) {
    const float PI = 3.1415;

    if (figura == 1) {
        float circulo = PI * raio * raio;
        printf("\nÁrea do círculo = %.2f\n", circulo);
    }
    else if (figura == 2) {
        float quadrado = l1 * l2;
        printf("\nÁrea do quadrado = %.2f\n", quadrado);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int figura = 0;
    float l1 = 0;
    float l2 = 0;
    float raio = 0;

    printf("Digite 1 para círculo e 2 para quadrado: ");
    scanf("%d", &figura);

    if (figura == 1) {
        printf("Digite o raio: ");
        scanf("%f", &raio);
    } else if (figura == 2) {
        printf("Digite o lado 1: ");
        scanf("%f", &l1);

        printf("Digite o lado 2: ");
        scanf("%f", &l2);
    }

    formulaFiguras(figura, l1, l2, raio);

    return 0;
}