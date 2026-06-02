#include <stdio.h>
#include <locale.h>

float calcular(int op, float n1, float n2) {
    if (op == 1) {
        return n1 + n2;
    } else if (op == 2) {
        return n1 - n2;
    } else if (op == 3) {
        return n1 * n2;
    } else if (op == 4) {
        return n1 / n2;
    }

    return 0;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int op;
    float n1, n2;

    printf("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
    printf("Escolha a operação: ");
    scanf("%d", &op);

    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);

    printf("Resultado = %.2f\n", calcular(op, n1, n2));

    return 0;
}