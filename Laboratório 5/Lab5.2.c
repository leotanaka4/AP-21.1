#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
  int i, n=5, nE=0;
  int vet[5], resp[5];
  srand((unsigned) clock());
  printf("Jogo da Memoria:\n\n");
  for(i=0;i<n;i++) {vet[i]=rand() %50;printf("%d\t", vet[i]);}
  sleep(n*10);
  system("cls");
  printf("\nDigite os numeros na sequencia correta:\n\n");
  for(i=0;i<n;i++) {printf("numero %d = ", (i+1));scanf("%d", &resp[i]);}
  for(i=0;i<n;i++) {if (vet[i]!=resp[i]){nE++;}}
  if (nE==0) {printf("\nGanhou!");}
  else {printf("\nPerdeu!");}
  return 0;
}
