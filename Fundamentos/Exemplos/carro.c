/*
Você precisa comprar um carro e pretende realizar o pagamento de forma parcelada.
Crie um algoritmo que calcule o valor das parcelas descontando o valor de entrada de 30%
*/

#include <stdio.h>

int main() {
    // Entrada

    float valorCarro = 0;
    int qtdeParcelas = 0; 
    const float entrada30 = 0.30;

    printf("Qual o valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas parcelas deseja pagar?");
    scanf("%i", &qtdeParcelas);

    // Processamento
    float e30 = valorCarro * entrada30;
    float valorFinal = valorCarro - e30;
    int qtdParcelas = valorFinal / valorCarro;
    float parcela = valorFinal / qtdeParcelas;

    // Saída
    printf("Valor do carro: %f\n", valorCarro);
    printf("Entrada: %f\n", e30 );
    printf("Valor sem a entrada: %f\n", valorFinal);
    printf("Parcela: %f", parcela);
    
    return 0;
}

