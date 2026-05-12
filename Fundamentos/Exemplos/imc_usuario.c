/**
 * Agora você deve copiar o
 * código do exemplo imc.c
 * e deixar ele com informações
 * dinâmicas :)
 */

 #include <stdio.h>
  int main() {
    // declaração de variáveis
    // entrada

    float altura = 0;
    float peso = 0;

    printf("Qual a sua altura?");
    scanf("%f", &altura);

    printf("Qual o seu peso?");
    scanf("%f", &peso);

    // processamento

    float imc = (peso) / (altura * altura)

    // saída

    printf("o seu imc e %f", imc);

    return 0;
}
 