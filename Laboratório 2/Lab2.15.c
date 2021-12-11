#include <stdio.h>
int main()
{
  int N, var, base;
  float num, soma, media;
  soma=0;base=0;
  printf("Digite a quantidade numeros: ");
  scanf("%i", &N);
  for (var=1;var<=N;var++) {
    printf("Digite um numero: ");
    scanf("%f", &num);
    if (num<0) {soma+=num;base++;}
  }
  media = soma/base;
  printf("A media dos numeros negativos foi de %.2f", media);
  return 0;
}
