#include <stdio.h>
int main()
{
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
  int num11, num12, num13, num14, num15, num16, num17, num18, num19, num20;
  float media;
  printf("Digite 20 numeros:\n");
  scanf("%i %i %i %i %i %i %i %i %i %i", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
  scanf("%i %i %i %i %i %i %i %i %i %i", &num11, &num12, &num13, &num14, &num15, &num16, &num17, &num18, &num19, &num20);
  media = (num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14+num15+num16+num17+num18+num19+num20)/20;
  printf("Media = %.2f", media);
  return 0;
}
