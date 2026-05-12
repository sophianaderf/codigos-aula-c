#include <stdio.h>
int main () {
    
    float nota = 0;
    
    printf("Qual a sua nota final?");
    scanf("%f", &nota);

    if(nota >6.9) {
        printf("Voce passou de ano, parabens!");

    } else {
        printf("Voce reprovou, estude mais.");
    }
    return 0;
    
}