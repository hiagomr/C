#include <stdio.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "PORTUGUESE");

float calculo, valor_1, valor_2;
char operador;

printf("Digite os números que você deseja realizar o calculo: (valor 1, valor 2)");
scanf("%f %f", &valor_1, &valor_2);

printf("Digite o operador para realizar a operação: ");
scanf("s", &operador);  

switch(operador)
  {
    case '+':

    calculo = valor_1 + valor_2;
    printf("A soma dos dois valores ficou: %.2f", calculo);
    break;
    
    case '-':

    calculo = valor_1 - valor_2;
    printf("A subtração dos valores ficou: %.2f", calculo);
    break;
    
    case 'x':
    
    calculo = valor_1 * valor_2;
    printf("A multiplicação dos valores resultou em: %.2f", calculo);
    break;
    
    case '/':
    if (valor_1 > 0)
    { 
      if (valor_2 > 0)
      {
      calculo = valor_1 / valor_2;
      printf("O valor da divisão resultou em: %.2f", calculo);
      break;
      }
      else 
      {
        printf("Não é possível dividir por 0.");
      }
    }
    else 
    {
      printf("Não é possível dividir por 0");
    }
    default:
    printf("Preencha os campos corretamente");
  }
}
