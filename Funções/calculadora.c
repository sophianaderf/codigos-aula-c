#include <stdio.h>
#include <locale.h>

void calcular(int op, float n1, float n2) {
    if (op == 1) {
        printf("Resultado = %.2f\n", n1 + n2);
    }
    else if (op == 2) {
        printf("Resultado = %.2f\n", n1 - n2);
    }
    else if (op == 3) {
        printf("Resultado = %.2f\n", n1 * n2);
    }
    else if (op == 4) {
        if (n2 != 0) {
            printf("Resultado = %.2f\n", n1 / n2);
        } else {
            printf("Erro: divisão por zero!\n");
        }
    }
    else {
        printf("Operação inválida!\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int op;
    float n1, n2;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Escolha a operação: ");
    scanf("%d", &op);

    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);

    calcular(op, n1, n2);

    return 0;
}