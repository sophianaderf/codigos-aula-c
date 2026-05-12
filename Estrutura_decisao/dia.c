#include <stdio.h>

int main () {
    int dia = 0;

    printf("Qual dia da semana? (dom->0, sex->6)");
    scanf("%i", &dia);

    if (dia == 0) {
        printf("Domingo e so alegria");
    } else if (dia == 1) {
        printf("Segunda feira, dia de SESI");
    } else if (dia == 2) {
        printf("Terca feira, dia de SENAI");
    }
      else if (dia == 3) {
        printf("Quarta feira, dia de SENAI");
    
    } else if (dia == 4) {
        printf("Quinta feira, dia de SESI");

    } else if (dia == 5) {
        printf("Sexta feira, dia de SESI");
    } else if (dia == 6) {
        printf("Sabado, dia de descansar!");
    } else {
        printf("Dia nao encontrado");
    }
    return 0;
}