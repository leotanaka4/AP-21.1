#include <stdio.h>

int main()
{
  int vet[100], n, c, d, posicao, aux;
  printf("Entre nro de elementos\n");
  scanf("%d", &n);
  printf("Entre %d inteiros\n", n);
  for ( c = 0 ; c < n ; c++ )
    scanf("%d", &vet[c]);
  for ( c = 0 ; c < ( n - 1 ) ; c++ )
  {
    posicao = c;
    for ( d = c + 1 ; d < n ; d++ )
    {
      if ( vet[posicao] > vet[d] )
      posicao = d;

    if ( posicao != c )
    {
      aux = vet[c];
      vet[c] = vet[posicao];
      vet[posicao] = aux;
    }
  }
  printf("Lista ordenada em ordem crescente:\n");
  for ( c = 0 ; c < n ; c++ )
    printf("%d\n", vet[c]);
  }
  return 0;
}
