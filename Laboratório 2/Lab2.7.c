#include <stdio.h>
int main()
{
  float densidade, massa, volume;
  printf("Massa e volume de um elemento:\n");
  scanf("%f %f", &massa, &volume);
  densidade = massa/volume;
  printf("Densidade absoluta: %.2f", densidade);
  return 0;
}
