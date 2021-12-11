#include <stdio.h>
int main()
{
  int N, var;
  float num1, num2, soma, produto, iguais;
  printf("Digite o numero de pares: ");
  scanf("%i", &N);
  soma=0;
  produto=1;
  iguais=0;
  for (var=1;var<=N;var++) {
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (num1>num2) {soma+=num1;}
    else if (num1<num2) {soma+=num2;}
    else {iguais++;}
  }
  printf("Soma dos maiores valores = %.2f\n", soma);
  printf("Produto dos menores valores = %.2f\n", produto);
  printf("A quantidade de pares iguais foi de %.2f", iguais);
  return 0;
}
