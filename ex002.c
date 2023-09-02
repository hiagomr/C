#include <locale.h>
#include <stdio.h>
//calculo de raio de um circulo
int main() {
  setlocale(LC_ALL, "");

  float raio, area;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  area = 3.14 * (raio * raio);

  printf("A area do círculo é: %.2f\n", area);

  return 0;
}