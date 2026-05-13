#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0; 
    int dias = 0;
    char nome [30];
    char carro [30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;
    
    const char cupons[3][30] = {
        "SNF_10", "SNF_20" "SNF_30"
    };
    char cupomCliente[30];
    int temCupom = 0;
    float valorDesconto = 0;

    printf("Olá, seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("\nObrigado por escolher nossa loja, %s", nome);

    printf("\nQual carro você deseja alugar?");
    scanf("%s", carro);

    printf("\nQuantos KMs você vai rodar com o carro?");
    scanf("%i", &km);

    printf("\nPara mostrar um relatório detalhado, informe quantos dias vai precisar do carro:");
    scanf("%i", &dias);

    printf("%s, possui cupom de desconto? 1->sim 0->não", nome);
    scanf("%i", &temCupom);

    if(temCupom == 1) {
        printf("Digite o código:");
        scanf("%s", cupomCliente);

    for (int i=0; i < 3; i++){
        if (strcmp(cupomCliente, "SNF_10") == 0) {
            valorDesconto = 10;

        }
        if (strcmp(cupomCliente, "SNF_20") == 0) {
            valorDesconto = 20;

        }
        if (strcmp(cupomCliente, "SNF_30") == 0) {
            valorDesconto = 30;

        }
    }

} 

    totalPorKm = (km * VALOR_POR_KM) - valorDesconto;
    totalPorDia = (dias * VALOR_POR_DIA) - valorDesconto;


    printf("%s, segue um relatório detalhado", nome);
    printf("\nTotal por KM: R$ %2.f", totalPorKm);
    printf("\nCarro escolhido: %s", carro);
    printf("\nTotal por Dia: R$ %.2f", totalPorDia);

    if (temCupom == 1) {
        printf("\nVocê teve um desconto de R$ %.2f", valorDesconto);
    }

    if (totalPorDia < totalPorKm){
        printf("\nSugerimos utilizar o plano diário");

    } else {
        printf("\nSugerimos utilizar o plano por KM");
    }

    printf("\nObrigado por utilizar nossos serviços! Tenha uma ótima tarde.");
    printf("\nDesenvolvido por Sophia N. Forti");


      return 0;
}
 