#include <stdio.h>

int main () {
    
    int tabuada = 0;
    int resultado = 0;

    printf("Qual tabuada de 0 a 10 voce deseja imprimir no terminal?");
    scanf("%i", &tabuada);

    for (int i=0; i <10; i++) {
        resultado = tabuada * i;
        printf("\n %i x %i = %i", tabuada, i , resultado); 
    }

    return 0;
   }