#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct livro {
  char titulo[30];
  char autor[30];
  int isbn;
  struct livro *prox;
}pilha[MAX];

void insere(char a[], char b[], int c) {
  struct livro *nova;
  nova = malloc(sizeof(struct livro));
  nova->titulo = a;
  nova->autor = b;
  nova->isbn = c;
  nova->prox = pilha->prox;
  pilha->prox = nova;
}

int main() {
  char a[30], b[30];
  int resposta, c;
  printf("Biblioteca Nacional:\n\nDeseja inserir um livro(sim:1;nao:0): ");
  scanf("d", &resposta);
  if (resposta==1){
    printf("Digite o titulo: ");
    scanf("%s", &a[30]);
    printf("Digite o autor: ");
    scanf("%s", &b[30]);
    printf("Digite o ISBN: ");
    scanf("%s", &c);
    insere(a, b, c);
  }
  return 0;
}
