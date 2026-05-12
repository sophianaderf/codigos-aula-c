#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char grupoBrasil[4][50];
    int resultados[3][2];
    int totalPontosBrasil = 0;

    printf("---Vamos preencher o grupo do Brasil na Copa:---");

    for (int i=0; i < 4; i++)
    {
        printf("\nQual seleção? ");
        scanf(" %[^\n]", grupoBrasil[i]);

    }
    printf("\n--Legal, agora vamos para os resultados dos jogos--");

    for (int i=0; i < 3; i++)
    {
        printf("\nPartida %i: %s x %s=", i+1,
            grupoBrasil[0], grupoBrasil[i+1]);

       scanf("%i x %i", &resultados[i][0], &resultados[i+1][1]);
    }

    //Imprimindo os resultados
    
    printf("--Resultado dos jogos--");

    for (int i=0; i < 3; i++)
    {
        printf(
            "\n%s %i x %i %s",
            grupoBrasil[0], resultados[0][i],
            resultados[i][1], grupoBrasil[i+1]);
   
       //Se o resultado for maior, o Brasil ganhou
       if (resultados[i][0] > resultados[i][1]) {
        totalPontosBrasil += 3;
       }

       //Se o resultado for igual, Brasil empatou
       
        if (resultados[i][0] > resultados[i][1]) {
        totalPontosBrasil += 1;
        }
    }

    printf("\n O Brasil fez %i pontos", totalPontosBrasil);
    
    return 0;
}
