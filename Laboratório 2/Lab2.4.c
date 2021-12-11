#include <stdio.h>
int main()
{
  float total_vendido, salario;
  printf("Total vendido pelo funcionario no mes de abril: ");
  scanf("%f", &total_vendido);
  salario = 1200 + total_vendido*0.17;
  printf("Salario bruto: %.2f reais.", salario);
  return 0;
}
