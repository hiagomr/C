#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "PORTUGUESE");
int notas2, notas5, notas10, notas20, notas50, notas100, notas200, soma;

  printf("Digite a quantia de notas de 2 reais que você possuí: ");
  scanf("%i", &notas2);

  printf("Digite a quantia de notas de 5 reais que você possuí: ");
  scanf("%i", &notas5);

  printf("Digite a quantia de notas de 10 reais que você possuí: ");
  scanf("%i", &notas10);

  printf("Digite a quantia de notas de 20 reais que você possuí: ");
  scanf("%i", &notas20);

  printf("Digite a quantia de notas de 50 reais que você possuí: ");
  scanf("%i", &notas50);

  printf("Digite a quantia de notas de 100 reais que você possuí: ");
  scanf("%i", &notas100);

  printf("Digite a quantia de notas de 200 reais que você possuí: ");
  scanf("%i", &notas200);

  soma = notas2*2 + notas5*5 + notas10*10 + notas20*20 + notas50*50 + notas100*100 + notas200*200;

  printf("você possuí: %i", soma);
  
  
}