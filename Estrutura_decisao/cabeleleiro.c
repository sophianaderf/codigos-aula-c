#include <stdio.h>

int main () {
 float hidratacao = 0;
 float corte = 0;
 float luzes = 0; 
 float progressiva = 0; 

 
 
 printf("Qual o valor da hidratacao");
 scanf("%f", &hidratacao);
 
 printf("Qual o valor do corte?");
 scanf("%f", &corte);

 printf("Qual o valor das luzes?");
 scanf("%f", &luzes);

 printf("Qual o valor da progressiva?");
 scanf("%f", &progressiva);

 float total = hidratacao + corte + luzes + progressiva;
 
 if (total <100 ) {
    printf("O valor ficou barato R$ %.2f", total);

 }else if (total >=100 && total <=200) {
   printf("O valor ficou razoavel R$ %.2f", total);

}else if (total > 200) {
   printf("O valor ficou caro R$ %.2f", total);
}

 return 0;

}