#include <stdio.h>
int main()
{
  int c, primeiro, ultimo, meio, n, consulta, vet[100];
  printf("Entre nro de elementos\n");
  scanf("%d",&n);

  printf("Entre %d inteiros\n", n);
  for (c = 0; c < n; c++)
  scanf("%d",&vet[c]);

  printf("Entre valor a procurar\n");
  scanf("%d", &consulta);
  primeiro = 0;
  ultimo = n - 1;
  meio = (primeiro+ultimo)/2;
  while (primeiro <= ultimo) {
    if (vet[meio] < consulta)
      primeiro = meio + 1;
    else if (vet[meio] == consulta) {
      printf("%d encontrado na posicao %d.\n", consulta, meio+1);
      break;
    }
    else
      ultimo = meio - 1;
      meio = (primeiro + ultimo)/2;
  }
  if (primeiro > ultimo)
  printf("Nao encontrado! %d nao esta na lista.\n", consulta);
  return 0;
}
