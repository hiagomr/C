#include <stdio.h>
#include <locale.h>

//conversão de celsius para fahrenheit

int main(){
  setlocale(LC_ALL,"PORTUGUESE");
  
  float temper_c, temper_f;

  printf("Digite a temperatuda em c° para ser convertida:");
  scanf("%f", &temper_c);

  temper_f = (temper_c* 9/5)+32;

  printf("O valor em fahrenheit fica: %.2f\n", temper_f);

  return 0;
}