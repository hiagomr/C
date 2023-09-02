#include <locale.h>
#include <math.h>
#include <stdio.h>

// formula de baskara  (-b±v(b²-4ac))/(2a)

int main() {
  setlocale(LC_ALL, "PORTUGUESE");

  float a, b, c, x1, x2;

  printf("Digite o valor de a: ");
  scanf("%f", &a);
  
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  
  printf("Digite o valor de c: ");
  scanf("%f", &c);
  
  x1 = (-b + sqrt(b * b - 4 * a * c)) / (2*a);
  x2 = (-b - sqrt(b * b - 4 * a * c)) / (2*a);
  

  printf("As raízes da equação são %f e %f", x1, x2);
  return 0;
}