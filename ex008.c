#include <locale.h>
#include <stdio.h>

// valor devido com multa

int main() {
  setlocale(LC_ALL, "PORTUGUESE");

  float valornormal, valor_crgd, pdamulta;

  printf("Digite quanto o cliente deve: ");
  scanf("%f", &valornormal);

  printf("Digite a porcentagem da multa por ficar devendo: ");
  scanf("%f", &pdamulta);

  valor_crgd = ((pdamulta / 100) * valornormal) + valornormal;

  printf("O valor devido é: %.2f\n", valor_crgd);

  return 0;
}
