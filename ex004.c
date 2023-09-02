#include <stdio.h>
//media ponderada das notas
int main(){
  float nota1, nota2, nota3, peso1, peso2, peso3, mediaponderada, media_dasuaintitu;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a primeira nota: ");
  scanf("%f", &nota2);

  printf("Digite a primeira nota: ");
  scanf("%f", &nota3);

  printf("Digite o peso da nota 3: ");
  scanf("%f", &peso1);

  printf("Digite o peso da nota 2: ");
  scanf("%f", &peso2);

  printf("Digite o peso da nota 3: ");
  scanf("%f", &peso3);

  printf("Digite a média da sua instituição: ");
  scanf("%f", &media_dasuaintitu);

  mediaponderada =  ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

  if (mediaponderada >= media_dasuaintitu)
  {
    printf("Parabéns você foi aprovado");
  }

  else
  {
    printf("Lamentamos lhe informar mas você foi reprovado.");
  }
  return 0;
}