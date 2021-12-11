#include <stdio.h>
int main()
{
  int num1, num2, soma, diferenca, multiplicacao;
  float divisao;
  printf("Digite um numero inteiro: ");
  scanf("%i", &num1);
  printf("Digite outro numero inteiro: ");
  scanf("%i", &num2);
  soma = num1 + num2;diferenca = num1 - num2;multiplicacao = num1 * num2;
  divisao = (float) num1/ (float) num2;
  printf("Soma dos dois numeros: %i\n", soma);
  printf("Diferenca dos dois numeros: %i\n", diferenca);
  printf("Multiplicacao dos dois numeros: %i\n", multiplicacao);
  printf("Divisao dos dois numeros: %.2f", divisao);
}
