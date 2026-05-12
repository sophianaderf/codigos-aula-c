#include <stdio.h>

int main() {

    int inicio = 0;
    int fim = 0;

    printf("Digite um numero maior que 0: ");
    scanf("%i", &inicio);

    if (inicio < 0 ) {
        printf("Numero invalido, fim");

    } else {
        printf("Qual o numero final maior que %i: " , inicio);
        scanf("%i", &fim);

    }

    if (fim > inicio) {
      for (int i= inicio; i <= fim; i++){
            printf("Numero %i \n", i);
        }
    } else {
        printf("Numeros invalidos, fim");
        printf("Inicio %i, fim %i", inicio, fim);
    }

    return 0;
}