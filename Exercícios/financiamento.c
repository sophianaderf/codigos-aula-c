#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[50];
    char veiculo[50];
    char imovel[50];

    int servico = 0;

    const int juroImovel = 0.005;
    const int juroVeiculo = 0.015;
    float renda = 0;
    int parcelas = 0;
    float valorParcelas = 0;
    float totalJuros = 0;
    float totalJurosRS = 0;
    float valorTotal = 0;
    float entrada = 0;
    

    
    float valorFinanciamento = 0;

    printf("Seja bem vindo! Qual seu nome?");
    scanf("%s", nome);

    printf("\nObrigado por escolher nossa loja, %s", nome);
    printf("\nQual tipo de financiamento deseja solicitar? (Digite 1 para imóvel e 2 para veículo)");
    scanf("%i", &servico);

    if (servico == 1)
    {
        printf("\n====Opções e prazos====");
        printf("\n1) Casa -> de 150 à 360 meses");
        printf("\n2) Apartamento -> de 100 à 300 meses");

        printf("\nQual imóvel você deseja financiar?");
        scanf("%s", imovel);
    }
    else if (servico == 2)
    {
        printf("\n====Opções e prazos====");
        printf("\n1) Caminhão -> de 100 à 200 meses");
        printf("\n2) Carro -> de 6 à 48 meses");
        printf("\n1) Moto -> de 3 à 24 meses");

        printf("\nQual veículo você deseja financiar?");
        scanf("%s", veiculo);
    }
    else
    {
        printf("\nOpção indisponível");
    }

    printf("Qual o valor do financiamento desejado?");
    scanf("%f", &valorFinanciamento);

    printf("\nEm quantos meses deseja realizar o pagamento?");
    scanf("%i", &parcelas);

    printf("Insira o valor de entrada (se não quiser, digite 0):");
    scanf("%f", &entrada);

    switch (servico)
    {
    case 1:
      totalJuros = (parcelas * juroImovel) / 100;
      totalJurosRS = valorFinanciamento * totalJuros;
      valorTotal = (valorFinanciamento - entrada) + totalJurosRS;
      valorParcelas = valorTotal / parcelas;
        break;

    case 2:
      totalJuros = (parcelas * juroVeiculo) / 100;
      totalJurosRS = valorFinanciamento * totalJuros;
      valorTotal = (valorFinanciamento - entrada) + totalJurosRS;
      valorParcelas = valorFinanciamento / parcelas;
        break;

    default:
        break;
    }

    printf("\nQual a sua renda mensal?");
    scanf("%f", &renda);

    float rendaTrinta = renda * 0.3;

    if (valorParcelas < rendaTrinta)
    {
        printf("\nParabéns! Seu financiamento foi aprovado!");
        printf("\nValor da parcela: %2.f", valorParcelas);
        printf("\nQuantidade de parcelas: %i", parcelas);

        switch (servico)
        {
        case 1:
            printf("\nTipo de financiamento: Imóvel");
            break;
        
        case 2:
            printf("\nTipo de financiamento: Veículo");
            break;
        
        default:
            break;
        }

    }else{
        printf("Financiamento negado");
    }

    printf("\nDesenvolvido por Sophia N. Forti");

    return 0;
}