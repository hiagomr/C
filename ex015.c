#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"PORTUGUESE");
  float nota_1, nota_2, media, media_final;

  printf("\n Digite a sua nota 1: ");
  scanf("%f", &nota_1);

  printf("\n Digite a sua nota 2: ");
  scanf("%f", &nota_2);

  printf("\n Digite a média da sua escola: ");
  scanf("%f", &media);

  media_final = (nota_1+nota_2)/2;

  if (media_final >= media){
    printf("\n Parabéns você foi aprovado, a sua média foi %.2f\n", media_final);
  }
  else {
    printf("\n Você foi reprovado, sua média foi %.2f\n", media_final);
  }

}
