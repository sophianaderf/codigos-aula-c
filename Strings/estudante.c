#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "pt_BR.UTF-8");

     char nome[50];
     char idade[50];
     char serie[50];
     char curso[50];
     char escola[50];

     printf("Insira o seu nome: ");
     scanf(" %[^\n]", nome);

     printf("Insira a sua idade: ");
     scanf(" %[^\n]", idade);

     printf("Insira sua série: ");
     scanf(" %[^\n]", serie);

     printf("Insira o seu curso técnico: ");
     scanf(" %[^\n]", curso);

      printf("Insira o sua unidade sesi: ");
      scanf(" %[^\n]", escola);

    printf("Minhas informacoes escolares:"); 
    printf("\nNome: %s", nome);
    printf("\nIdade: %s", idade);
    printf("\nSerie: %s", serie);
    printf("\nCurso: %s", curso);
    printf("\nUnidade: %s", escola);
}