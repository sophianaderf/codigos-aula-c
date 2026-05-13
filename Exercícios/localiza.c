#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0; 
    int dias = 0;
    char nome [30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("Olá, seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa loja, %s", nome);

    printf("\nQuantos KMs você vai rodar com o carro?");
    scanf("%i", &km);

    printf("\nPara mostrar um relatório detalhado, informe quantos dias vai precisar do carro:");
    scanf("%i", &dias);

    totalPorKm = km * VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    printf("%s, segue um relatório detalhado", nome);
    printf("\nTotal por KM: R$ %2.f", totalPorKm);
    printf("\nTotal por Dia: R$ %.2f", totalPorDia);

    if (totalPorDia < totalPorKm){
        printf("\nSugerimos utilizar o plano diário");

    } else {
        printf("\nSugerimos utilizar o plano por KM");
    }

    printf("Obrigado por utilizar nossos serviços! Tenha uma ótima tarde.");


      return 0;
}
 