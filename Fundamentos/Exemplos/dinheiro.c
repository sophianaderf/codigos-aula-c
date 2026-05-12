/*
Você está trabalhando e gostaria de guardar 25% do seu salário todo mês.
O banco está com um investimento que rende 6.8% ao mês de juros e você vai usar
esse formato de investimento. 
Crie um algoritmo para calcular seu investimento.
*/

#include <stdio.h>

int main() {
    // Entrada
  float salario = 0;
  float guardar25 = 0.25;
  float juros = 0.068;
  int tempo = 0;

  printf("Qual o valor do seu salário?");
  scanf("%f", &salario);
  
  printf("Por quanto tempo pretende guardar o dinheiro?");
  scanf("%i", &tempo);

  //Processamento 
  float totalJurosPercentual = tempo * juros; //total de juros
  float salario25 = salario * guardar25; //25% do salário
  float totalDinheiro = tempo * salario25; // momtante guardado
  float totalJurosValor = totalDinheiro * totalJurosPercentual;
  float totalComJuros = totalJurosValor + totalDinheiro;


  //Saída
  printf("O total de juros em %.2f \n", totalJurosPercentual);
  printf("Valor guardado sem juros R$ %.2f \n", totalDinheiro);
  printf("Meses %i \n", tempo);
  printf("Valor do juros do banco R$ %.2f \n", totalJurosValor);
  printf("Valor guardado com juros R$ %.2f", totalComJuros);

  return 0;

}




