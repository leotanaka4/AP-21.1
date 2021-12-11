#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Digite dois numeros:\n");
  scanf("%i %i", &num1, &num2);
  if (num1>num2)
  {
    printf("Maior numero = %i", num1);
  }
  else if (num1<num2)
  {
    printf("Maior numero = %i", num2);
  }
  else
  {
    printf("Os numeros sao iguais");
  }
  return 0;
}
