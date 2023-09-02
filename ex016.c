#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "PORTUGUESE");

  int idade;
  printf("Me informe sua idade: ");
  scanf("%i", &idade);

  if ((idade >= 16 && idade< 18)|| idade > 70)
  {
  printf("você pode votar.");
  printf("você pode votar mas seu voto não é obrigatorio");

  }

  else if (idade > 18 && idade <= 70)
  {
   printf("você é obrigado a votar!");
  }

  else
  {
      printf("Você é mt novo chefinho xixi nas calças");
  }

}
