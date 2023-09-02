#include <stdio.h>
#include <locale.h>

// taxa de transferencia de veiculo

int main()
{
setlocale(LC_ALL,"PORTUGUESE");
int ano;
float valor_carro, valor_1, valor_2;

printf("Digite o ano do carro: ");
  scanf("%i", &ano);

printf("Digite a tabela fipe do carro: ");
  scanf("%f", &valor_carro);

if(ano <=1900){
valor_1 = (1.0/100)*valor_carro; 
printf("O valor do imposto a ser pago é:%f", valor_1);
}

else
{valor_2 = (1.5/100)*valor_carro;
printf("O valor do imposto a ser pago é:%f", valor_2);
}
}