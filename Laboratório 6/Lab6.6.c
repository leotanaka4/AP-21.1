#include <stdio.h>
void hanoi(int n, char a, char b, char c)
{
  if (n==1) {printf("Mova disco %d de %c para %c\n", n, a, b);}
  else
  {
    hanoi(n-1, a, c, b);
    printf("Mova disco %d de %c para %c\n", n, a, b);
    hanoi(n-1, c, b, a);
  }
}
int main()
{
  int discos;
  printf("Numero de discos:\n");
  scanf("%d", &discos);
  hanoi(discos, 'A', 'B', 'C');
  return 0;
}
