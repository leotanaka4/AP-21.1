#include <stdio.h>

int main() {
  int N, a, b, c, ND=0;
  printf("Informe quantos elementos no vetor de entrada N = ");
  scanf("%d", &N);
  int vet[N];
  printf("\nInforme os elementos do vetor:\n");
  for(a=0;a<N;a++){printf("\nelemento - %d = ", a);scanf("%d", &vet[a]);}
  for(b=0;b<N;b++){for(c=b+1;c<N;c++){if(vet[b]==vet[c]){ND++;}}}
  printf("\ntotal de elementos duplicados = %d", ND);
  return 0;
}
