#include <stdio.h>
#include <locale.h>
//levar guarda chuva
int main(){
  setlocale(LC_ALL, "PORTUGUESE");
  char chuva;
  printf("\nVai chover hoje?(Responda com 's' ou 'n')");
  scanf("%c", &chuva);

  if (chuva == 'S' || chuva == 's')
    {
      printf("\n Leve o guarda-chuva");
    }

  else
  {
      printf("\n Não leve o guarda chuva");
  }

}