#include <stdio.h>
#include <locale.h>

//faça um algoritmo que leia dois valores representando o operador e o raio de uma circunferência. Caso ooperador seja igual a 1, apresentar a área da circunferência (r2). Caso o operador seja igual a 2, apresentar operímetro da circunferência (2r). Caso o indicador não seja nenhum destes valores, apresentar uma mensagemde erro.

int main ()
{
setlocale(LA_ALL,"PORTUGUESE");
int operador;
float raio, calculo;
  
printf("Digite o operador e o raio da circunferência");
scanf("%i %f", &operador, &raio);

switch(operador)
{
  case 1:
    
  calculo = 3.14 * (raio * raio);
  printf("O raio da circunferência é: %.2f", calculo);
  break;

  case 2:

  calculo = (2 * 3.14) * raio;
  printf("O raio da circunferência é: %.2f", calculo);
  break;

  default:
  printf("Preencha os campos corretamente.");
}
}