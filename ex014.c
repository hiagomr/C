#include <stdio.h>
#include <locale.h>

int main (){
  setlocale(LC_ALL,"PORTUGUESE");
float Saldo=200, V_Compra;

  printf("\n Informe o valor da compra: ");
  scanf("%f", &V_Compra);

if (V_Compra <= Saldo){
  Saldo = Saldo-V_Compra;

  printf("\n Sua compra foi ralizada!");
}

else{
  printf("seu saldo é insuficiente");
}
  
}