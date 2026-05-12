/*
Calcule o imc 
de uma pessoa
com valores
fixos nas variáveis 
e mostre o valor
ao final
 */

 #include <stdio.h>
  int main() {
    // declaração de variáveis
    // entrada

    float altura = 1.70;
    float peso = 58;

    // processamento

    float imc = (peso / (altura * altura));

    // saída

    printf("o seu imc e %f", imc);

    return 0;
}