#include <stdio.h>
#include <locale.h>
//calculo de media de notas
int main(){
  setlocale(LC_ALL,"PORTUGUESE");

  float numero1, numero2, soma;

  printf("digite o primeiro numero:");
  scanf("%f", &numero1);

  printf("Digite o sugundo numero: ");
  scanf("%f", &numero2);

  soma = (numero1 + numero2)*numero2;
    
  printf("A soma entre os dois números é: %.2f\n", soma);

  return 0;
}