#include <stdio.h>

int main () {
 float hidratacao = 0;
 float corte = 0;
 float tintura = 0; 
 float progressiva = 0; 
 float babyLiss = 0; 
 float escova = 0; 
 int opcao = 0; // 1 para sim e 0 para não

 printf("Voce vai pintar o cabelo? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor da tintura?");
    scanf("%f", tintura);
 }

 printf("Voce vai cortar o cabelo? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor do corte?");
    scanf("%f", &corte);
 }

 printf("Voce vai hidratar o cabelo? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor da hidratacao?");
    scanf("%f", &hidratacao);
 }
 
 printf("Voce vai fazer progressiva? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor da progressiva?");
    scanf("%f", &progressiva);
 }

  printf("Voce vai fazer escova? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor da escova?");
    scanf("%f", &escova);
 }

  printf("Voce vai fazer baby liss? 1->sim e 0->nao");
 scanf("%i", &opcao);

 if (opcao == 1 ) {
    printf("Qual o valor do baby liss?");
    scanf("%f", &babyLiss);
 }

 float total = hidratacao + corte + tintura + progressiva + babyLiss + escova;

 if (total <= 150) {
    printf("Esta barato, o valor é R$ %.2f", total);

 } else if (total > 150 && total <= 250) {
    printf("Esta razoavel, o valor e %.2f", total);

 } else if (total > 250) {
    printf("Esta caro, o valor e de %.2f", total);
 }

 return 0;

}

 
 