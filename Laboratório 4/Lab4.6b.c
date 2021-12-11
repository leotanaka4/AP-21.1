#include <stdio.h>
int main()
{
  int n, vet[1000], c, d, t;
  printf("Entre nro de elementos\n");
  scanf("%d", &n);
  printf("Entre %d inteiros\n", n);
  for (c = 0; c < n; c++)
  {
    scanf("%d", &vet[c]);
  }
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
    while ( d > 0 && vet[d-1] > vet[d]) {
      t = vet[d];
      vet[d] = vet[d-1];
      vet[d-1] = t;
      d--;
    }
  }
  printf("Lista ordenada em ordem crescente:\n");
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", vet[c]);
  }
  return 0;
}
