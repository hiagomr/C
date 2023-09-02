#include <locale.h>
#include <stdio.h>

// conversão de dolar

int main() {
  setlocale(LC_ALL, "PORTUGUESE");
  
  float dolarhj, dolarcvns, valoremrs;

  printf("Digite a cotação do dolar atual:");
  scanf("%f", &dolarhj);

  printf("Digite quantos reais você quer converter: ");
  scanf("%f", &valoremrs);

  valoremrs = valoremrs / dolarhj;

  printf("O valor que você possui em dolar é: %.2f\n");
}