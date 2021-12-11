#include <stdio.h>
int main()
{
  int num1, num2, num3, num4, num5, soma, produto;
  float media;
  printf("Escreva 5 numeros inteiros:\n");
  scanf("%i %i %i %i %i", &num1, &num2, &num3, &num4, &num5);
  soma = num1 + num2 + num3 + num4 + num5;
  produto = num1 * num2 * num3 * num4 * num5;
  media = (num1 + num2 + num3 + num4 + num5)/5;
  printf("Soma = %i\nProduto = %i\nMedia = %.2f", soma, produto, media);
  return 0;
}
