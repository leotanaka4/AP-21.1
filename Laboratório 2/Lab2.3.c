#include <stdio.h>
int main()
{
  int anos, meses, dias, dias_total;
  printf("Coloque sua idade divida em:\nAnos, Meses, Dias:\n");
  scanf("%i %i %i", &anos, &meses, &dias);
  dias_total = anos*365 + meses*30 + dias;
  printf("Apenas em dias: %i", dias_total);
  return 0;
}
