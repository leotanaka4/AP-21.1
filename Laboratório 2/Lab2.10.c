#include <stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Digite 3 numeros:\n");
  scanf("%i %i %i", &num1, &num2, &num3);
  if (num1>num2&&num1>=num3) {printf("Maior numero = %i", num1);}
  if (num2>num3&&num2>=num1) {printf("Maior numero = %i", num2);}
  if (num3>num1&&num3>=num2) {printf("Maior numero = %i", num3);}
  if (num1<num2&&num1<=num3) {printf("\nMenor numero = %i", num1);}
  if (num2<num3&&num2<=num1) {printf("\nMenor numero = %i", num2);}
  if (num3<num1&&num3<=num2) {printf("\nMenor numero = %i", num3);}
  if (num1==num2&&num1==num3) {printf("TODOS IGUAIS");}
  return 0;
}
