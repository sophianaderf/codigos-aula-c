#include <stdio.h>
#include <stdbool.h>

int main () {

    bool comprouIngressoAntes = true;
    bool comprouIngressoNaHora = false;

    printf("Comprou o ingresso antes? 0->nao, 1->sim");
    scanf("%d", &comprouIngressoAntes);

    printf("Comprou o ingresso na hora? 0->nao, 1->sim");
    scanf("%d", &comprouIngressoNaHora);


    if (comprouIngressoAntes || comprouIngressoNaHora) {
        printf("Vai assistir o show!!!");
    
    } else {
        printf("Nao vai assistir ao show.");

    }
    return 0;

}
