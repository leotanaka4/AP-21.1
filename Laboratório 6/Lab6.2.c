#include <stdio.h>
int a, b, aux;
int troca(){aux=a;a=b;b=aux;return a,b;}

int main() {
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  troca();
  printf("Primeiro numero mudou para %d\n", a);
  printf("Primeiro segundo mudou para %d", b);
  return 0;
}
