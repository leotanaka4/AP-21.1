#include <stdio.h>
int main() {
  int altura, base, perimetro, area;
  printf("Altura do retangulo: ");
  scanf("%i", &altura);
  printf("Base do retangulo: ");
  scanf("%i", &base);
  perimetro = 2*altura + 2*base;
  area = altura*base;
  printf("Perimetro: %i\nArea: %i", perimetro, area);
  return 0;
}
