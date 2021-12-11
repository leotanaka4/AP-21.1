#include <stdio.h>
int main()
{
  int N, var, negativos;
  float num;
  negativos=0;
  printf("Digite a quantidade numeros: ");
  scanf("%i", &N);
  for (var=1;var<=N;var++) {
    printf("Digite um numero: ");
    scanf("%f", &num);
    if (num<0) {negativos++;}
    else {;}
  }
  printf("A quantidade de numeros negativos foi de %i", negativos);
  return 0;
}
