#include <stdio.h>

int main(){
  int a, b, c;
  printf("Entre o valor de a em formato decimal: ");
  scanf("%d", &a);
  printf("Entre o valor de b em formato octal: ");
  scanf("%i", &b);
  printf("Entre o valor de a em formato hexa: ");
  scanf("%i", &c);
  printf("\na = %i, b = %i, c = %i", a, b, c);
  printf("\na = %o, b = %o, c = %o", a, b, c);
  printf("\na = %X, b = %x, c = %X", a, b, c);
  return 0;
}
