#include <locale.h>
#include <stdio.h>
// conversão de números
int main() {
  setlocale(LC_ALL, "PORTUGUESE");
  float valor_a, valor_b;

  printf("Digite o valor a: ");
  scanf("%f", &valor_b);

  printf("Digite o valor b: ");
  scanf("%f", &valor_a);

  printf("O valor de A é %.2f\n, o valor de B é %.2f", valor_a, valor_b);
}