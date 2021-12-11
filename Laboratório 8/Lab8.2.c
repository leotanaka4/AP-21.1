#include <stdio.h>
int main () {
  /* vetor com 5 elementos */
  int saldo[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};
  int (*p)[5];
  int i, j;
  p = saldo;
  /* output valor de cada elemento do vetor */
  printf("Valores dos Elementos do Vetor Usando Ponteiro\n");
  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      printf("*(*(p + %d) + %d): %d\n", i, j, *(*(p + i) + j));
    }
  }
  printf(" Valores dos Elementos do Vetor Usando saldo como endereco\n");
  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      printf("*(*(saldo + %d) + %d) : %d\n", i, j, *(*(saldo + i) + j));
    }
  }
  return 0;
}
