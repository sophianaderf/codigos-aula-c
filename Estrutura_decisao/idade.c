#include <stdio.h>

int main() {
    int idade = 0;

    printf("Qual sua idade?");
    scanf("%i", &idade);

    if(idade >= 18) {
        printf("Voce e maior de idade, pode trabalhar");
    } else {
        printf("Voce e menor de idade, aproveite");
    }
    return 0;
}