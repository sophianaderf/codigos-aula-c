#include <stdio.h>

int main() {
    
    float precos[3] = {12.0, 15.0, 18.0};
       char nomes[3][20] = {
        "Marmita Pequena", "Marmita Media", 
        "Marmita Grande"
    };

    int escolha;
    float total = 0.0;

    printf("Bem-vindo ao Marmitex Bot!\n");

    while (1) {
        printf("\nCardapio:\n");

        for (int i = 0; i < 3; i++) {
            printf("%d - %s (R$ %.2f)\n", i, nomes[i], precos[i]);
        }

        printf("Digite o numero da marmita (-1 para sair): ");
        scanf("%d", &escolha);

        if (escolha == -1) {
            break;
        }

        if (escolha >= 0 && escolha < 3) {
            total += precos[escolha];
            printf("%s adicionada ao pedido!\n", nomes[escolha]);
        } else {
            printf("Opcao invalida!\n");
        }
    }

    printf("\nTotal do pedido: R$ %.2f\n", total);
    printf("Obrigado pelo pedido!\n");

    return 0;
}