#include <stdio.h>
#include <locale.h>

float placaVideo = 139.00;
float caixaDeSom = 99.00;
float mouseTeclado = 149.00;
float monitor = 679.00;

void orcamentoComputador(float placaVideo, float caixaDeSom, float mouseTeclado, float monitor) {

    int qtdPessoas = 6;

    float valorKit = placaVideo + caixaDeSom + mouseTeclado + monitor;
    float valorTotal = valorKit * qtdPessoas;

    float valorAVista = valorTotal * 0.85; // desconto
    float parcela12x = valorTotal / 12;

    printf("=== Orçamento ===\n");

    printf("Valor do computador: R$ %.2f\n", valorKit);
    printf("Valor total para %d pessoas: R$ %.2f\n",
           qtdPessoas, valorTotal);

    printf("\nPagamento a vista (15%% de desconto): R$ %.2f\n",
           valorAVista);

    printf("Pagamento parcelado: 12x de R$ %.2f sem juros\n",
           parcela12x);

int opcao = 0;

printf("\nEscolha a forma de pagamento:\n");
printf("1 - A vista (15%% de desconto)\n");
printf("2 - Parcelado em 12x sem juros\n");
printf("Opçao: ");
scanf("%d", &opcao);

if(opcao == 1) {
    printf("\nForma de pagamento escolhida: A vista\n");
    printf("Valor final: R$ %.2f\n", valorAVista);
}
else if(opcao == 2) {
    printf("\nForma de pagamento escolhida: Parcelado\n");
    printf("12x de R$ %.2f sem juros\n", parcela12x);
}
else {
    printf("\nOpção invalida!\n");
}
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    orcamentoComputador(placaVideo, caixaDeSom, mouseTeclado, monitor);

    return 0;
}