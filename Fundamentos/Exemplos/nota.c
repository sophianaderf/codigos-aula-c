#include <stdio.h>
int main() {

    // variáveis
    int atv1 = 0;
    int atv2 = 0;

    printf("Qual a nota da atividade 1?");
    scanf("%i", &atv1);

    printf("Qual a nota da atividade 2?");
    scanf("%i", &atv2);

    // processamento
    int total_atvs = atv1 + atv2;

    // saída
    printf("A soma das atividades e %i", total_atvs);
    
    return 0;
}