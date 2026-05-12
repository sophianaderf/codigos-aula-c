#include <stdio.h>

int main() {
    // Entrada de informações, variáveis e constantes
    const float valorPorLitro = 0.05;
    const int litrosMulta = 400;
    const float valorMulta = 150;
    const float valorDesconto = 50;
    const int litrosDesconto = 250;
    const int periodo30 = 30;
    int faixaEconomica = 250;
    int faixaExcessiva =  400;


    int qtdPessoas = 0;
    float contaTotal = 0;
    int litrosConsumidos = 0;
    int idade = 0;
    
    
    // Processamento das informações
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Quantas pessoas residem na sua casa?");
    scanf("%i", &qtdPessoas);
    
    for (int i=0; i<qtdPessoas; i++) {
        printf("Insira a idade da pessoa %i: ", i);
        scanf("%i", &idade);

       if (idade <= 10) {
        litrosConsumidos += 18;
    
    } else if (idade > 10 && idade <= 18) {
        litrosConsumidos += 30;

    } else if (idade > 18 && idade <= 25 ) {
        litrosConsumidos += 42;
    } else if (idade > 25){
        litrosConsumidos += 24; 
    }
}
// Valor total da conta 
contaTotal = valorPorLitro * litrosConsumidos * periodo30;

// Saída -> Relatório
if(litrosConsumidos >= faixaExcessiva) {
    // Faixa excessiva
    printf("Faixa economica: Excesiva\n");
    printf("Total de pessoas na residencia: %i", qtdPessoas);
    printf("Consumo em litros: %i", litrosConsumidos);
    printf("Valor da conta mensal: R$ %.2f\n", contaTotal);
    printf("Multa aplicada: R$ %.2f\n", valorMulta);

} else if (litrosConsumidos <= faixaEconomica) {
 // Faixa econômica
 printf("Faixa de consumo: Economica\n");
 printf("Total de pessoas na residencia: %i", qtdPessoas);
 printf("Consumo em litros: %i", litrosConsumidos);
 printf("Valor da conta mensal: R$ %.2f\n", contaTotal);
 printf("Desconto na proxima conta: R$ %.2f\n", valorDesconto);

} else {
   // Faixa econômica
 printf("Faixa de consumo: Normal\n");
 printf("Total de pessoas na residencia: %i", qtdPessoas);
 printf("Consumo em litros: %i", litrosConsumidos);
 printf("Valor da conta mensal: R$ %.2f\n", contaTotal);

}

    return 0;
}