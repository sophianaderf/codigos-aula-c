#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[10] = "Sophia";
    char logradouro[30] = "R Marianna Rochelle Caselatto";
    char bairro[25] = "Jd residencial Cambuy";
    char cidade[11] = "Piracicaba";
    char uf[3] = "SP";

    printf("Minhas informacoes residenciais"); 
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nUF: %s", uf);

     return 0;
}