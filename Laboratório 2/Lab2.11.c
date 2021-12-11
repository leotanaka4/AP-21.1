#include <stdio.h>
int main()
{
  int N, var;
  float num1, num2;
  printf("Digite o numero de pares: ");
  scanf("%i", &N);
  for (var=1;var<=N;var++) {
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (num1>num2) {printf("Maior numero = %.2f\n", num1);}
    else if (num1<num2) {printf("Maior numero = %.2f\n", num2);}
    else {printf("IGUAIS\n");}
  }
  return 0;
}
