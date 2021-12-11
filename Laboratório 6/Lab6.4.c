#include <stdio.h>
int menor;
int vetor[20];
int conta(){
  int i;
  menor = vetor[0];
  for (i=1;i<=19;i++){
  if (menor>vetor[i]){menor=vetor[i];}
  }
  return menor;
}

int main() {
  int i;
  for (i=0;i<=19;i++){printf("Vetor %d = ", i);scanf("%d", &vetor[i]);}
  printf("Menor numero = %d", conta());
  return 0;
}
