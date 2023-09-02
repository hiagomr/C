#include <stdio.h>
#include <locale.h>
//calculo da area de um triangulo

int main(){
  setlocale(LC_ALL,"PORTUGUESE");

  float base, altura, area;

  printf("Digita a altura do triângulo:");
  scanf("%f", &altura);

  printf("Digite a base do triângulo: ");
  scanf("%f", &base);

  area = (base * altura) / 2;

  printf("A área do triangulo é: %.2f\n", area);

  return 0;
}