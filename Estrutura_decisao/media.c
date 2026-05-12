#include <stdio.h> 

   int main() {
     int nota = 0;
     int faltas = 0;
     int ead = 0;

     printf("Qual a nota final do aluno?");
     scanf("%i", &nota);

     printf("Quantas faltas o aluno teve:");
     scanf("%i", &faltas);

     printf("Qual a porcentagem atingida pelo aluno no curso EAD?");
     scanf("%i", &ead);

     if(nota >= 50 && faltas <= 25 && ead == 100) {
        printf("Voce passou de ano, parabens!");

    } else {
        printf("Voce reprovou, estude mais.");
    }
    return 0;
    
}


