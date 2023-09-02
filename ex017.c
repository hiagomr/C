#include <stdio.h>
#include <locale.h>

//peso ideal conforme o genero

int main () {
setlocale(LC_ALL, "PORTUGUESE");
  char genero; 
  float peso_ideal_h, peso_ideal_m, altura;

  printf("Me informe seu genero biologico:");
  scanf("%c", &genero);

  printf("Me informe sua altura: ");
  scanf("%f, altura");

  if (genero == "Masculino" || genero == "masculino")
  {
    peso_ideal_h = (72.7*altura)-58;
    printf("O peso ideal para sua altura é %.2f\n", peso_ideal_h);
  }

  else if (genero == "Femenino" || genero == "femenino") 
  {
    peso_ideal_m = ( 62.1 * altura)-44.7;
    printf("O peso ideal para a sua altura é %.2f\n", ppeso_ideal_m);
  }

  else
  {
    printf("você não preencheu os campos acima corretamente");
  }
    
}