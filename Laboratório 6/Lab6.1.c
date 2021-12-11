#include <stdio.h>
float mult(int a, int b){return (a*b);}

int main() {
  int a, b, conta;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  conta = mult(a,b);
  printf("A multiplicacao dos dois numeros = %d", conta);
}
