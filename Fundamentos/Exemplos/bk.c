#include <stdio.h>

int main() {
    // Entrada
    float rodeio = 24.99;
    float refrigerante = 7.99;
    float batataGrande = 14.99;
    float casquinha = 4.99;  

    // Processamento
    float total = rodeio + refrigerante + batataGrande + casquinha;
    float valorFinal = total - (total * (7 / 100.0));
    // Saída
    printf("O total é R$ %.2f \n", total);
    printf("Você tem um desconto de %.2f \n",(7 / 100.0 ));
    printf("O valor final a ser pago e R$ %.2f", valorFinal);

    return 0;
}