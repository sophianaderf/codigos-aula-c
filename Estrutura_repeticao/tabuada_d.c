#include <stdio.h>

int main() {
    int numero = 0;
    int i = 0;
    int res = 0;
    int tabuada = 0;

    do {

    printf("Qual tabuada deseja imprimir no terminal? Digite 0 para sair");
    scanf("%i", &tabuada);

    
    while (i <= 10) {
        res = i * tabuada;
        printf("\n%i X %i = %i", tabuada, i, res);
        i++;
    
    } while (tabuada == 0);
    printf("Fim.");

    return 0;
}