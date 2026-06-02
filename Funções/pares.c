#include <stdio.h>
#include <locale.h>

void calcular(int inicio, int fim) {
    int numero;

    if (inicio % 2 != 0) {
        inicio++;
    }

    for (numero = inicio; numero <= fim; numero += 2) {
        printf("%d\n", numero);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    calcular(1, 20);

    return 0;
}
