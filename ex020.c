#include <stdio.h>
#include <locale.h>

//escreva um algoritmo que receba o código de um produto e apresente a sua classificação de acordo com a tabela

int main(){
setlocale(LC_ALL, "PORTUGUESE");
int cod;

printf("\n Insira o código do produto: ");
scanf("%i", &cod);
switch(cod)
{
  case 110:
    printf("\nVestuário");
    break;
  
  case 215:
    printf("\nEletroméstico");
    break;
  
  case 230:
    printf("\nInformática");
    break;
  
  case 354:
    printf("\nLivraria");
    break;
  
  case 412:
    printf("\nEsportes");
    break;

  default:
  printf("\nCódigo inválido.");
}
}