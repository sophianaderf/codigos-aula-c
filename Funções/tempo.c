#include <stdio.h>
#include <locale.h>

void horasCurso(int horasSemana) {
    const int meses = 5;
    int semanas = meses * 4;
    int totalHoras = horasSemana * semanas;

    printf("\nTotal de horas do curso no semestre: %d horas\n", totalHoras);
}

 int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int horasSemana;

    printf("Digite a quantidade de horas de aula por semana: ");
    scanf("%d", &horasSemana);

    horasCurso(horasSemana);

    return 0;
}