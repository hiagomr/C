#include <locale.h>
#include <stdio.h>

// Elabore um algoritmo que calcule o que deve ser pago por um produto,
// considerando o preço da etiqueta e aescolha da condição de pagamento.

int main() {
  setlocale(LC_ALL, "PORTUGUESE");

  float valor_dev, valor_pag;
  int cod_pag;

  printf("\nDigite o valor do produto que está na etiqueta: ");
  scanf("%f", &valor_dev);

  printf("\n Digite a forma de pagamento: ");
  scanf("%i", &cod_pag);

  switch (cod_pag) {
    case 1:
    valor_pag = valor_dev * (1 - 0.1);
    printf("A sua compra teve um desconto de 10 portanto o valor ficou %.2f", valor_pag);
    break;

    case 2:
    valor_pag = valor_dev *(1 - 0.05);
    printf("A sua compra teve um desconto de 5 portanto o valor ficou %.2f", valor_pag);
    break;

    case 3:
    valor_pag = valor_dev ;
    printf("A sua compra teve um desconto de 10 portanto o valor ficou %f", valor_pag);
    break;

    case 4:
    valor_pag = valor_dev * (1 + 0.1);
    printf("A sua compra teve um desconto de 10 portanto o valor ficou %f", valor_pag);
    break;

  default:
  printf("Você não preencheu os campos anteriores.");

  }
}
