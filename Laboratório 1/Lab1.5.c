#include <stdio.h>
int main() {
  int a, b, lim,soma;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  printf("Digite o limite: ");
  scanf("%d", &lim);
  soma = a + b;
  if (soma>lim) {printf("Soma>Limite");}
  else if (soma==lim) {printf("Soma=Limite");}
  else {printf("Soma<Limite");}
  return 0;
}
