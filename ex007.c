#include <locale.h>
#include <stdio.h>

// calculo de km carro faz 12 km/l

int main() {
  setlocale(LC_ALL, "PORTUGUESE");

  float cgasto, velocmed, tempogast;

  printf("Me informe a velocidade média da viagem: ");
  scanf("%f", &velocmed);

  printf("Me informe a tempo gasto para realizar a viajem em minutos: ");
  scanf("%f", &tempogast);

  cgasto = ((tempogast / 60) * velocmed) / 12;

  printf("A quantidade de combustivel gasto em litros é: ");

  return 0;
}
