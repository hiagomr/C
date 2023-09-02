#include <stdio.h>
#include <locale.h>

//verificar se tem idade para tirar a habilitação

int main(){
  setlocale(LC_ALL, "PORTUGUESE");
int dia_h, mes_h, ano_h, dia_a, mes_a, ano_a, maioridade_d, maioridade_m, maioridade_a;

printf("\n Digite o dia em que você nasceu: ");
scanf("%i %i %i", &dia_a, &mes_a, &ano_a);

printf("\n Digite o mes em que você nasceu: ");
scanf("%i %i %i", &dia_h, &mes_h, &ano_h);

maioridade_d = dia_h-dia_a;
maioridade_m = mes_h-mes_a;
maioridade_a = ano_a+18;

if(maioridade_a > ano_h){
    printf("Você já está na maioridade");
}

else if (maioridade_a == ano_h)
{
    if (mes_h >= mes_a)
    {
     if (dia_h >= dia_a){
     printf("Você já possuí idade para tirar a cnh");
     }
     else {
    printf("Você não possuí idade para tirar a cnh");
     }
    }
    else{
    printf("Você não possuí idade para tirar a cnh");
    }
}
else {
printf("Você não possuí idade para tirar a cnh");
}

}
