#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void fase(int p) {
  int i, nE=0;
  int vet[p], resp[p];
  srand((unsigned) clock());
  for(i=0;i<p;i++) {vet[i]=rand() %50;printf("%d\t", vet[i]);}
  sleep(p*4);
  system("cls");
  printf("\nDigite os numeros na sequencia correta:\n\n");
  for(i=0;i<p;i++) {printf("numero %d = ", (i+1));scanf("%d", &resp[i]);}
  for(i=0;i<p;i++) {if (vet[i]!=resp[i]){nE++;}}
  if (nE==0) {printf("\nGanhou!\n\n");}
  else {printf("\nPerdeu!\n\n");}
}

int main() {
  printf("Jogo da Memoria:\n\nFase 1: \t");
  fase(3);
  sleep(5);
  system("cls");
  printf("Jogo da Memoria:\n\nFase 2: \t");
  fase(5);
  sleep(5);
  system("cls");
  printf("Jogo da Memoria:\n\nFase 3: \t");
  fase(7);
}
