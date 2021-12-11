#include <stdio.h>
int main() {
  float saldo, novosaldo;
  printf("Saldo da sua aplicacao: ");
  scanf("%f", &saldo);
  novosaldo = 1.15 * saldo;
  printf("Novo saldo: %.2f", novosaldo);
  return 0;
}
