#include <stdio.h>
int main()
{
  int N, var;
  float num, soma;
  soma=0;
  printf("Digite a quantidade numeros: ");
  scanf("%i", &N);
  for (var=1;var<=N;var++) {
    printf("Digite um numero: ");
    scanf("%f", &num);
    if (num<0) {soma+=num;}
  }
  printf("A soma dos numeros negativos foi de %.2f", soma);
  return 0;
}
